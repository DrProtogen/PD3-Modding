#include "SBZActionInputWidget.h"

USBZActionInputWidget::USBZActionInputWidget() {
    this->bConsumeInput = false;
    this->bIsActionPressed = false;
    this->KeyWidget = NULL;
    this->bIsIconVisibleForKeyboardAndMouse = true;
    this->bIsBoundThroughViewport = false;
}

void USBZActionInputWidget::SetAction(FName InActionName, bool bShouldConsumeInput, bool bInIsEnabled) {
}

void USBZActionInputWidget::OnActionReleased() {
}

void USBZActionInputWidget::OnActionPressed() {
}

void USBZActionInputWidget::BindThroughViewport() {
}




