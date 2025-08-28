#include "FinishZoneActor.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "MyGameMode.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFinishZoneActor::AFinishZoneActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Collision box and overlap
	EndZoneCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EndZoneCollision"));
	RootComponent = EndZoneCollision;

	EndZoneCollision->OnComponentBeginOverlap.AddDynamic(this, &AFinishZoneActor::EndGame);

}

// Called when the game starts or when spawned
void AFinishZoneActor::BeginPlay()
{
	Super::BeginPlay();

}

// Restart when finish is crossed
void AFinishZoneActor::EndGame(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
		UE_LOG(LogTemp, Warning, TEXT("Finish reached!"));
					
		// Disable controls
		APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(OtherActor);
		if (PlayerCharacter)
		{
			PlayerCharacter->IsMoving = true;
			PlayerCharacter->SetActorTickEnabled(false);

			UE_LOG(LogTemp, Warning, TEXT("Player movement disabled!"));

		}

		//Function for level counter
		AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));

		if (MyGameMode)
		{
			MyGameMode->NextLevel();

		}

		// Timer before restart
		GetWorldTimerManager().SetTimer(Timer, this, &AFinishZoneActor::RestartLevel, 3.0f, false);

		// Game end if win
		if (!GetWorld() || GetWorld()->bIsTearingDown)
		{
			return;

		}

		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());

		if (MyGameInstance->CurrentLevel >= MyGameMode->LastLevel)
		{
			MyGameMode->EndGame();

		}
}

// Called every frame
void AFinishZoneActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Restart level function
void AFinishZoneActor::RestartLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(*GetWorld()->GetName()));

}

