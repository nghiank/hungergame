// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "hungergame.h"
#include "hungergameGameMode.h"
#include "hungergameHUD.h"
#include "hungergameCharacter.h"

AhungergameGameMode::AhungergameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AhungergameHUD::StaticClass();
}
