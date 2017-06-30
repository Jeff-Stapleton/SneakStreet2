// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SneakStreet2GameMode.h"
#include "SneakStreet2Character.h"
#include "UObject/ConstructorHelpers.h"

ASneakStreet2GameMode::ASneakStreet2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
