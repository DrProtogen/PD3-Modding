#include "SBZPlaceItemAbility.h"
#include "ESBZAbilityInput.h"

USBZPlaceItemAbility::USBZPlaceItemAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::PlaceItem;
    this->OwnerCharacter = NULL;
    this->GhostActor = NULL;
    this->PlaceableActor = NULL;
}

void USBZPlaceItemAbility::Tick(float DeltaSeconds) {
}


