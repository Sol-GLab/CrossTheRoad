#include "RoadActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"


// Sets default values
ARoadActor::ARoadActor()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Basic Mesh
	RoadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoadMesh"));
	RootComponent = RoadMesh;

	// Collision box
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(RoadMesh);

	// Spawn points
	SpawnPointRight = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPointRight"));
	SpawnPointRight->SetupAttachment(RoadMesh);

	SpawnPointLeft = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPointLeft"));
	SpawnPointLeft->SetupAttachment(RoadMesh);
}

// Called when the game starts or when spawned
void ARoadActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoadActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

