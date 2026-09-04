#pragma once
#include "CoreMinimal.h"
#include "ESBZQuestState.h"
#include "SBZChallengeRewardItem.h"
#include "SBZUIQuestLockConditions.h"
#include "SBZUIQuestData.generated.h"

class USBZQuestDataAsset;

USTRUCT(BlueprintType)
struct FSBZUIQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZQuestDataAsset* QuestDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChallengeIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChallengeRewardItem> QuestRewardArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZQuestState QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIQuestLockConditions UIQuestLockConditions;
    
    STARBREEZE_API FSBZUIQuestData();
};

