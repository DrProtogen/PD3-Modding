#include "SBZMainMenuShopButton.h"

USBZMainMenuShopButton::USBZMainMenuShopButton() {
    this->ShopScreenClass = NULL;
    this->ItemsReceivedPopupBodyClass = NULL;
}


void USBZMainMenuShopButton::OnPreUIStackChanged(FSBZUIStackChangedEvent StackEvent) {
}

void USBZMainMenuShopButton::OnGameInstallStateChanged(bool bIsInstallPending) {
}



