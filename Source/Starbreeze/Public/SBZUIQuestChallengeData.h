#pragma once
#include "CoreMinimal.h"
#include "SBZQuestUIChallengeProgressionValue.h"
#include "SBZUIQuestChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIQuestChallengeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestUIChallengeProgressionValue> QuestChallengeProgressionValueArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChallengeCompleted;
    
    STARBREEZE_API FSBZUIQuestChallengeData();
};

