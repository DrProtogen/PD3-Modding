#include "SBZBundleDisplayBase.h"

USBZBundleDisplayBase::USBZBundleDisplayBase() {
    this->bShowDetailedView = false;
}

void USBZBundleDisplayBase::Show() {
}

void USBZBundleDisplayBase::SetShowDetailedView(bool bShow) {
}

void USBZBundleDisplayBase::SetEntrySelected(int32 Index, bool bIsSelected) {
}

void USBZBundleDisplayBase::SetEntryHovered(int32 Index, bool bIsHovered) {
}

void USBZBundleDisplayBase::Hide() {
}

TArray<FSoftObjectPath> USBZBundleDisplayBase::GetPreloadSoftPathsForPack(const UObject* WorldContextObject, FName PackName) const {
    return TArray<FSoftObjectPath>();
}

FBox2D USBZBundleDisplayBase::GetEntryScreenRect(APlayerController* PC, int32 Index) const {
    return FBox2D{};
}

int32 USBZBundleDisplayBase::GetEntryCount() const {
    return 0;
}

FSBZItemBundleStoreItem USBZBundleDisplayBase::GetEntryBundle(int32 Index) const {
    return FSBZItemBundleStoreItem{};
}

void USBZBundleDisplayBase::DressFromPack(FName PackName) {
}

void USBZBundleDisplayBase::Clear() {
}


