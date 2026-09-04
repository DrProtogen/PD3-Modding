#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeRewardItem.h"
#include "SBZQuestConfigurationData.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestConfigurationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChallengeIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeRewardItem> RewardItemsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestLockConditionId;
    
    STARBREEZE_API FSBZQuestConfigurationData();
};

