#include "SBZProgressMeter.h"

USBZProgressMeter::USBZProgressMeter() {
    this->bSnapUp = false;
    this->bSnapDown = true;
    this->InterpTimeUp = 1.00f;
    this->InterpTimeDown = 0.50f;
    this->bAutoReset = true;
    this->TargetValue = 0.00f;
    this->CurrentValue = 0.00f;
}

void USBZProgressMeter::SetValue(float InValue) {
}

void USBZProgressMeter::SetTargetValue(float InValue) {
}

void USBZProgressMeter::Reset() {
}



float USBZProgressMeter::GetCurrentValue() const {
    return 0.0f;
}


