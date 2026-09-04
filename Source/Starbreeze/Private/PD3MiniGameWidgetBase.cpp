#include "PD3MiniGameWidgetBase.h"

UPD3MiniGameWidgetBase::UPD3MiniGameWidgetBase() {
    this->bShouldBindAxis = false;
    this->AxisThreshold = 0.10f;
    this->UpdateWaitTime = 0.30f;
    this->XAxisLastUpdateTime = 0.00f;
    this->YAxisLastUpdateTime = 0.00f;
    this->PlayerState = NULL;
}

void UPD3MiniGameWidgetBase::SetMiniGameState(EPD3MiniGameState NewState) {
}





bool UPD3MiniGameWidgetBase::IsLockpickInstant() const {
    return false;
}

bool UPD3MiniGameWidgetBase::HasTag(const FGameplayTag& Tag) const {
    return false;
}

bool UPD3MiniGameWidgetBase::HasSkill(const FGameplayTag& Tag) const {
    return false;
}

float UPD3MiniGameWidgetBase::GetLockpickFillSuccessIncrease(float& FillFailIncrease, float& OutAutoProgressIncrease) const {
    return 0.0f;
}




