#include "SBZSkillGrazePlayerEffect.h"
#include "EGameplayEffectDurationType.h"

USBZSkillGrazePlayerEffect::USBZSkillGrazePlayerEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->GrantedAbilities.AddDefaulted(1);
}


