#include "SBZARGESTargetAbility.h"
#include "ESBZAbilityInput.h"

USBZARGESTargetAbility::USBZARGESTargetAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bIsCancelOnInputReleased = true;
    this->Input = ESBZAbilityInput::Targeting;
}


