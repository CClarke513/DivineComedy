// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheDivineComedyGameMode.h"
#include "TheDivineComedyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheDivineComedyGameMode::ATheDivineComedyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
