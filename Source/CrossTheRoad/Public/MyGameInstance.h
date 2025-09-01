#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

UCLASS()
class CROSSTHEROAD_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	// Start function
	virtual void OnStart() override;
	
};
