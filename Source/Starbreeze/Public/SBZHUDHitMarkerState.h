#pragma once
#include "CoreMinimal.h"
#include "SBZHUDHitMarkerState.generated.h"

class USBZHUDHitMarkerConfigDataAsset;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZHUDHitMarkerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHUDHitMarkerConfigDataAsset* Data;
    
    FSBZHUDHitMarkerState();
};

