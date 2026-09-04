#include "SBZThrowItemAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowItemAbility::USBZThrowItemAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ThrowItem;
    this->OwnerCharacter = NULL;
}


