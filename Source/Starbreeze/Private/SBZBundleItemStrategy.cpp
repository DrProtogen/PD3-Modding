#include "SBZBundleItemStrategy.h"

USBZBundleItemStrategy::USBZBundleItemStrategy() {
    this->CurrentPurchaseFlow = NULL;
    this->LastPurchaseResult = ESBZMetaRequestResult::Ok;
}

void USBZBundleItemStrategy::SetBundleStoreItem(const FSBZItemBundleStoreItem& InStoreItem) {
}

void USBZBundleItemStrategy::HandleFlowPostCompletionAction(FName ActionName, const USBZInventoryBaseData* ItemData) {
}

void USBZBundleItemStrategy::HandleFlowCompleted(ESBZUIPurchaseCompletionReason Reason, const USBZInventoryBaseData* ItemData) {
}

USBZItemBundleData* USBZBundleItemStrategy::GetBundleData() const {
    return NULL;
}

void USBZBundleItemStrategy::ExecutePurchase(const UObject* WorldContextObject, const FString& ItemSku) {
}

TArray<FSBZSpanGridEntry> USBZBundleItemStrategy::BuildBundleGridEntries(const UObject* WorldContextObject) const {
    return TArray<FSBZSpanGridEntry>();
}


