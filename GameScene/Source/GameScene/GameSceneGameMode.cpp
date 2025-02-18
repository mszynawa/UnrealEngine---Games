// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GameSceneGameMode.h"
#include "GameSceneHUD.h"
#include "GameSceneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameSceneGameMode::AGameSceneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameSceneHUD::StaticClass();
}
