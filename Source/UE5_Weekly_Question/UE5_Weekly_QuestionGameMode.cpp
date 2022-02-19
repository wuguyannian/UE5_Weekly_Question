// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_Weekly_QuestionGameMode.h"
#include "UE5_Weekly_QuestionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_Weekly_QuestionGameMode::AUE5_Weekly_QuestionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
