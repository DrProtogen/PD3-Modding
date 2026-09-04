#include "SBZHUDHitMarkerConfigDataAsset.h"

USBZHUDHitMarkerConfigDataAsset::USBZHUDHitMarkerConfigDataAsset() {
    this->ScaleAnimationCurve = NULL;
    this->FadeAnimationCurve = NULL;
    this->AnimationDuration = 0.50f;
    this->HitMarkerTexture = NULL;
    this->bEnableDamageScaling = true;
    this->SmallDamageScale = 0.80f;
    this->LargeDamageScale = 1.50f;
    this->HitMarkerAudioEvent = NULL;
}


