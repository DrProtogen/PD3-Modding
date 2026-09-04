#include "SBZShopContentListWidget.h"

USBZShopContentListWidget::USBZShopContentListWidget() {
    this->ItemClass = NULL;
    this->IncludesTextFormat = FText::FromString(TEXT("The {DisplayName} includes:"));
    this->IncludesTextBlock = NULL;
    this->ItemScrollBox = NULL;
}


