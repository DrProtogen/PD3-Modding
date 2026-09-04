#include "SBZItemBundleData.h"

USBZItemBundleData::USBZItemBundleData() {
    this->BundlePackType = ESBZBundlePackType::Mannequin;
    this->bIsAlwaysFreeDLC = false;
}

bool USBZItemBundleData::IsAlwaysFreeDLC() const {
    return false;
}

TSoftObjectPtr<UPaperSprite> USBZItemBundleData::GetShopWideBackground() const {
    return NULL;
}

TSoftObjectPtr<UPaperSprite> USBZItemBundleData::GetShopNarrowBackground() const {
    return NULL;
}

TSoftObjectPtr<UPaperSprite> USBZItemBundleData::GetShopLogo() const {
    return NULL;
}

TSoftObjectPtr<UPaperSprite> USBZItemBundleData::GetShopKeyArt() const {
    return NULL;
}

TArray<TSoftObjectPtr<UPaperSprite>> USBZItemBundleData::GetShopHeistImages() const {
    return TArray<TSoftObjectPtr<UPaperSprite>>();
}

TSoftObjectPtr<USBZBundlePackData> USBZItemBundleData::GetPackData() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> USBZItemBundleData::GetBundleLogo() const {
    return NULL;
}


