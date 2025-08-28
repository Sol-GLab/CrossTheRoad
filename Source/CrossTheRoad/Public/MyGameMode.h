#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameMode.generated.h"

UCLASS()
class CROSSTHEROAD_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values 
	AMyGameMode();
	
	// Current Level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 CurrentLevel;

	// Max level
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Last level")
	int32 LastLevel = 10;

	// Next level function
	UFUNCTION()
	void NextLevel();
	void EndGame();

};
