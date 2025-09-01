#include "GameOverWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UGameOverWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Setup button click events
    if (RestartButton)
    {
        RestartButton->OnClicked.AddDynamic(this, &UGameOverWidget::GameRestartClick);

    }

    if (MainMenuButton)
    {
        MainMenuButton->OnClicked.AddDynamic(this, &UGameOverWidget::MainMenuClick);

    }

    if (QuitButton)
    {
        QuitButton->OnClicked.AddDynamic(this, &UGameOverWidget::QuitGameClick);

    }

}

// Buttons functions
void UGameOverWidget::GameRestartClick()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = false;
    }

    UGameplayStatics::SetGamePaused(GetWorld(), false);

    UGameplayStatics::OpenLevel(GetWorld(), FName(*GetWorld()->GetName()));

}

void UGameOverWidget::MainMenuClick()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = false;
    }

    UGameplayStatics::SetGamePaused(GetWorld(), false);
    UGameplayStatics::OpenLevel(GetWorld(), "MainMenu");

}

void UGameOverWidget::QuitGameClick()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);

}