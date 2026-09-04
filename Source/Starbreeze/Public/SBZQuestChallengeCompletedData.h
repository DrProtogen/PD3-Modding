#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengeNotificationData.h"
#include "SBZQuestChallengeCompletedData.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestChallengeCompletedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZQuestChallengeNotificationData QuestChallengeCompletedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZQuestChallengeNotificationData QuestChallengeActiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QuestCompleted;
    
    STARBREEZE_API FSBZQuestChallengeCompletedData();
};

