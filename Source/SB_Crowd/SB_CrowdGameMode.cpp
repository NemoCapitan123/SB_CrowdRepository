// Copyright Epic Games, Inc. All Rights Reserved.

#include "SB_CrowdGameMode.h"
#include "SB_CrowdCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASB_CrowdGameMode::ASB_CrowdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
