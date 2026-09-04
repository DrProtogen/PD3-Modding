#include "SBZBundleEntrySelectionWidget.h"

USBZBundleEntrySelectionWidget::USBZBundleEntrySelectionWidget() {
    this->StackValue = TEXT("Default__SBZBundleEntrySelectionWidget");
    this->InitialSelectionIndex = 1;
    this->Display = NULL;
    this->HitCanvas = NULL;
}

void USBZBundleEntrySelectionWidget::SelectPrevious() {
}

void USBZBundleEntrySelectionWidget::SelectNext() {
}

void USBZBundleEntrySelectionWidget::SelectIndex(int32 Index) {
}

void USBZBundleEntrySelectionWidget::HandleHoverChanged(int32 Index, bool bIsHovered) {
}

void USBZBundleEntrySelectionWidget::HandleButtonClicked(int32 Index) {
}

int32 USBZBundleEntrySelectionWidget::GetSelectedIndex() const {
    return 0;
}

USBZIndexedButton* USBZBundleEntrySelectionWidget::GetSelectedHitButton() const {
    return NULL;
}

FSBZItemBundleStoreItem USBZBundleEntrySelectionWidget::GetSelectedBundle() const {
    return FSBZItemBundleStoreItem{};
}

USBZIndexedButton* USBZBundleEntrySelectionWidget::GetHitButton(int32 Index) const {
    return NULL;
}





