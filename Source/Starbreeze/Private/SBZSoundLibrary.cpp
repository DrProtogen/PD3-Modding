#include "SBZSoundLibrary.h"

USBZSoundLibrary::USBZSoundLibrary() {
}

void USBZSoundLibrary::StopSoundOnComponent(int32& SoundID, UAkComponent* AkComponent) {
}

void USBZSoundLibrary::StopSoundOnActor(int32& SoundID, AActor* Actor) {
}

void USBZSoundLibrary::StopPlayingEventID(int32 EventID, float InterpolationTimerMS) {
}

void USBZSoundLibrary::Stop2DSound(int32& SoundID) {
}

UAkComponent* USBZSoundLibrary::SpawnAkComponentAttached(UAkAudioEvent* AkEvent, UAkAuxBus* EarlyReflectionsBus, USceneComponent* AttachToComponent, FName AttachPointName, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy) {
    return NULL;
}

int32 USBZSoundLibrary::SetSwitchOnAkComponent(UAkComponent* AkComponent, const FName SwitchGroup, const FName SwitchState) {
    return 0;
}

void USBZSoundLibrary::SetSwitch2D(FName SwitchGroup, FName SwitchState) {
}

void USBZSoundLibrary::SetRtpcOnEventID(int32 SoundID, UAkRtpc* RTPC, float Value, int32 InterpolationTimerInMS) {
}

void USBZSoundLibrary::SetRtpcOnComponent(UAkComponent* AkComponent, UAkRtpc* RTPC, float Value, int32 InterpolationTimerInMS) {
}

void USBZSoundLibrary::SetRtpcOnActor(AActor* Actor, UAkRtpc* RTPC, float Value, int32 InterpolationTimerInMS) {
}

void USBZSoundLibrary::SetListenerComponent(UAkComponent* AkComponent) {
}

void USBZSoundLibrary::SetAudioState(FName StateGroupName, FName StateValueName) {
}

void USBZSoundLibrary::ResumePlayingEventID(int32 EventID, float InterpolationTimerMS) {
}

void USBZSoundLibrary::RemoveListener(UAkComponent* ListenerComponent) {
}

void USBZSoundLibrary::RemoveAudioProbe(UAkComponent* ListenerComponent, UAkComponent* DistanceProbeComponent) {
}

void USBZSoundLibrary::ReleaseEnvelopePlayingEventID(int32 EventID, float InterpolationTimerMS) {
}

int32 USBZSoundLibrary::PlaySoundOnSoundComponentWithEventName(UAkComponent* AkComponent, const FName EventName) {
    return 0;
}

int32 USBZSoundLibrary::PlaySoundOnComponent(UAkComponent* AkComponent, UAkAudioEvent* AudioEvent) {
    return 0;
}

int32 USBZSoundLibrary::PlaySoundOnActorWithEventName(AActor* Actor, const FName EventName) {
    return 0;
}

int32 USBZSoundLibrary::PlaySoundOnActor(AActor* Actor, UAkAudioEvent* AudioEvent) {
    return 0;
}

int32 USBZSoundLibrary::Play2DSound(UAkAudioEvent* AudioEvent) {
    return 0;
}

void USBZSoundLibrary::PausePlayingEventID(int32 EventID, float InterpolationTimerMS) {
}

UAkComponent* USBZSoundLibrary::CreateListener(USceneComponent* AttachmentComponent) {
    return NULL;
}

UAkComponent* USBZSoundLibrary::CreateAudioProbe(UAkComponent* ListenerComponent, AActor* ActorToAttach) {
    return NULL;
}

void USBZSoundLibrary::BreakPlayingEventID(int32 EventID, float InterpolationTimerMS) {
}


