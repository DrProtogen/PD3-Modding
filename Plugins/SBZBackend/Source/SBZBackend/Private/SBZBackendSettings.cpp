#include "SBZBackendSettings.h"

USBZBackendSettings::USBZBackendSettings() {
    this->bEnable = true;
    this->bEnableLocal = true;
    this->bEnableAccelByteDataStorage = true;
    this->DefaultBackend = TEXT("SBZLocalBackend");
    this->DefaultPlayerDataStorage = TEXT("SBZAccelBytePlayerDataStorage");
}


