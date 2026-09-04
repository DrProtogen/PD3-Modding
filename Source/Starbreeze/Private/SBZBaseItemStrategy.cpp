#include "SBZBaseItemStrategy.h"

USBZBaseItemStrategy::USBZBaseItemStrategy() {
}

TArray<USBZInventoryItemDecorator*> USBZBaseItemStrategy::SpawnItemDecos(const UObject* WorldContextObject, ESBZItemCategory ItemCategory, const FGameplayTag& CategoryTag, USBZInventoryItemDecorator*& OutEquippedDeco) const {
    return TArray<USBZInventoryItemDecorator*>();
}

USBZInventoryItemDecorator* USBZBaseItemStrategy::GetEquippedItemAsDecorator(const UObject* WorldContextObject, ESBZItemCategory ItemCategory) {
    return NULL;
}

void USBZBaseItemStrategy::ExecuteItemAction(const UObject* WorldContextObject, const USBZInventoryItemDecorator* ItemDeco, ESBZItemAction Action) const {
}

TArray<USBZInventoryItemDecorator*> USBZBaseItemStrategy::CreateSlotDecos(const UObject* WorldContextObject, ESBZItemCategory ItemCategory, const USBZInventoryBaseData* ItemData, USBZInventoryItemDecorator*& OutEquippedDeco) const {
    return TArray<USBZInventoryItemDecorator*>();
}

bool USBZBaseItemStrategy::CanPerformAction(const UObject* WorldContextObject, const USBZInventoryItemDecorator* ItemDeco, ESBZItemAction Action) const {
    return false;
}


