#include "CarActorGenerator.h"
#include "CarActor.h"
#include "Engine/World.h"
#include "EngineUtils.h" 
#include "RoadActor.h"
#include "SafeRoadActor.h"
#include "RoadGenerator.h"
#include "FinishZoneActor.h"

// Sets default values
ACarActorGenerator::ACarActorGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACarActorGenerator::BeginPlay()
{
	Super::BeginPlay();
    NextSpawn();
}

// Called every frame
void ACarActorGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Spawn Car Function
void ACarActorGenerator::SpawnCars()
{
    // Check for stopped cars
    for (TActorIterator<ACarActor> CarItr(GetWorld()); CarItr; ++CarItr)
    {
        if (!CarItr->IsActorTickEnabled())
        {
            return; 

        }
    }

    float SpeedBoost = 0.0f;

    if (RoadNumber)
    {  
        for (ARoadActor* Road : RoadNumber->RoadsCounter)
        {
                if (!Road || Road->IsA(ASafeRoadActor::StaticClass()))
                continue;

                // Spawn Side
                bool FirstSpawn;
                if (LastSpawn.Contains(Road))
                {
                    FirstSpawn = LastSpawn[Road];

                }

                else
                {
                    FirstSpawn = FMath::RandBool();
                    LastSpawn.Add(Road, FirstSpawn);

                }

                USceneComponent* SpawnPoint = FirstSpawn ? Road->SpawnPointLeft : Road->SpawnPointRight;
                USceneComponent* EndPoint = FirstSpawn ? Road->SpawnPointRight : Road->SpawnPointLeft;

                if (SpawnPoint && Car)
                {
                    FVector Location = SpawnPoint->GetComponentLocation();
                    FTransform Spawn(Location);
                    ACarActor* CarsSpawn = GetWorld()->SpawnActor<ACarActor>(Car, Spawn);

                    if (CarsSpawn)
                    {
                        CarsSpawn->SetEndPoint(EndPoint->GetComponentLocation());
                        CarsSpawn->Speed += SpeedBoost;

                    }

                    UE_LOG(LogTemp, Warning, TEXT("Cars Spawned!"));
                }

                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("Cars didn't spawn"));

                }  

                SpeedBoost += 50.0f;
        }
    }

    NextSpawn();
}

//Next spawn function
void ACarActorGenerator::NextSpawn()
{
    float Interval = FMath::FRandRange(MinTime, MaxTime);
    GetWorld()->GetTimerManager().SetTimer(CarSpawnTimer, this, &ACarActorGenerator::SpawnCars, Interval, false);
}


