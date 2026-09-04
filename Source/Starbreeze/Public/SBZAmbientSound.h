#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZAmbientSound.generated.h"

class UActorComponent;
class UAkAudioEvent;
class USBZAmbientSoundComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReactionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNormalizedReactionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedReactionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAmbientSoundComponent* AmbientSoundComponent;
    
public:
    ASBZAmbientSound(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleStealthNoiseReaction(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void HandleDeactivateSoundComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void HandleActivateSoundComponent(UActorComponent* Component, bool bReset);
    
};

