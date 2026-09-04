#include "SBZActivateReplenishHealthEffect.h"
#include "EGameplayEffectDurationType.h"
#include "EGameplayEffectStackingType.h"

USBZActivateReplenishHealthEffect::USBZActivateReplenishHealthEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


