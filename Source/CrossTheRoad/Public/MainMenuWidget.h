#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

class UButton;

UCLASS()
class CROSSTHEROAD_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

private:
    // Button click functions
    UFUNCTION(BlueprintCallable)
    void GameStartClick();

    UFUNCTION(BlueprintCallable)
    void QuitGameClick();

protected:
    // Called when widget is created
    virtual void NativeConstruct() override;

public:
   
    //Buttons
    UPROPERTY(meta = (BindWidget)) 
    UButton* StartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;
	
};
