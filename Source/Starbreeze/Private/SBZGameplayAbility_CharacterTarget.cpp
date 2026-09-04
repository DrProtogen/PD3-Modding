#include "SBZGameplayAbility_CharacterTarget.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterTarget::USBZGameplayAbility_CharacterTarget() {
    this->bIsCancelToggleOnInputPressed = true;
    this->bIsCancelOnInputReleased = true;
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::Targeting;
}


