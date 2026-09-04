#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAchievementPSNEventStatusError.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAchievementPSNEventStatusError {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    FAccelByteModelsAchievementPSNEventStatusError();
};

