#include "SBZActorSpawnBase.h"
#include "UObject/NoExportTypes.h"

ASBZActorSpawnBase::ASBZActorSpawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Seed = -1;
    this->bRandomizeSpawnTransformStartingIndex = true;
    this->NextSpawnTransformIndex = 0;
    this->bIsMainMenuOnly = true;
}


