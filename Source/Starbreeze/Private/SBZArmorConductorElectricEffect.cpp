#include "SBZArmorConductorElectricEffect.h"
#include "EGameplayEffectDurationType.h"
#include "EGameplayEffectStackingType.h"

USBZArmorConductorElectricEffect::USBZArmorConductorElectricEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->bExecutePeriodicEffectOnApplication = false;
    this->Modifiers.AddDefaulted(1);
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


