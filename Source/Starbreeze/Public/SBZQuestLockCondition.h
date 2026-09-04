#pragma once
#include "CoreMinimal.h"
#include "ESBZQuestLockReason.h"
#include "SBZQuestLockCondition.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestLockCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZQuestLockReason QuestLockReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LockByQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestUnlockTimeCET;
    
    STARBREEZE_API FSBZQuestLockCondition();
};

