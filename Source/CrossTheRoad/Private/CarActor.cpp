#include "CarActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerCharacter.h"
#include "GameOverWidget.h"
#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h" 

// Sets default values
ACarActor::ACarActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

	//Basic mesh and collision
	CarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarMesh"));
	RootComponent = CarMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(CarMesh);

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACarActor::PlayerOverlap);

}

// Called when the game starts or when spawned
void ACarActor::BeginPlay()
{
	Super::BeginPlay();

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACarActor::PlayerOverlap);
	

}

void ACarActor::SetEndPoint(FVector NewTarget)
{
	EndPoint = NewTarget;
	HasPoint = true;
}

// Called every frame
void ACarActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasPoint)
	{
		FVector CurrentLocation = GetActorLocation();
		FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, EndPoint, DeltaTime, Speed);

		SetActorLocation(NewLocation);

		float Distance = FVector::Dist(CurrentLocation, EndPoint);
		if (Distance < 0.1f)
		{
			Destroy();

		}
	}
}

// CarOverlap
void ACarActor::PlayerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,	const FHitResult& SweepResult)
{
	// Disable controls
	if (OtherActor && OtherActor->ActorHasTag("Player"))
	{
		APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(OtherActor);

		if (PlayerCharacter)
		{
			PlayerCharacter->IsMoving = true;
			PlayerCharacter->SetActorTickEnabled(false);
			
			for (TActorIterator<ACarActor> CarItr(GetWorld()); CarItr; ++CarItr)
			{
				CarItr->SetActorTickEnabled(false);
			}

			UE_LOG(LogTemp, Warning, TEXT("Player hit by car!"));

			// Game over
			AMyGameMode* GameOver = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
			if (GameOver)
			{
				GameOver->GameOverScreen();

			}
		}
	}
}



