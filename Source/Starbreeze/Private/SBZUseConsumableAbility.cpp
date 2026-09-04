#include "SBZUseConsumableAbility.h"
#include "ESBZAbilityInput.h"

USBZUseConsumableAbility::USBZUseConsumableAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::UseConsumable;
    this->OwnerCharacter = NULL;
}


