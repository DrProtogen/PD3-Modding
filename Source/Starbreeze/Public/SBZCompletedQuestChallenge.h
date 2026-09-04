#pragma once
#include "CoreMinimal.h"
#include "SBZCompletedQuestChallenge.generated.h"

USTRUCT(BlueprintType)
struct FSBZCompletedQuestChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    STARBREEZE_API FSBZCompletedQuestChallenge();
};

