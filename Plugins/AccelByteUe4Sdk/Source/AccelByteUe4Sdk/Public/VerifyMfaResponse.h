#pragma once
#include "CoreMinimal.h"
#include "VerifyMfaResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FVerifyMfaResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MfaToken;
    
    FVerifyMfaResponse();
};

