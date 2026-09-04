#pragma once
#include "CoreMinimal.h"
#include "ESBZLootBoxRewardType.h"
#include "SBZItemLootBoxItem.h"
#include "SBZItemReward.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZItemReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLootBoxRewardType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemLootBoxItem> LootBoxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Odds;
    
    FSBZItemReward();
};

