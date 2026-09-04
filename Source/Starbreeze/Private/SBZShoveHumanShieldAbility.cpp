#include "SBZShoveHumanShieldAbility.h"
#include "ESBZAbilityInput.h"

USBZShoveHumanShieldAbility::USBZShoveHumanShieldAbility() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ShoveHumanShield;
}


