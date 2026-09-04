#include "SBZTacticianDiscombobulateEffect.h"
#include "EGameplayEffectDurationType.h"
#include "EGameplayEffectStackingType.h"

USBZTacticianDiscombobulateEffect::USBZTacticianDiscombobulateEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->bExecutePeriodicEffectOnApplication = false;
    this->Modifiers.AddDefaulted(1);
    this->ApplicationRequirements_DEPRECATED.AddDefaulted(1); // ApplicationRequirements was renamed to ApplicationRequirements_DEPRECATED in this engine version (superseded by the GameplayEffectComponent system)
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


