#pragma once
#include "CoreMinimal.h"
#include "SBZProgressionSaveQuestData.h"
#include "SBZProgressionSaveQuestsData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProgressionSaveQuestsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZProgressionSaveQuestData> ProgressionSaveQuestData;
    
    FSBZProgressionSaveQuestsData();
};

