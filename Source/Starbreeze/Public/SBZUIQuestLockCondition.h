#pragma once
#include "CoreMinimal.h"
#include "ESBZUIQuestLockReason.h"
#include "SBZUIQuestLockCondition.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIQuestLockCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZUIQuestLockReason QuestLockReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LockByQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestUnlockTimeCET;
    
    STARBREEZE_API FSBZUIQuestLockCondition();
};

