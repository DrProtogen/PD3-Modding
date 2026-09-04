#include "SBZShopPurchasePopupWidget.h"

USBZShopPurchasePopupWidget::USBZShopPurchasePopupWidget() {
    this->ItemButtonClass = NULL;
    this->MaxHeistImageCount = 4;
    this->ItemButtonScrollBox = NULL;
    this->Cycler = NULL;
    this->ContentList = NULL;
    this->ControlsReferenceWidget = NULL;
    this->ItemDescription = NULL;
    this->PriceWidget = NULL;
    this->LogoImage = NULL;
    this->KeyArtImage = NULL;
    this->SelectedItemButton = NULL;
}



void USBZShopPurchasePopupWidget::OnPurchaseActionPressed(FName ActionName) {
}


void USBZShopPurchasePopupWidget::OnItemFocusChanged(USBZMenuButton* InButton, bool bIsFocused) {
}

void USBZShopPurchasePopupWidget::OnBackPressed(FName ActionName) {
}


