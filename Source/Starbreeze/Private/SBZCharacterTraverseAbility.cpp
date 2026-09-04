#include "SBZCharacterTraverseAbility.h"
#include "ESBZAbilityInput.h"

USBZCharacterTraverseAbility::USBZCharacterTraverseAbility() {
    this->Input = ESBZAbilityInput::Jump;
    this->bComputeTrajectoryOnActivationAttempt = true;
    this->bIsActivateConsumingInput = true;
    this->MovementComponent = NULL;
    this->AbilitySystem = NULL;
}


