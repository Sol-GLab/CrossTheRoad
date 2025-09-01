#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CarActor.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UGameOverWidget;

UCLASS()
class CROSSTHEROAD_API ACarActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACarActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Basic mesh and collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseMesh")
	UStaticMeshComponent* CarMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CollisionBox")
	UBoxComponent* CollisionBox;

	// Movement
	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	FVector EndPoint;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	bool HasPoint = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Car setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CollisionBox")
	float Speed = 100.0f;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetEndPoint(FVector NewTarget);

	// Timer before restart and restart function
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RestartTimer")
	FTimerHandle Timer;

	//Overlap event
	UFUNCTION()
	void PlayerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,	const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UGameOverWidget> GameOverWidgetClass;
};
