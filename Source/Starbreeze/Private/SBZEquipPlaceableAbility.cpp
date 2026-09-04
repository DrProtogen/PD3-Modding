#include "SBZEquipPlaceableAbility.h"
#include "ESBZAbilityInput.h"

USBZEquipPlaceableAbility::USBZEquipPlaceableAbility() {
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::PlaceItem;
}


