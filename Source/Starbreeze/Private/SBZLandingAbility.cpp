#include "SBZLandingAbility.h"

USBZLandingAbility::USBZLandingAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->OwnerCharacter = NULL;
}


