#include "MyCameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

AMyCameraActor::AMyCameraActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyCameraActor::BeginPlay()
{
	Super::BeginPlay();

	// Find my character
	PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// Find character and watch him
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC && PlayerCharacter)
	{
		PC->SetViewTarget(this);
	}


}

void AMyCameraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Check if character didn't spawn immideately for some reason
	if (!PlayerCharacter)
	{
		PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		
		if (!PlayerCharacter) return;

	}

	// Find player and set camera on him
	if (PlayerCharacter)
	{
		FVector CharacterLocation = PlayerCharacter->GetActorLocation();
		FVector NewLocation = GetActorLocation();

		// Watch only Y axis
		NewLocation.Y = FMath::FInterpTo(NewLocation.Y, CharacterLocation.Y, DeltaTime, 5.0f);
		SetActorLocation(NewLocation);

	}	
}