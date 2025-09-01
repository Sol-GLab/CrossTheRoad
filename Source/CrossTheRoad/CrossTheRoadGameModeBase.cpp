#include "CrossTheRoadGameModeBase.h"
#include "PlayerCharacter.h"

// Possession of the character (and usage of bp instead of base model(No hardcode))
ACrossTheRoadGameModeBase::ACrossTheRoadGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerBPClass(TEXT("/Game/BPPlayerCharacter.BPPlayerCharacter_C"));
	if (PlayerBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerBPClass.Class;

	}

	
}


