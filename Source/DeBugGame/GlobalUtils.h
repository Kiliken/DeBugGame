#pragma once


#include "CoreMinimal.h"



namespace GLOBALUTILS{

    static AActor* GetActorByName(FString actorName, UWorld* world);
    static TArray<AActor*> GetActorsByTag(FName tag, UWorld* world);
}