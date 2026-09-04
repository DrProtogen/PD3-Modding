#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeEvaluateProgressOptionalParameter.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChallengeEvaluateProgressOptionalParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ChallengeCodesToEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ChallengeCodesToEvalute;
    
    FAccelByteModelsChallengeEvaluateProgressOptionalParameter();
};

