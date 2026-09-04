#pragma once
#include "CoreMinimal.h"
#include "SBZItemReward.h"
#include "SBZItemLootBoxConfig.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZItemLootBoxConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemReward> Rewards;
    
    FSBZItemLootBoxConfig();
};

