#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOverWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS()
class CROSSTHEROAD_API UGameOverWidget : public UUserWidget
{
	GENERATED_BODY()

private:
    // Button click functions
    UFUNCTION(BlueprintCallable)
    void GameRestartClick();

    UFUNCTION(BlueprintCallable)
    void MainMenuClick();

    UFUNCTION(BlueprintCallable)
    void QuitGameClick();

protected:
    // Called when widget is created
    virtual void NativeConstruct() override;

public:

    //Buttons
    UPROPERTY(meta = (BindWidget))
    UButton* RestartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* MainMenuButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;

public:
    // Total score display
    UPROPERTY(meta = (BindWidget))
    UTextBlock* TotalScoreBlock;

	
};
