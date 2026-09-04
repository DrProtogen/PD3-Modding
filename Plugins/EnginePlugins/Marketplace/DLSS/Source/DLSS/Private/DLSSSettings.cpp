#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bAllowOTAUpdate = true;
    this->NVIDIANGXApplicationId = 0;
    this->BiasCurrentColorStencilValue = 8;
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = true;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
    this->bEnableDLSSInEditorViewports = true;
    this->bEnableDLSSInPlayInEditorViewports = true;
    this->bShowDLSSSDebugOnScreenMessages = false;
    this->bGenericDLSSSRBinaryExists = false;
    this->bCustomDLSSSRBinaryExists = false;
    this->DLAAPreset = EDLSSPreset::F;
    this->DLSSQualityPreset = EDLSSPreset::K;
    this->DLSSBalancedPreset = EDLSSPreset::K;
    this->DLSSPerformancePreset = EDLSSPreset::K;
    this->DLSSUltraPerformancePreset = EDLSSPreset::F;
    this->bGenericDLSSRRBinaryExists = false;
    this->bCustomDLSSRRBinaryExists = false;
    this->DLAARRPreset = EDLSSRRPreset::Default;
    this->DLSSRRQualityPreset = EDLSSRRPreset::Default;
    this->DLSSRRBalancedPreset = EDLSSRRPreset::Default;
    this->DLSSRRPerformancePreset = EDLSSRRPreset::Default;
    this->DLSSRRUltraPerformancePreset = EDLSSRRPreset::Default;
}


