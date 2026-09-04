#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZHitMarkerType.h"
#include "SBZDamageEvent.h"
#include "SBZHUDHitMarkerState.h"
#include "SBZHUDHitMarkerWidget.generated.h"

class UAkAudioEvent;
class UImage;
class UOverlay;
class USBZHUDHitMarkerConfigDataAsset;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHUDHitMarkerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NoDamageAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZHitMarkerType, USBZHUDHitMarkerConfigDataAsset*> HitMarkerConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHUDHitMarkerState CurrentHitMarkerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HitMarker_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* HitMarker_Overlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HitMarkerGlobalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHitMarkerVisualsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultTexture;
    
public:
    USBZHUDHitMarkerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void StopPreviewLoop();
    
    UFUNCTION(BlueprintCallable)
    void StartPreviewLoop();
    
    UFUNCTION(BlueprintCallable)
    void PostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData);
    
};

