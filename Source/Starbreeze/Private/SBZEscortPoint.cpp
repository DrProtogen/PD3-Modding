#include "SBZEscortPoint.h"
#include "UObject/NoExportTypes.h"

ASBZEscortPoint::ASBZEscortPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


