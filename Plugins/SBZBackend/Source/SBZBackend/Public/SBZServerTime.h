#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZServerTime.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZServerTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CurrentTime;
    
    FSBZServerTime();
};

