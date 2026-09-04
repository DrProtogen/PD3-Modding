#include "SBZReloadRangedWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZReloadRangedWeaponAbility::USBZReloadRangedWeaponAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::Reload;
    this->Character = NULL;
}


