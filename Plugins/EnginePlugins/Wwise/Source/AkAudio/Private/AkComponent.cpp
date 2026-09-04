#include "AkComponent.h"

UAkComponent::UAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseSpatialAudio = false;
    this->OcclusionCollisionChannel = EAKCC_UseIntegrationSettingsDefault;
    this->OcclusionRefreshInterval = 0.00f;
    this->EnableSpotReflectors = false;
    this->outerRadius = 0.00f;
    this->innerRadius = 0.00f;
    this->EarlyReflectionAuxBus = NULL;
    this->EarlyReflectionBusSendGain = 1.00f;
    this->DrawFirstOrderReflections = false;
    this->DrawSecondOrderReflections = false;
    this->DrawHigherOrderReflections = false;
    this->DrawDiffraction = false;
    this->bAutoDeactivate = true;
    this->StopWhenOwnerDestroyed = true;
    this->bUseReverbVolumes = true;
}

void UAkComponent::ShowStaticSoundSource(bool bVal, float Radius) {
}

void UAkComponent::ShowStaticSoundAttenuation(bool bVal, float Radius) {
}

void UAkComponent::ShowSoundEvent(bool bVal) {
}

void UAkComponent::ShowDynamicSoundSource(bool bVal, float Radius) {
}

void UAkComponent::ShowDynamicSoundAttenuation(bool bVal, float Radius) {
}

void UAkComponent::SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
}

void UAkComponent::SetSoundSourceFilter(bool bVal, FString& List) {
}

void UAkComponent::SetOutputBusVolume(float BusVolume) {
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners) {
}

void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius) {
}

void UAkComponent::SetEnableSpotReflectors(bool in_enable) {
}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume) {
}

void UAkComponent::SetEarlyReflectionsAuxBus(const FString& AuxBusName) {
}

void UAkComponent::PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger) {
}

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo) {
    return 0;
}

int32 UAkComponent::PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FLatentActionInfo LatentInfo) {
    return 0;
}

void UAkComponent::GetSoundSourceFilter(bool bVal) {
}

TEnumAsByte<ECollisionChannel> UAkComponent::GetOcclusionCollisionChannel() {
    return ECC_WorldStatic;
}

float UAkComponent::GetAttenuationRadius() const {
    return 0.0f;
}

void UAkComponent::EnableSoundSourceFilter(bool bVal) {
}


