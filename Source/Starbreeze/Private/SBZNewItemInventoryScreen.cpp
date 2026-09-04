#include "SBZNewItemInventoryScreen.h"

USBZNewItemInventoryScreen::USBZNewItemInventoryScreen() {
    this->StackValue = TEXT("Default__SBZNewItemInventoryScreen");
    this->ListView = NULL;
    this->InventoryStrategy = NULL;
    this->ActiveItemCategory = ESBZItemCategory::PrimaryWeapon;
}

void USBZNewItemInventoryScreen::ShowInventoryWithCategory(ESBZItemCategory ItemCategory) {
}


void USBZNewItemInventoryScreen::OnActionExecuted(ESBZItemAction Action) {
}

USBZBaseItemStrategy* USBZNewItemInventoryScreen::GetItemStrategy() const {
    return NULL;
}

USBZInventoryCategoryData* USBZNewItemInventoryScreen::GetCategoryData(const ESBZItemCategory& ItemCategory) const {
    return NULL;
}

bool USBZNewItemInventoryScreen::GenerateItems(ESBZItemCategory ItemCategory, const FGameplayTag& SubCategory) {
    return false;
}


