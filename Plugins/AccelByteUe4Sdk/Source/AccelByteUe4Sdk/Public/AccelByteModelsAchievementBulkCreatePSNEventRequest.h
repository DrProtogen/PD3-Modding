#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementPSNEventCreate.h"
#include "AccelByteModelsAchievementBulkCreatePSNEventRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementBulkCreatePSNEventRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsAchievementPSNEventCreate> Data;
    
    FAccelByteModelsAchievementBulkCreatePSNEventRequest();
};

