#include "SBZAnimatedInteractionAbility.h"

USBZAnimatedInteractionAbility::USBZAnimatedInteractionAbility() {
    this->bCanEverQueue = true;
    this->CurrentInteractionMontage = NULL;
    this->CurrentAnimatedInteractionData = NULL;
}

void USBZAnimatedInteractionAbility::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


