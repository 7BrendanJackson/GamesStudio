// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamesStudioGameMode.h"
#include "GamesStudioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamesStudioGameMode::AGamesStudioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
