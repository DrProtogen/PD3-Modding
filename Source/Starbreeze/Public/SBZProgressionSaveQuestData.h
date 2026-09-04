#pragma once
#include "CoreMinimal.h"
#include "ESBZProgressionSaveQuestState.h"
#include "SBZQuestChallenge.h"
#include "SBZProgressionSaveQuestData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProgressionSaveQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZProgressionSaveQuestState QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestChallenge> QuestChallengeArray;
    
    FSBZProgressionSaveQuestData();
};

