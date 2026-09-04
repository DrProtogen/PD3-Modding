#pragma once
#include "CoreMinimal.h"
#include "SBZQuestUIChallengeProgressionValue.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZQuestUIChallengeProgressionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetProgress;
    
    FSBZQuestUIChallengeProgressionValue();
};

