#include "SBZAIAnticipateExplosionAbility.h"
#include "ESBZAbilityInput.h"

USBZAIAnticipateExplosionAbility::USBZAIAnticipateExplosionAbility() {
    this->Input = ESBZAbilityInput::AnticipateExplosion;
    this->DiveRange = 200.00f;
    this->DetectionSettings = NULL;
    this->ObservedGrenade = NULL;
    this->PlayedMontage = NULL;
}


