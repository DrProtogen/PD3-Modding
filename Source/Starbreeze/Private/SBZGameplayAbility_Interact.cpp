#include "SBZGameplayAbility_Interact.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_Interact::USBZGameplayAbility_Interact() {
    this->bCanEverQueue = true;
    this->Input = ESBZAbilityInput::Interact;
    this->Interactor = NULL;
}


