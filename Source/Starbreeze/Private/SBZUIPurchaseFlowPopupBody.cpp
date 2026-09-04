#include "SBZUIPurchaseFlowPopupBody.h"

USBZUIPurchaseFlowPopupBody::USBZUIPurchaseFlowPopupBody() {
    this->Flow = NULL;
}






void USBZUIPurchaseFlowPopupBody::ObserveFlow(USBZUIPurchaseFlow* InFlow) {
}

void USBZUIPurchaseFlowPopupBody::HandleFlowStateChanged(ESBZUIPurchaseFlowState NewState) {
}

void USBZUIPurchaseFlowPopupBody::HandleFlowCompleted(ESBZUIPurchaseCompletionReason Reason, const USBZInventoryBaseData* ItemData) {
}


