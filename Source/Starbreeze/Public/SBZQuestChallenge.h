#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengeStatValue.h"
#include "SBZQuestChallenge.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZQuestChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestChallengeStatValue> QuestChallengeStatValueArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeCompleted;
    
    FSBZQuestChallenge();
};

