#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "CarActorGenerator.generated.h"

class ACarActor;
class ARoadActor;
class ARoadGenerator;
UCLASS()

class CROSSTHEROAD_API ACarActorGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACarActorGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Cars spawn
	UPROPERTY(EditAnywhere, Category = "Settings")
	TSubclassOf<ACarActor> Car;

	// Roads Counter
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RoadGeneratorHere")
	ARoadGenerator* RoadNumber;
	
	// Timer For spawn
	FTimerHandle CarSpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settimgs")
	float MinTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float MaxTime = 3.0f;

	// Initial cars spawn (roads are full of cars from the beginning)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CarSpawning")
	float CarLength = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CarSpawning")
	float MaxDistance = 600.0f;

	// Car spawn and timer functions
	void SpawnCars();
	void NextSpawn();

	// Same Spawn
	UPROPERTY()
	TMap<ARoadActor*, bool> LastSpawn;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function for initial spawn of the cars 
	UFUNCTION()
	void InitialSpawnCars(ARoadActor* Road);

};
