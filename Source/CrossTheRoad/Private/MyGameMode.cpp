#include "MyGameMode.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

// Possession of the character (and usage of bp instead of base model(No hardcode))
AMyGameMode::AMyGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerBPClass(TEXT("/Game/BPPlayerCharacter.BPPlayerCharacter_C"));
	if (PlayerBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerBPClass.Class;

	}


}

// Next Level
void AMyGameMode::NextLevel()
{

	if (!GetWorld() || GetWorld()->bIsTearingDown)
	{
		return;
	}

	UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if (MyGameInstance)
	{
		MyGameInstance->CurrentLevel++;
		UE_LOG(LogTemp, Warning, TEXT("MOVE TO LEVEL %i"), MyGameInstance->CurrentLevel)

	}
}

// End Game
void AMyGameMode::EndGame()
{
	// Check, game chrahed few times and it was suggestion
	if (!GetWorld() || GetWorld()->bIsTearingDown)
	{
		return;

	}

	UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());

	if (MyGameInstance->CurrentLevel >= LastLevel)
	{
		UE_LOG(LogTemp, Warning, TEXT("YOU WIN!"));

		UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);

	}
}
