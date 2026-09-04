#include "SBZMenuStackWidget.h"

USBZMenuStackWidget::USBZMenuStackWidget() {
    this->StackValue = TEXT("Default__SBZMenuStackWidget");
    this->bHasStackFocus = false;
    this->bIsOnStack = false;
    this->bUseDefaultStackVisibility = false;
    this->StackOnGainedVisibility = ESlateVisibility::Visible;
    this->StackOnLostVisibility = ESlateVisibility::Collapsed;
    this->MenuEnterEvent = NULL;
    this->MenuExitEvent = NULL;
}

void USBZMenuStackWidget::OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}

void USBZMenuStackWidget::OnStackLostOrRemoved(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}





FName USBZMenuStackWidget::GetStackValue() const {
    return NAME_None;
}


