// Copyright Epic Games, Inc. All Rights Reserved.

#include "NeuralNetworkTestsGameMode.h"
#include "NeuralNetworkTestsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANeuralNetworkTestsGameMode::ANeuralNetworkTestsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
