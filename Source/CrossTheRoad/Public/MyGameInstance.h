#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CROSSTHEROAD_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	
	//Level instance
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LevelCounter")
	int32 CurrentLevel = 1;
	
};
