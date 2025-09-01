#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Setup button click events
    if (StartButton)
    {
        StartButton->OnClicked.AddDynamic(this, &UMainMenuWidget::GameStartClick);

    }

    if (QuitButton)
    {
        QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::QuitGameClick);

    }

}

// Start and quit functions
void UMainMenuWidget::GameStartClick()
{
    UGameplayStatics::OpenLevel(GetWorld(), FName("/Game/Game"));

}

void UMainMenuWidget::QuitGameClick()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);

}