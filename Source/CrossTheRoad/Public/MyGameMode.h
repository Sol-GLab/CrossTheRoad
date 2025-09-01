#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameMode.generated.h"

class UGameOverWidget;

UCLASS()
class CROSSTHEROAD_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values 
	AMyGameMode();
	
	// Game over widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UGameOverWidget> GameOverWidgetClass;

	// Widget fucntion
	UFUNCTION(BlueprintCallable)
	void GameOverScreen();
};
