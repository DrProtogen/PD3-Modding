#include "SBZSpanGrid.h"

USBZSpanGrid::USBZSpanGrid() {
    this->DefaultTileClass = NULL;
    this->NumColumns = 4;
    this->TilePadding = 4.00f;
    this->SelectedItem = NULL;
}

void USBZSpanGrid::SetEntryArray(const TArray<FSBZSpanGridEntry>& InEntryArray) {
}

void USBZSpanGrid::SelectItem(UObject* Item) {
}

void USBZSpanGrid::SelectFirstTile() {
}

void USBZSpanGrid::RestoreSelection(UObject* Item) {
}

void USBZSpanGrid::RefreshLayout() {
}

void USBZSpanGrid::NavigateUp() {
}

void USBZSpanGrid::NavigateRight() {
}

void USBZSpanGrid::NavigateLeft() {
}

void USBZSpanGrid::NavigateDown() {
}

void USBZSpanGrid::HandleTileHovered(USBZMenuButton* Button, bool bIsHovered) {
}

void USBZSpanGrid::HandleTileFocused(USBZMenuButton* Button, bool bIsFocused) {
}

void USBZSpanGrid::HandleTileClicked(USBZMenuButton* Button) {
}

UObject* USBZSpanGrid::GetSelectedItem() const {
    return NULL;
}

int32 USBZSpanGrid::GetEntryCount() const {
    return 0;
}

USBZItemButton* USBZSpanGrid::FindTileForItem(UObject* Item) const {
    return NULL;
}

void USBZSpanGrid::ClearSelection() {
}

void USBZSpanGrid::ClearEntries() {
}





