#pragma once
#include "CoreMinimal.h"
#include "EDLSSUpscalerModularFeatureQuality.h"
#include "DLSSUpscalerModularFeatureSettings.generated.h"

USTRUCT(BlueprintType)
struct FDLSSUpscalerModularFeatureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSUpscalerModularFeatureQuality Quality;
    
    DLSS_API FDLSSUpscalerModularFeatureSettings();
};

