#include "SBZHUDHitMarkerWidget.h"

USBZHUDHitMarkerWidget::USBZHUDHitMarkerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NoDamageAudioEvent = NULL;
    this->HitMarker_Image = NULL;
    this->HitMarker_Overlay = NULL;
    this->HitMarkerGlobalScale = 0.00f;
    this->bIsHitMarkerVisualsEnabled = false;
    this->DefaultTexture = NULL;
}

void USBZHUDHitMarkerWidget::StopPreviewLoop() {
}

void USBZHUDHitMarkerWidget::StartPreviewLoop() {
}

void USBZHUDHitMarkerWidget::PostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData) {
}


