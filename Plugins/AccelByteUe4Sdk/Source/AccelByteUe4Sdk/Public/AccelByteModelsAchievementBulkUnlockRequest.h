#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementBulkUnlockRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementBulkUnlockRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AchievementCodes;
    
    FAccelByteModelsAchievementBulkUnlockRequest();
};

