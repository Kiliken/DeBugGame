
#include "GlobalUtils.h"
#include <Kismet/GameplayStatics.h>
#include <Engine/World.h>


static AActor* GLOBALUTILS::GetActorByName(FString actorName, UWorld* world) {

	TArray<AActor*> actorInScene{};

	UGameplayStatics::GetAllActorsOfClass(world, AActor::StaticClass(), actorInScene);

	for (AActor* actor : actorInScene) {

		if (!actor) continue;

		if (actor == nullptr) return nullptr;

		if (actor->GetName() == actorName) return actor;
	}

	return nullptr;
}

static TArray<AActor*> GLOBALUTILS::GetActorsByTag(FName tag, UWorld* world)
{
	TArray<AActor*> actorsArray;
	TArray<AActor*> actorInScene;

    actorsArray.Empty();
    UGameplayStatics::GetAllActorsOfClass(world, AActor::StaticClass(), actorInScene);

    for (AActor* actor : actorInScene)
    {
        if (!actor) continue;

        if (actor->Tags.Contains(tag))
        {
            actorsArray.Add(actor);
        }
    }

	return actorsArray;
}

