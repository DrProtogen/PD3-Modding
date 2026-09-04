#pragma once
#include "CoreMinimal.h"
#include "SBZQuestUIChallengeProgressionValue.h"
#include "SBZQuestChallengeNotificationData.generated.h"

class USBZQuestDataAsset;

USTRUCT(BlueprintType)
struct FSBZQuestChallengeNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZQuestDataAsset* QuestDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestUIChallengeProgressionValue> QuestChallengeProgressionValueArray;
    
    STARBREEZE_API FSBZQuestChallengeNotificationData();
};

