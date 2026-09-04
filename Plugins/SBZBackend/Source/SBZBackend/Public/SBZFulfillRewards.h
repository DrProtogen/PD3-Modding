#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "ESBZPlatformRewardOrigin.h"
#include "ESBZPlatformRewardSource.h"
#include "SBZPlatformReward.h"
#include "SBZFulfillRewards.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZFulfillRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlatformReward> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlatformRewardSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlatformRewardOrigin Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Metadata;
    
    FSBZFulfillRewards();
};

