#include "SBZGameplayAbility.h"

USBZGameplayAbility::USBZGameplayAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->bCancelAbilitiesOnFailedActivation = false;
    this->bIsCancelToggleOnInputPressed = false;
    this->bIsCancelOnInputReleased = false;
    this->bIsEndOnInputReleased = false;
    this->bCanEverQueue = false;
    this->QueuePriority = 0;
    this->InputPriority = 0;
    this->Input = ESBZAbilityInput::None;
    this->TagCooldownSeconds = 0.00f;
}


