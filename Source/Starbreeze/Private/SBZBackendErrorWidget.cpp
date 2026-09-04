#include "SBZBackendErrorWidget.h"

USBZBackendErrorWidget::USBZBackendErrorWidget() {
    this->ErrorMessageStringTable = NULL;
    this->Button_ReturnToLogin = NULL;
}

FText USBZBackendErrorWidget::GetErrorText() const {
    return FText::GetEmpty();
}

FText USBZBackendErrorWidget::GetErrorHeader() const {
    return FText::GetEmpty();
}


