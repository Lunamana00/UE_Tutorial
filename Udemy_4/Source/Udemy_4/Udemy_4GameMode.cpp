// Copyright Epic Games, Inc. All Rights Reserved.

#include "Udemy_4GameMode.h"
#include "Udemy_4Character.h"
#include "UObject/ConstructorHelpers.h"

AUdemy_4GameMode::AUdemy_4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
