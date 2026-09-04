#include "SBZHoldOutDroneReaction.h"
#include "UObject/NoExportTypes.h"

ASBZHoldOutDroneReaction::ASBZHoldOutDroneReaction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->LifeSpanWhenInvalidated = 1.00f;
    this->Drone = NULL;
}



