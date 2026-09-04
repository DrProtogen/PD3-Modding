#include "SBZFlashbangEffect.h"
#include "EGameplayEffectDurationType.h"
#include "EGameplayEffectStackingType.h"
#include "TargetTagsGameplayEffectComponent.h"

USBZFlashbangEffect::USBZFlashbangEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
    this->TagsComponent = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>(TEXT("TagsComponent"));
    this->GEComponents.Add(this->TagsComponent);
}


