// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "firstue.h"
#include "firstueGameMode.h"
#include "firstuePlayerController.h"
#include "firstuePawn.h"

AfirstueGameMode::AfirstueGameMode()
{
	// no pawn by default
	DefaultPawnClass = AfirstuePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AfirstuePlayerController::StaticClass();
}
