#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CascadedShadowMapSettings.h"
#include "SBZCascadedShadowMapDefaults.generated.h"

UCLASS(Blueprintable)
class USBZCascadedShadowMapDefaults : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCascadedShadowMapSettings ShadowQualityLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCascadedShadowMapSettings ShadowQualityMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCascadedShadowMapSettings ShadowQualityHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCascadedShadowMapSettings ShadowQualityUltra;
    
    USBZCascadedShadowMapDefaults();

};

