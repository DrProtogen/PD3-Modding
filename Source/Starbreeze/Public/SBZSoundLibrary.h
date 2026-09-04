#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSoundLibrary.generated.h"

class AActor;
class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UAkRtpc;
class USceneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSoundLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZSoundLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopSoundOnComponent(int32& SoundID, UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable)
    static void StopSoundOnActor(int32& SoundID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void StopPlayingEventID(int32 EventID, float InterpolationTimerMS);
    
    UFUNCTION(BlueprintCallable)
    static void Stop2DSound(int32& SoundID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAkComponent* SpawnAkComponentAttached(UAkAudioEvent* AkEvent, UAkAuxBus* EarlyReflectionsBus, USceneComponent* AttachToComponent, FName AttachPointName, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static int32 SetSwitchOnAkComponent(UAkComponent* AkComponent, const FName SwitchGroup, const FName SwitchState);
    
    UFUNCTION(BlueprintCallable)
    static void SetSwitch2D(FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable)
    static void SetRtpcOnEventID(int32 SoundID, UAkRtpc* RTPC, float Value, int32 InterpolationTimerInMS);
    
    UFUNCTION(BlueprintCallable)
    static void SetRtpcOnComponent(UAkComponent* AkComponent, UAkRtpc* RTPC, float Value, int32 InterpolationTimerInMS);
    
    UFUNCTION(BlueprintCallable)
    static void SetRtpcOnActor(AActor* Actor, UAkRtpc* RTPC, float Value, int32 InterpolationTimerInMS);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerComponent(UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetAudioState(FName StateGroupName, FName StateValueName);
    
    UFUNCTION(BlueprintCallable)
    static void ResumePlayingEventID(int32 EventID, float InterpolationTimerMS);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveListener(UAkComponent* ListenerComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAudioProbe(UAkComponent* ListenerComponent, UAkComponent* DistanceProbeComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseEnvelopePlayingEventID(int32 EventID, float InterpolationTimerMS);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlaySoundOnSoundComponentWithEventName(UAkComponent* AkComponent, const FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlaySoundOnComponent(UAkComponent* AkComponent, UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlaySoundOnActorWithEventName(AActor* Actor, const FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlaySoundOnActor(AActor* Actor, UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 Play2DSound(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void PausePlayingEventID(int32 EventID, float InterpolationTimerMS);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* CreateListener(USceneComponent* AttachmentComponent);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* CreateAudioProbe(UAkComponent* ListenerComponent, AActor* ActorToAttach);
    
    UFUNCTION(BlueprintCallable)
    static void BreakPlayingEventID(int32 EventID, float InterpolationTimerMS);
    
};

