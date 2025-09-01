#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HudWidget.generated.h"

class UTextBlock;

UCLASS()
class CROSSTHEROAD_API UHudWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Score text block
	UPROPERTY(meta = (BindWidget))
	UTextBlock* TotalScoreBlock;
	
};
