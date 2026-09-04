#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatformRewardType.h"
#include "SBZPlatformRewardCurrency.h"
#include "SBZPlatformRewardItem.h"
#include "SBZPlatformReward.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZPlatformReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlatformRewardType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlatformRewardItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlatformRewardCurrency Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FSBZPlatformReward();
};

