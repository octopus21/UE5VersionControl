// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5VersionControlGameMode.h"
#include "UE5VersionControlCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5VersionControlGameMode::AUE5VersionControlGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
