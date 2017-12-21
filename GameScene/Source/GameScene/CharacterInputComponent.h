// Copyright by Mateusz Szynawa

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/InputComponent.h"
#include "Lamp.h"

#include "CharacterInputComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMESCENE_API UCharacterInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterInputComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Switch();

	void ChangeColor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UInputComponent* InputComponent = nullptr;

	UPROPERTY(EditAnywhere)
	class AActor* SelectedActor;

	AActor* Lamp = nullptr;

	bool isLightOn = true;

	bool isChangeColor = true;
};
