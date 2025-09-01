#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseWidget.generated.h"

class UButton;

UCLASS()
class CROSSTHEROAD_API UPauseWidget : public UUserWidget
{
	GENERATED_BODY()

private:
    // Button click functions
    UFUNCTION(BlueprintCallable)
    void GameResumeClick();

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
    UButton* ResumeButton;

    UPROPERTY(meta = (BindWidget))
    UButton* MainMenuButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;
	
};
