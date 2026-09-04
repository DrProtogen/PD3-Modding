#include "CascadedShadowMapSettings.h"

FCascadedShadowMapSettings::FCascadedShadowMapSettings() {
    this->DynamicShadowDistanceMovableLight = 0.00f;
    this->DynamicShadowDistanceStationaryLight = 0.00f;
    this->DynamicShadowCascades = 0;
    this->CascadeDistributionExponent = 0.00f;
    this->CascadeTransitionFraction = 0.00f;
    this->ShadowDistanceFadeoutFraction = 0.00f;
    this->bUseInsetShadowsForMovableObjects = false;
    this->FarShadowCascadeCount = 0;
    this->FarShadowDistance = 0.00f;
}

