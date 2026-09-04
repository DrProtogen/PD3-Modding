#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengePair.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestChallengePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    STARBREEZE_API FSBZQuestChallengePair();
};

