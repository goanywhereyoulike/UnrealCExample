// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCExampleGameMode.h"
#include "UnrealCExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCExampleGameMode::AUnrealCExampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
