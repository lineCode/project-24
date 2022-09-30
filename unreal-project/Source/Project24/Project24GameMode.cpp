// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project24GameMode.h"
#include "Project24Character.h"
#include "UObject/ConstructorHelpers.h"

AProject24GameMode::AProject24GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
