#include "SBZInventoryItemDecorator.h"

USBZInventoryItemDecorator::USBZInventoryItemDecorator() {
    this->ItemData = NULL;
    this->bIsEquipped = false;
    this->bIsOwned = false;
    this->bIsFavorite = false;
    this->bIsDefault = false;
    this->bIsIconic = false;
    this->bShouldShowVariantNumber = false;
    this->bShouldShowPrice = false;
    this->bShouldShowSource = false;
    this->ItemCategory = ESBZItemCategory::PrimaryWeapon;
    this->SlotIndex = -1;
    this->LocalItemIndex = -1;
    this->Cost = 0;
}

FSBZStoreBaseItem USBZInventoryItemDecorator::GetStoreItem() const {
    return FSBZStoreBaseItem{};
}


