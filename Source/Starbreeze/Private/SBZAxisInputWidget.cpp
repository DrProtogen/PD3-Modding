#include "SBZAxisInputWidget.h"

USBZAxisInputWidget::USBZAxisInputWidget() {
    this->PrimaryKeyWidget = NULL;
    this->SecondaryKeyWidget = NULL;
    this->SecondaryKeyDisableVisibility = ESlateVisibility::Collapsed;
}

void USBZAxisInputWidget::SetAxis(FName InAxisName, bool bInIsEnabled) {
}


