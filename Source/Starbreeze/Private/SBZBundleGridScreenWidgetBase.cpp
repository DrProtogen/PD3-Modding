#include "SBZBundleGridScreenWidgetBase.h"

USBZBundleGridScreenWidgetBase::USBZBundleGridScreenWidgetBase() {
    this->StackValue = TEXT("Default__SBZBundleGridScreenWidgetBase");
    this->SpanGrid = NULL;
    this->MannequinSlotIndex = 1;
    this->StrategyClass = NULL;
    this->Strategy = NULL;
    this->LastSelectedDeco = NULL;
}

void USBZBundleGridScreenWidgetBase::TriggerPrimaryAction(USBZInventoryItemDecorator* Deco) {
}

void USBZBundleGridScreenWidgetBase::SetBundleStoreItem(const FSBZItemBundleStoreItem& InStoreItem) {
}

void USBZBundleGridScreenWidgetBase::SetBundle(const FSBZItemBundleStoreItem& InStoreItem) {
}

void USBZBundleGridScreenWidgetBase::HandleSpanGridItemSelected(UObject* Item) {
}

void USBZBundleGridScreenWidgetBase::HandleSpanGridItemClicked(UObject* Item) {
}

void USBZBundleGridScreenWidgetBase::HandlePurchaseResult(const FString& ItemSku, bool bSuccess, const USBZInventoryBaseData* ItemData) {
}

void USBZBundleGridScreenWidgetBase::HandlePostPurchaseAction(FName ActionName, const USBZInventoryBaseData* ItemData) {
}

USBZBundleItemStrategy* USBZBundleGridScreenWidgetBase::GetStrategy() const {
    return NULL;
}

USBZInventoryItemDecorator* USBZBundleGridScreenWidgetBase::GetSelectedDeco() const {
    return NULL;
}

USBZItemBundleData* USBZBundleGridScreenWidgetBase::GetBundleData() const {
    return NULL;
}











