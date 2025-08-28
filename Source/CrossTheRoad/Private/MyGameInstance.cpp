#include "MyGameInstance.h"
#include "MainMenuWidget.h"
#include "Blueprint/UserWidget.h"

void UMyGameInstance::OnStart()
{
    Super::OnStart();

    // Create and show the menu when game starts
    if (MainMenuWidget)
    {
        UMainMenuWidget* MenuWidget = CreateWidget<UMainMenuWidget>(this, MainMenuWidget);
        if (MenuWidget)
        {
            MenuWidget->AddToViewport();

            APlayerController* PC = GetFirstLocalPlayerController();
            if (PC)
            {
                PC->SetInputMode(FInputModeUIOnly());
                PC->bShowMouseCursor = true;
            }
        }
    }
}