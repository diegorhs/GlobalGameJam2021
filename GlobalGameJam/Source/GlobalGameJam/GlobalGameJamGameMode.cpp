// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlobalGameJamGameMode.h"
#include "GlobalGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGlobalGameJamGameMode::AGlobalGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GlobalGameJam/Blueprints/GlobalGameJamCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
