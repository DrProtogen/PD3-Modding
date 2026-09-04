#pragma once
#include "CoreMinimal.h"
#include "SBZQuestConfigurationData.h"
#include "SBZQuestConfigurationDataArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuestConfigurationDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZQuestConfigurationData> QuestConfigurationData;
    
    STARBREEZE_API FSBZQuestConfigurationDataArray();
};

