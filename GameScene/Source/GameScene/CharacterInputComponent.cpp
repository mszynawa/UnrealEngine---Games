// Copyright by Mateusz Szynawa

#include "CharacterInputComponent.h"

#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Public/EngineUtils.h"

#include "EngineUtils.h"
#include "Lamp.h"

// Sets default values for this component's properties
UCharacterInputComponent::UCharacterInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterInputComponent::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("Character Input reporting for duty!"))

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input component found."))

		InputComponent->BindAction("Switch", IE_Pressed, this, &UCharacterInputComponent::Switch);
		InputComponent->BindAction("ChangeColor", IE_Pressed, this, &UCharacterInputComponent::ChangeColor);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("%s missing input component!"), *GetOwner()->GetName())
	}	
}

// Called every frame
void UCharacterInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterInputComponent::Switch()
{
	UE_LOG(LogTemp, Warning, TEXT("Switch pressed"))
	
	if (isLightOn == true)
	{
		for (TActorIterator<ALamp> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AActor* Mesh = *ActorItr;
			
			ActorItr->TurnOnLamp();
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorItr->GetName())			
		}
		isLightOn = false;
	}
	else
	{
		for (TActorIterator<ALamp> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AActor* Mesh = *ActorItr;

			ActorItr->TurnOffLamp();
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorItr->GetName())
		}
		isLightOn = true;
	}
}

void UCharacterInputComponent::ChangeColor()
{
	UE_LOG(LogTemp, Warning, TEXT("ChangeColor pressed"))

	if (isChangeColor == true)
	{
		for (TActorIterator<ALamp> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AActor* Mesh = *ActorItr;

			ActorItr->ChangeColor(0.f, 0.f, 255.f);
			//UE_LOG(LogTemp, Warning, TEXT("zmiana koloru"))
		}
		isChangeColor = false;
	}
	else
	{
		for (TActorIterator<ALamp> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AActor* Mesh = *ActorItr;

			ActorItr->ChangeColor(255.f, 255.f, 255.f);
			//UE_LOG(LogTemp, Warning, TEXT("a tu co?"), *ActorItr->GetName())
		}
		isChangeColor = true;
	}
}


