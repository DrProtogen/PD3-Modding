#include "SBZPhoneToolAbility.h"
#include "ESBZAbilityInput.h"

USBZPhoneToolAbility::USBZPhoneToolAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ToolEquip;
    this->OwnerCharacter = NULL;
}


