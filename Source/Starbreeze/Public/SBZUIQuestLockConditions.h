#pragma once
#include "CoreMinimal.h"
#include "SBZUIQuestLockCondition.h"
#include "SBZUIQuestLockConditions.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIQuestLockConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZUIQuestLockCondition> QuestLockCondition;
    
    STARBREEZE_API FSBZUIQuestLockConditions();
};

