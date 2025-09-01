#include "RoadGenerator.h"
#include "RoadActor.h"
#include "SafeRoadActor.h"
#include "CarActor.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "CarActorGenerator.h"

// Sets default values
ARoadGenerator::ARoadGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ARoadGenerator::BeginPlay()
{
	Super::BeginPlay();

    LastSpawnedRoad = GetActorLocation();

    RoadsGenerator();
    NumberOfRoads = 1;

}

// Roads generator function
void ARoadGenerator::RoadsGenerator()
{
    for (int i = 0; i < NumberOfRoads; i++)
    {
        // Logic for spawning roads (no more the 1 safe road in a row and no more then 4 roads in a row)
        TSubclassOf<ARoadActor> RandomSpawn;

        if (RoadCount >= 4)
        {
            RandomSpawn = SafeRoad;

        }

        else if (SafeRoadCount >= 1)
        {
            RandomSpawn = Road;

        }

        else
        {
            bool Random = FMath::RandBool();
            RandomSpawn = Random ? Road : SafeRoad;

        }

        if (RandomSpawn == Road)
        {
            RoadCount++;
            SafeRoadCount = 0;
        }

        else
        {
            SafeRoadCount++;
            RoadCount = 0;

        }

        ARoadActor* RoadsSpawn = nullptr;

        //Road Gen
        if (RandomSpawn)
        {
            Location = LastSpawnedRoad + (Direction * Distance);
            FTransform Spawn(Location);
            RoadsSpawn = GetWorld()->SpawnActor<ARoadActor>(RandomSpawn, Spawn);

        }

        if (RoadsSpawn)
        {
            // Last spawned road location for endless generation
            LastSpawnedRoad = Location;    

            // Speed boost for every road
            RoadsSpawn->SpeedBoost = SpawnedRoadsTotal * BoostIncrement;

            RoadsCounter.Add(RoadsSpawn);

            UE_LOG(LogTemp, Warning, TEXT("Road spawned"));

            // Totat roads number increment
            SpawnedRoadsTotal++;

            // Initial cars spawn
            if (InitialGen && !RoadsSpawn->IsA(ASafeRoadActor::StaticClass()))
            {
                InitialGen->InitialSpawnCars(RoadsSpawn);
            }

        }

        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Road didn't spawn!"));

        }

        // Roads destroyer
        if (RoadsCounter.Num() > 15)
        {
            RoadsCounter[0]->Destroy();
            RoadsCounter.RemoveAt(0);

            UE_LOG(LogTemp, Warning, TEXT("Road is destroyed!"));

        }
    }
}

// Called every frame
void ARoadGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
