#include "SBZSkillGrazeAOEDamageAbility.h"

USBZSkillGrazeAOEDamageAbility::USBZSkillGrazeAOEDamageAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->OwnerAbilitySystem = NULL;
}


