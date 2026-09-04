#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementBulkUnlockErrorDetail.h"
#include "AccelByteModelsAchievementBulkUnlockRespone.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementBulkUnlockRespone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsAchievementBulkUnlockErrorDetail ErrorDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    FAccelByteModelsAchievementBulkUnlockRespone();
};

