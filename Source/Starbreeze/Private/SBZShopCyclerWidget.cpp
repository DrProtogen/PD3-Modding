#include "SBZShopCyclerWidget.h"

USBZShopCyclerWidget::USBZShopCyclerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxVisibleCellCount = 3;
    this->CellButtonClass = NULL;
    this->LeftArrowButton = NULL;
    this->RightArrowButton = NULL;
    this->CellPanel = NULL;
}

void USBZShopCyclerWidget::OnRightArrowSelected(USBZMenuMouseButton* Button) {
}

void USBZShopCyclerWidget::OnLeftArrowSelected(USBZMenuMouseButton* Button) {
}

void USBZShopCyclerWidget::OnCellSelected(USBZMenuMouseButton* Button) {
}


