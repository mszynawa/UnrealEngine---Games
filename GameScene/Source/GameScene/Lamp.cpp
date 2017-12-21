// Copyright by Mateusz Szynawa

#include "Lamp.h"
#include "Engine/StaticMesh.h"

// Sets default values
ALamp::ALamp(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	UStaticMesh* meshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Game/StarterContent/Props/SM_Lamp_Ceiling")));
	Mesh->SetStaticMesh(meshToUse);
	RootComponent = Mesh;

	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	PointLight->AttachTo(RootComponent);
	PointLight->SetWorldLocation(FVector(0.f, 0.f, -130.0f));
	PointLight->SetAttenuationRadius(500.f);
	PointLight->SetIntensity(5000.f);
	PointLight->SetCastShadows(false);

	//PointLight->SetNetAddressable();
	//PointLight->SetIsReplicated(true);
}

// Called when the game starts or when spawned
void ALamp::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ALamp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALamp::TurnOnLamp()
{
	PointLight->SetIntensity(0.f);
}

void ALamp::TurnOffLamp()
{
	PointLight->SetIntensity(5000.f);
}

void ALamp::ChangeColor(float r, float g, float b)
{
	PointLight->SetLightColor(FLinearColor(r, g, b));
}



