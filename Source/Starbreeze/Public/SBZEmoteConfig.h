#pragma once
#include "CoreMinimal.h"
#include "SBZEmoteConfig.generated.h"

class USBZEmoteCallAsset;

USTRUCT(BlueprintType)
struct FSBZEmoteConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEmoteCallAsset* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEmoteCallAsset* OriginalData;
    
    STARBREEZE_API FSBZEmoteConfig();
};

