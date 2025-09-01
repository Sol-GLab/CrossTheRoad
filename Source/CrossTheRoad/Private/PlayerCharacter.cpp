#include "PlayerCharacter.h"
#include "CarActor.h"
#include "RoadGenerator.h"
#include "PauseWidget.h"
#include "HudWidget.h"
#include "Components/TextBlock.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "KisMet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Basic Mesh
	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	PlayerMesh->SetupAttachment(RootComponent);

	//Collisions overlapping
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::RoadTouch);

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	RotationSpeed = 90.f * Speed / Distance;

	OverlapGeneration = Cast<ARoadGenerator>(UGameplayStatics::GetActorOfClass(GetWorld(), ARoadGenerator::StaticClass()));
	
	// Widget on the screen
	if (ScoreWidgetClass)
	{
		ScoreWidgetInstance = CreateWidget<UHudWidget>(GetWorld(), ScoreWidgetClass);
		if (ScoreWidgetInstance)
		{
			ScoreWidgetInstance->AddToViewport();
		}
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Pause
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &APlayerCharacter::Pause);

	// Free Controls (for checks)
	/*PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::FreeMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::FreeMoveRight);
	PlayerInputComponent->BindAxis("RotateSide", this, &APlayerCharacter::RotateSide);
	PlayerInputComponent->BindAxis("RotateUp", this, &APlayerCharacter::RotateUp);*/

	// Movement controls
	PlayerInputComponent->BindAction("MoveForward", IE_Pressed, this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &APlayerCharacter::MoveLeft);

}

 // Free Movement funcions (for checks)
/*
void APlayerCharacter::FreeMoveForward(GetActorForwardVector(), value)
{
	AddMovementInput(GetActorForwardVector(), value);

}

void APlayerCharacter::FreeMoveRight(float value)
{
	AddMovementInput(GetActorRightVector(), value);

}

void APlayerCharacter::RotateSide(float value)
{
	AddControllerYawInput(value);

}

void APlayerCharacter::RotateUp(float value)
{
	AddControllerPitchInput(value);

}*/

// Player movement functions with rotation
void APlayerCharacter::MoveForward()
{
	if (IsMoving) return;

	IsMoving = true;

	EndLocation = GetActorLocation() + GetActorForwardVector() * Distance;

	FVector MoveDir = (EndLocation - GetActorLocation()).GetSafeNormal();
	RotationAxis = FVector(-1, 0, 0);
	Angle = 0.f;

}

void APlayerCharacter::MoveRight()
{
	if (IsMoving) return;

	IsMoving = true;

	EndLocation = GetActorLocation() + GetActorRightVector() * Distance;

	FVector RotationDirection = (EndLocation - GetActorLocation()).GetSafeNormal();
	RotationAxis = FVector(0, -1, 0);
	Angle = 0.f;

}

void APlayerCharacter::MoveLeft()
{
	if (IsMoving) return;

	IsMoving = true;

	EndLocation = GetActorLocation() - GetActorRightVector() * Distance;

	FVector RotationDirection = (EndLocation - GetActorLocation()).GetSafeNormal();
	RotationAxis = FVector(0, 1, 0);
	Angle = 0.f;

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//　Movement and rotation
	if (IsMoving)
	{
		// Movement
		FVector PlayerLocation = GetActorLocation();
		FVector NewLocation = FMath::VInterpConstantTo(PlayerLocation, EndLocation, DeltaTime, Speed);

		SetActorLocation(NewLocation);

		// Rotation
		float Rotation = RotationSpeed * DeltaTime;
		Angle += Rotation;

		FQuat DeltaQuat(RotationAxis.GetSafeNormal(), FMath::DegreesToRadians(Rotation));
		PlayerMesh->AddWorldRotation(DeltaQuat);

		// check for end point
		if (FVector::Dist(NewLocation, EndLocation) < 5.0f)
		{
			Angle = 0.f;
			SetActorLocation(EndLocation);
			IsMoving = false;

		}		
	}
}

// Overlap Function for counting roads and spawning more roads
void APlayerCharacter::RoadTouch(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsValid(OverlapGeneration)) return;

	// For score
	if (OtherActor && OtherActor->ActorHasTag("ForCounter"))
	{
		RoadsPassed++;
		UE_LOG(LogTemp, Warning, TEXT("Score: %d"), RoadsPassed);
	}

	if (ScoreWidgetInstance && ScoreWidgetInstance->TotalScoreBlock)
	{
		ScoreWidgetInstance->TotalScoreBlock->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), RoadsPassed)));
	}


	UE_LOG(LogTemp, Warning, TEXT("Road is touched"));
	OverlapGeneration->RoadsGenerator();

}

// Pause function
void APlayerCharacter::Pause()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PC) return;

	if (!bIsGamePaused)
	{
		// Display widget
		if (!PauseWidgetInstance && PauseWidgetClass)
		{
			PauseWidgetInstance = CreateWidget<UPauseWidget>(GetWorld(), PauseWidgetClass);
		}

		if (PauseWidgetInstance)
		{
			PauseWidgetInstance->AddToViewport();

			FInputModeUIOnly InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PC->SetInputMode(InputMode);
			PC->bShowMouseCursor = true;

			UGameplayStatics::SetGamePaused(GetWorld(), true);
			bIsGamePaused = true;
		}
	}
	else
	{
		// Hide widget if pause
		if (PauseWidgetInstance)
		{
			PauseWidgetInstance->RemoveFromParent();
		}

		FInputModeGameOnly InputMode;
		PC->SetInputMode(InputMode);
		PC->bShowMouseCursor = false;

		UGameplayStatics::SetGamePaused(GetWorld(), false);
		bIsGamePaused = false;
	}
}

