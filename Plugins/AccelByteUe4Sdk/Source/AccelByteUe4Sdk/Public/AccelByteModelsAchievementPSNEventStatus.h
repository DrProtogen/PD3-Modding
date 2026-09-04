#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementPSNEventStatusError.h"
#include "AccelByteModelsAchievementPSNEventStatus.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementPSNEventStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThirdPartyUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsAchievementPSNEventStatusError ErrorDetail;
    
    FAccelByteModelsAchievementPSNEventStatus();
};

