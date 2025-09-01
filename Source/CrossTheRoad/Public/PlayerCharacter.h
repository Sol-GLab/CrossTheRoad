#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class ARoadGenerator;
class UPauseWidget;
class UHudWidget;

UCLASS()
class CROSSTHEROAD_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Free movement functions (for ckecks)
	//UFUNCTION(BlueprintCallable)
	//void FreeMoveForward(float Value);

	//UFUNCTION(BlueprintCallable)
	//void FreeMoveRight(float Value);

	//UFUNCTION(BlueprintCallable)
	//void RotateSide(float Value);

	//UFUNCTION(BlueprintCallable)
	//void RotateUp(float Value);

	// Movement functions
	UFUNCTION(BlueprintCallable)
	void MoveForward();

	UFUNCTION(BlueprintCallable)
	void MoveRight();

	UFUNCTION(BlueprintCallable)
	void MoveLeft();

	// Movement settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Distance = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Speed = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector EndLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector RotationAxis;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float Angle;

	// Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, category = "Mesh")
	UStaticMeshComponent* PlayerMesh;

	// Endless Road Generator
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EndlessRoad")
	ARoadGenerator* OverlapGeneration;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Check if movement is true
	UPROPERTY()
	bool IsMoving = false;

	//Overlap for counter
	UFUNCTION()
	void RoadTouch(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// For pause
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UPauseWidget> PauseWidgetClass;

	UPROPERTY()
	UPauseWidget* PauseWidgetInstance;

	UPROPERTY(BlueprintReadWrite)
	bool bIsGamePaused = false;
	
	// Pause fucntion
	void Pause();

	// Score
	UPROPERTY(BlueprintReadWrite, Category = "Score")
	int32 RoadsPassed = 0;

	// Score widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UHudWidget> ScoreWidgetClass;

	UPROPERTY()
	UHudWidget* ScoreWidgetInstance;
};
