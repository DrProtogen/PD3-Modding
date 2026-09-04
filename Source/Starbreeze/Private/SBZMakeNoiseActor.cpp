#include "SBZMakeNoiseActor.h"
#include "UObject/NoExportTypes.h"

ASBZMakeNoiseActor::ASBZMakeNoiseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


