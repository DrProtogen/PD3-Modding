#include "SBZRequestOverkillBaseAbility.h"
#include "ESBZAbilityInput.h"

USBZRequestOverkillBaseAbility::USBZRequestOverkillBaseAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::RequestOverkillWeapon;
}


