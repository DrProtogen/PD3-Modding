#pragma once
#include "CoreMinimal.h"
#include "SBZQuestLockConditions.h"
#include "SBZQuestLockConditionsArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestLockConditionsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestLockConditions> QuestLockConditionsArray;
    
    STARBREEZE_API FSBZQuestLockConditionsArray();
};

