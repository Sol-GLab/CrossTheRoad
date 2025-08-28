#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FinishZoneActor.generated.h"

class UBoxComponent;
class APlayerCharacter;

UCLASS()
class CROSSTHEROAD_API AFinishZoneActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFinishZoneActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Collision box
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	UBoxComponent* EndZoneCollision;

	// Timer before restart and restart function
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RestartTimer")
	FTimerHandle Timer;

	UFUNCTION()
	void RestartLevel();

	// Overlap for endgame
	UFUNCTION()
	void EndGame(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
