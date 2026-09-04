#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengeTrackerData.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestChallengeTrackerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetProgress;
    
    STARBREEZE_API FSBZQuestChallengeTrackerData();
};

