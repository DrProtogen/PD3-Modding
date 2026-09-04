#include "SBZBaseInventoryItemVisualsWidget.h"

USBZBaseInventoryItemVisualsWidget::USBZBaseInventoryItemVisualsWidget() {
    this->Item = NULL;
    this->ItemSprite = NULL;
    this->LastItemSprite = NULL;
    this->Image_Inventory = NULL;
}


void USBZBaseInventoryItemVisualsWidget::SetEmpty() {
}



void USBZBaseInventoryItemVisualsWidget::NativeOnSpriteLoaded() {
}


void USBZBaseInventoryItemVisualsWidget::InitializeResourceObject(TSoftObjectPtr<UObject> InItem) {
}

void USBZBaseInventoryItemVisualsWidget::InitializeItem(const USBZInventoryBaseData* InItem, bool bShouldLoadImage) {
}



