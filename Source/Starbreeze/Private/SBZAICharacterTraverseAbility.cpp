#include "SBZAICharacterTraverseAbility.h"
#include "ESBZAbilityInput.h"

USBZAICharacterTraverseAbility::USBZAICharacterTraverseAbility() {
    this->Input = ESBZAbilityInput::Traverse;
    this->bComputeTrajectoryOnActivationAttempt = false;
}


