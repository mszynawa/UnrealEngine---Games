// Copyright by Mateusz Szynawa

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Engine/TriggerBox.h"

#include "Lamp.generated.h"

UCLASS()
class GAMESCENE_API ALamp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALamp(const FObjectInitializer& ObjectInitializer);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TurnOnLamp();

	void TurnOffLamp();

	void ChangeColor(float r, float g, float b);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	UPointLightComponent* PointLight;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};



//int lightFactor = 0;
//bool changecolor = false;
