// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS457LAB0103GameMode.h"
#include "SIS457LAB0103Ball.h"

ASIS457LAB0103GameMode::ASIS457LAB0103GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ASIS457LAB0103Ball::StaticClass();
}
