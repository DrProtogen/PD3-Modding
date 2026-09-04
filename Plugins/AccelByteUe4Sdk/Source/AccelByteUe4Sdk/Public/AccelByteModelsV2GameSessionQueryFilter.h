#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2QueryGameSessionAvailability.h"
#include "AccelByteModelsV2GameSessionQueryFilter.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsV2GameSessionQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2QueryGameSessionAvailability GameSessionAvailability;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionQueryFilter();
};

