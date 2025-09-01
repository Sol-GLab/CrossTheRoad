#include "CarActorGenerator.h"
#include "CarActor.h"
#include "Engine/World.h"
#include "EngineUtils.h" 
#include "RoadActor.h"
#include "SafeRoadActor.h"
#include "RoadGenerator.h"

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

    // Checks for spawn
    if (RoadNumber)
    {  
        for (ARoadActor* Road : RoadNumber->RoadsCounter)
        {
                if (!Road || Road->IsA(ASafeRoadActor::StaticClass()))
                continue;

                // Spawn Side and logic
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

                        // Speed boost
                        CarsSpawn->Speed += Road->SpeedBoost;

                    }

                    UE_LOG(LogTemp, Warning, TEXT("Cars Spawned!"));
                }

                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("Cars didn't spawn"));

                }  
        }
    }

    NextSpawn();
}

// Function for initial spawn of the cars
void ACarActorGenerator::InitialSpawnCars(ARoadActor* Road)
{
    if (!Road || !Car) return;

    // Same logic as in SpawnCars function
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

    // Get start and end points based on direction
    USceneComponent* StartPoint = FirstSpawn ? Road->SpawnPointLeft : Road->SpawnPointRight;
    USceneComponent* EndPoint = FirstSpawn ? Road->SpawnPointRight : Road->SpawnPointLeft;

    if (!StartPoint || !EndPoint) return;

    // Calculation for direction and lenth
    FVector StartLocation = StartPoint->GetComponentLocation();
    FVector EndLocation = EndPoint->GetComponentLocation();
    FVector RoadDirection = (EndLocation - StartLocation).GetSafeNormal();
    float RoadLength = FVector::Dist(StartLocation, EndLocation);

    // Random positions generator
    TArray<float> SpawnPositions;
    float CurrentPosition = CarLength;

    // Spawn points will spawn until the reach of the end point
    while (CurrentPosition < (RoadLength - CarLength * 2))
    {
        SpawnPositions.Add(CurrentPosition);

        // Random distance of car spawn poitns on the road
        float RandomDistance = FMath::FRandRange(CarLength, MaxDistance);
        CurrentPosition += RandomDistance;

    }

    // Spawn cars at the generated positions
    for (float Position : SpawnPositions)
    {
        // Calculation for direction
        FVector SpawnLocation = StartLocation + (RoadDirection * Position);
        FRotator SpawnRotation = RoadDirection.Rotation();
        FTransform SpawnTransform(SpawnRotation, SpawnLocation);

        ACarActor* SpawnedCar = GetWorld()->SpawnActor<ACarActor>(Car, SpawnTransform);
        if (SpawnedCar)
        {
            SpawnedCar->SetEndPoint(EndLocation);

            SpawnedCar->Speed += Road->SpeedBoost;

        }
    }
}

//Next spawn function
void ACarActorGenerator::NextSpawn()
{
    float Interval = FMath::FRandRange(MinTime, MaxTime);
    Interval -= RoadNumber->RoadsCounter.Num() * 0.05f;
    Interval = FMath::Clamp(Interval, 0.5f, MaxTime);
    GetWorld()->GetTimerManager().SetTimer(CarSpawnTimer, this, &ACarActorGenerator::SpawnCars, Interval, false);

}