// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdemySection3GameMode.h"
#include "UdemySection3Character.h"
#include "UObject/ConstructorHelpers.h"

AUdemySection3GameMode::AUdemySection3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
