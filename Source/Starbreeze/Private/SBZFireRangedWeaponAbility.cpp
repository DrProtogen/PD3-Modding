#include "SBZFireRangedWeaponAbility.h"
#include "ESBZAbilityInput.h"

USBZFireRangedWeaponAbility::USBZFireRangedWeaponAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bCancelAbilitiesOnFailedActivation = true;
    this->Input = ESBZAbilityInput::Fire;
    this->Pawn = NULL;
}


