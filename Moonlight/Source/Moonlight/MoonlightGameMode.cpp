// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoonlightGameMode.h"
#include "MoonlightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMoonlightGameMode::AMoonlightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
