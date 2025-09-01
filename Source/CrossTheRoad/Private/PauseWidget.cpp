#include "PauseWidget.h"
#include "PlayerCharacter.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UPauseWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Setup button click events
    if (ResumeButton)
    {
        ResumeButton->OnClicked.AddDynamic(this, &UPauseWidget::GameResumeClick);

    }

    if (MainMenuButton)
    {
        MainMenuButton->OnClicked.AddDynamic(this, &UPauseWidget::MainMenuClick);

    }

    if (QuitButton)
    {
        QuitButton->OnClicked.AddDynamic(this, &UPauseWidget::QuitGameClick);

    }

}

// Buttons functions
void UPauseWidget::GameResumeClick()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = false;
    }

    UGameplayStatics::SetGamePaused(GetWorld(), false);

    RemoveFromParent();

    APlayerCharacter* PCCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (PCCharacter)
    {
        PCCharacter->bIsGamePaused = false;
    }

}

void UPauseWidget::MainMenuClick()
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

void UPauseWidget::QuitGameClick()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);

}