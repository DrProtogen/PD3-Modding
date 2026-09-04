#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDamageFeedTypeConfig.h"
#include "SBZFeedEntryConfigAsset.h"
#include "SBZDamageFeedConfigAsset.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDamageFeedConfigAsset : public USBZFeedEntryConfigAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDamageFeedTypeConfig> DamageTypeConfigs;
    
    USBZDamageFeedConfigAsset();

};

