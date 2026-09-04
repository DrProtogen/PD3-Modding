#include "SBZSkillHET5AOEDamageAbility.h"

USBZSkillHET5AOEDamageAbility::USBZSkillHET5AOEDamageAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->OwnerAbilitySystem = NULL;
}


