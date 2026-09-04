#include "SBZPlaceToolAbility.h"
#include "ESBZAbilityInput.h"

USBZPlaceToolAbility::USBZPlaceToolAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::PlaceableTool;
    this->OwnerCharacter = NULL;
    this->PlaceableTool = NULL;
    this->GhostTool = NULL;
    this->AttachParent = NULL;
}


