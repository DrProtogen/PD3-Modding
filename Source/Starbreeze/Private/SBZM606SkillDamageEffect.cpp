#include "SBZM606SkillDamageEffect.h"
#include "EGameplayEffectDurationType.h"

USBZM606SkillDamageEffect::USBZM606SkillDamageEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->bExecutePeriodicEffectOnApplication = false;
}


