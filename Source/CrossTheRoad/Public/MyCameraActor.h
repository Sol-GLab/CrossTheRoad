#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "MyCameraActor.generated.h"

UCLASS()
class CROSSTHEROAD_API AMyCameraActor : public ACameraActor
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	AMyCameraActor();

private:
	// Character
	ACharacter* PlayerCharacter;
};
