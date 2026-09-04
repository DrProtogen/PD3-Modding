#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeServerEvaluateProgressRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChallengeServerEvaluateProgressRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    FAccelByteModelsChallengeServerEvaluateProgressRequest();
};

