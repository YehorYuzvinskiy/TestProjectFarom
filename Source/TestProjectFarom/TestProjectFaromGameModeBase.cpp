// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestProjectFaromGameModeBase.h"
#include "PlayerPlatform.h"
#include "PlayerPlatformController.h"

ATestProjectFaromGameModeBase::ATestProjectFaromGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPlatform(TEXT("/Game/Blueprints/BP_PlayerPlatform"));
	if (PlayerPlatform.Class != NULL)
	{
		DefaultPawnClass = PlayerPlatform.Class;
	}
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerPlatformController(TEXT("/Game/Blueprints/BP_PlayerPlatformController"));
	if (PlayerPlatformController.Class != NULL)
	{
		PlayerControllerClass = PlayerPlatformController.Class;
	}
}