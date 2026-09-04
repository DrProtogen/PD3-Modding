#include "SBZGameplayAbility_CharacterCrouch.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterCrouch::USBZGameplayAbility_CharacterCrouch() {
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::Crouch;
    this->Character = NULL;
}


