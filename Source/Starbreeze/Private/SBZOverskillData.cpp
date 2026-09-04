#include "SBZOverskillData.h"

USBZOverskillData::USBZOverskillData() {
    this->MaxActivationThreshold = 100.00f;
    this->ActivationThresholdMultiplier = 1.00f;
    this->bIsActivatedOnce = false;
    this->MinActivatableHeistState = EPD3HeistState::MAX;
    this->DrainTickRate = 0.02f;
    this->DrainDelay = -1.00f;
    this->IncrementDelay = -1.00f;
    this->TickDrainPercentage = 0.05f;
    this->AdditionalTickDrainPercentage = -1.00f;
}


