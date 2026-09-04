#include "SBZBagRespawnPoint.h"
#include "UObject/NoExportTypes.h"

ASBZBagRespawnPoint::ASBZBagRespawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bStartEnabled = true;
}

void ASBZBagRespawnPoint::EnableBagRespawnPoint() {
}

void ASBZBagRespawnPoint::DisableBagRespawnPoint() {
}


