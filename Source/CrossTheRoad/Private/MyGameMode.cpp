#include "MyGameMode.h"
#include "MyGameInstance.h"
#include "GameOverWidget.h"
#include "PlayerCharacter.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

// Possession of the character (and usage of bp instead of base model(No hardcode))
AMyGameMode::AMyGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerBPClass(TEXT("/Game/BPPlayerCharacter.BPPlayerCharacter_C"));
	if (PlayerBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerBPClass.Class;

	}

	static ConstructorHelpers::FClassFinder<UGameOverWidget> WidgetBPClass(TEXT("/Game/BPGameOverWidget"));
	if (WidgetBPClass.Class != nullptr)
	{
		GameOverWidgetClass = WidgetBPClass.Class;
	}

}

// Widget function
void AMyGameMode::GameOverScreen()
{
	// For total points counter
	APlayerCharacter* Player = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter not found!"));
		return;
	}

	int32 TotalScore = Player->RoadsPassed;

	if (GameOverWidgetClass) 
	{
		UGameOverWidget* GameOverWidget = CreateWidget<UGameOverWidget>(GetWorld(), GameOverWidgetClass);
		if (GameOverWidget)
		{
			GameOverWidget->AddToViewport();

			// Total score
			if (GameOverWidget->TotalScoreBlock)
			{
				GameOverWidget->TotalScoreBlock->SetText(FText::FromString(FString::Printf(TEXT("Total Score: %d"), TotalScore)));

			}

			APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			if (PC)
			{
				FInputModeUIOnly InputMode;
				InputMode.SetWidgetToFocus(GameOverWidget->TakeWidget());
				InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
				PC->SetInputMode(InputMode);
				PC->bShowMouseCursor = true;
			}
		}
	}

	// Game pause
	UGameplayStatics::SetGamePaused(GetWorld(), true);
}