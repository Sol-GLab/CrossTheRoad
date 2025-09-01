#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoadGenerator.generated.h"

class ARoadActor;
class ASafeRoadActor;
class ARoadGenerator;
class ACarActor;
class ACarActorGenerator;

UCLASS()
class CROSSTHEROAD_API ARoadGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoadGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Roads Settings
	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 NumberOfRoads;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float Distance;

	UPROPERTY(EditAnywhere, Category = "Settings")
	FVector Direction;

	// Roads variables for spawn randomiser
	UPROPERTY()
	int RoadCount = 0;

	UPROPERTY()
	int SafeRoadCount = 0;

	// First and last spawned road locations
	FVector Location;
	FVector LastSpawnedRoad;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Road Gen
	UPROPERTY(EditAnywhere, Category = "Settings")
	TSubclassOf<ARoadActor> Road;

	UPROPERTY(EditAnywhere, Category = "Settings")
	TSubclassOf<ARoadActor> SafeRoad;

	//Roads counter
	UPROPERTY()
	TArray<ARoadActor*> RoadsCounter;

	// Total spawned roads counter
	UPROPERTY()
	int SpawnedRoadsTotal;

	// Speed boost increment value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpeedBoostIncrementValue")
	float BoostIncrement = 15.0f;

	// Initioal spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CarGenerator")
	ACarActorGenerator* InitialGen;

	//Roads generation funcion
	UFUNCTION()
	void RoadsGenerator();

};
