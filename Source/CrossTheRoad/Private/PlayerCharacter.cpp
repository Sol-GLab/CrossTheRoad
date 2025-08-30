#include "PlayerCharacter.h"
#include "CarActor.h"
#include "RoadGenerator.h"
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

	// Camera and SpringArm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// SpringArm and camera position
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 350.0f;
	SpringArm->bUsePawnControlRotation = false;

	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;

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
	
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

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

// Overlap Function for counting roads
void APlayerCharacter::RoadTouch(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsValid(OverlapGeneration)) return;

	UE_LOG(LogTemp, Warning, TEXT("Road is touched"));
	OverlapGeneration->RoadsGenerator();

}

