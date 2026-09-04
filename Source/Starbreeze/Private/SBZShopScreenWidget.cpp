#include "SBZShopScreenWidget.h"

USBZShopScreenWidget::USBZShopScreenWidget() {
    this->StackValue = TEXT("Default__SBZShopScreenWidget");
    this->CategoriesNavBar = NULL;
    this->ItemsPanel = NULL;
    this->ItemsScrollBox = NULL;
    this->PurchasePopup = NULL;
    this->BackgroundImage = NULL;
    this->BackgroundToFadeInImage = NULL;
    this->ItemBundleDetails = NULL;
    this->ItemBundleButtonClass = NULL;
    this->PurchaseCompletePopupBodyClass = NULL;
    this->InspectScreenStackValue = TEXT("BlackmarketInspect");
    this->BackgroundFadeInCurve = NULL;
    this->FocusedItemBundleButton = NULL;
}


void USBZShopScreenWidget::OnNavBarIndexChanged(int32 NewIndex) {
}

void USBZShopScreenWidget::OnItemSelected(USBZMenuButton* InButton) {
}

void USBZShopScreenWidget::OnItemFocusChanged(USBZMenuButton* InButton, bool bIsFocused) {
}

void USBZShopScreenWidget::OnControlsReferencePressed(const FName ActionName) {
}


void USBZShopScreenWidget::InvalidateItemBundleMap() {
}


