#include "SBZBundlePackWidgetBase.h"

USBZBundlePackWidgetBase::USBZBundlePackWidgetBase() {
    this->StackValue = TEXT("Default__SBZBundlePackWidgetBase");
    this->bShowDetailedView = false;
    this->MannequinContext = ESBZBundleMannequinContext::Pack;
}

void USBZBundlePackWidgetBase::ShowPack(int32 PackIndex) {
}

void USBZBundlePackWidgetBase::SetCurrentPackByData(USBZBundlePackData* PackData) {
}

FSBZCrimeBondProgression USBZBundlePackWidgetBase::GetPackProgression(int32 PackIndex) const {
    return FSBZCrimeBondProgression{};
}

USBZBundlePackData* USBZBundlePackWidgetBase::GetPackData(int32 PackIndex) const {
    return NULL;
}

int32 USBZBundlePackWidgetBase::GetPackCount() const {
    return 0;
}

FSBZCrimeBondProgression USBZBundlePackWidgetBase::GetCurrentPackProgression() const {
    return FSBZCrimeBondProgression{};
}

int32 USBZBundlePackWidgetBase::GetCurrentPackIndex() const {
    return 0;
}

USBZBundlePackData* USBZBundlePackWidgetBase::GetCurrentPackData() const {
    return NULL;
}



