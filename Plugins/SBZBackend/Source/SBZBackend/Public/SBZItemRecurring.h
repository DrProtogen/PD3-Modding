#pragma once
#include "CoreMinimal.h"
#include "ESBZCycle.h"
#include "SBZItemRecurring.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZItemRecurring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCycle Cycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedFreeDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedTrialCycles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GraceDays;
    
    FSBZItemRecurring();
};

