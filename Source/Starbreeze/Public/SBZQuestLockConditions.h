#pragma once
#include "CoreMinimal.h"
#include "SBZQuestLockCondition.h"
#include "SBZQuestLockConditions.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestLockConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestLockConditionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestLockCondition> QuestLockCondition;
    
    STARBREEZE_API FSBZQuestLockConditions();
};

