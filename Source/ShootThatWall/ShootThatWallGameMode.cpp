// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ShootThatWallGameMode.h"
#include "ShootThatWallPawn.h"

AShootThatWallGameMode::AShootThatWallGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AShootThatWallPawn::StaticClass();
}

