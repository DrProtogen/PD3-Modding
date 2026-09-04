#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementPSNEventStatus.h"
#include "AccelByteModelsAchievementBulkCreatePSNEventResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementBulkCreatePSNEventResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsAchievementPSNEventStatus> Data;
    
    FAccelByteModelsAchievementBulkCreatePSNEventResponse();
};

