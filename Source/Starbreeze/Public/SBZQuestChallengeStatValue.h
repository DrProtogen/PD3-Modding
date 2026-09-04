#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengeStatValue.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZQuestChallengeStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationObjectiveStartStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressionDuringPreviousActivePhase;
    
    FSBZQuestChallengeStatValue();
};

