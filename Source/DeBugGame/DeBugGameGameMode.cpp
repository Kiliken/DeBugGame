// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeBugGameGameMode.h"
#include "GameController.h"

ADeBugGameGameMode::ADeBugGameGameMode()
{
	UWorld* const World = GetWorld();
	UE_LOG(LogTemp, Log, TEXT("GameMode Started..."));
	// stub
	if (World)
    {
        // Setup game controller
        AGameController* GameContoller = World->SpawnActor<AGameController>();

        if (GameContoller)
        {
            // Further configuration can be done here after spawning
            UE_LOG(LogTemp, Log, TEXT("GameController Successfully instantiated..."));
        }else UE_LOG(LogTemp, Log, TEXT("Couldnt spawn GameController..."));
		
    }else UE_LOG(LogTemp, Log, TEXT("No World Found..."));
}
