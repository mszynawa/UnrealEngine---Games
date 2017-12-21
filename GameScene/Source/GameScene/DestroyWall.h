// Copyright by Mateusz Szynawa

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestroyWall.generated.h"

UCLASS()
class GAMESCENE_API ADestroyWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADestroyWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
