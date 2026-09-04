#include "SBZMarkerDataAsset.h"

USBZMarkerDataAsset::USBZMarkerDataAsset() {
    this->MarkerWidgetOverride = NULL;
    this->bHasProgressBar = false;
    this->bHasOffScreenTracking = true;
    this->bShowDistance = true;
    this->OnDisplayAudioEvent = NULL;
    this->OffScreenCategory = ESBZMarkerOffscreenCategory::Mid;
    this->OnScreenMinOpacity = 0.40f;
    this->OnScreenMaxOpacity = 0.80f;
    this->bHasLookAtFade = true;
}


