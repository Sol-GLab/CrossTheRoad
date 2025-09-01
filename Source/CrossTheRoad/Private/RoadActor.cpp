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

	// Basic Mesh
	WallMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh1"));
	WallMesh1->SetupAttachment(RoadMesh);

	Wall1Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Wall1Collision"));
	Wall1Collision->SetupAttachment(WallMesh1);

	// Basic Mesh
	WallMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh2"));
	WallMesh2->SetupAttachment(RoadMesh);

	Wall2Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Wall2Collision"));
	Wall2Collision->SetupAttachment(WallMesh2);

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

