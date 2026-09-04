#include "SBZUIPurchaseFlow.h"

USBZUIPurchaseFlow::USBZUIPurchaseFlow() {
    this->DisallowReason = ESBZUIPurchaseDisallowReason::None;
    this->LastResult = ESBZMetaRequestResult::Ok;
    this->PopupBody = NULL;
    this->State = ESBZUIPurchaseFlowState::AwaitingConfirmation;
    this->PendingResultItemData = NULL;
}

void USBZUIPurchaseFlow::RequestPurchase(const UObject* WorldContextObject, const FSBZUIPurchaseRequest& InRequest) {
}

void USBZUIPurchaseFlow::NotifyPurchaseResult(const FString& ItemSku, bool bSuccess, const USBZInventoryBaseData* ItemData, ESBZMetaRequestResult MetaResult) {
}

void USBZUIPurchaseFlow::HandlePopupAction(FName ActionName) {
}

ESBZUIPurchaseFlowState USBZUIPurchaseFlow::GetState() const {
    return ESBZUIPurchaseFlowState::AwaitingConfirmation;
}


