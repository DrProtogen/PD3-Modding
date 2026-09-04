#include "SBZEmoteAbility.h"

USBZEmoteAbility::USBZEmoteAbility() {
    this->bRetriggerInstancedAbility = true;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->AbilityCharacter = NULL;
    this->PlayerController = NULL;
    this->PlayerCameraManager = NULL;
    this->AbilitySystem = NULL;
    this->CurrentEmoteCallAsset = NULL;
    this->EmoteCamera = NULL;
    this->Montage = NULL;
}

void USBZEmoteAbility::OnMontageEnded(UAnimMontage* PlayedMontage, bool bInterrupted, const int32 InstanceID) {
}


