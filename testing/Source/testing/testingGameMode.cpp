// Copyright Epic Games, Inc. All Rights Reserved.

#include "testingGameMode.h"
#include "testingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestingGameMode::AtestingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/MytestingCharacter.MytestingCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
