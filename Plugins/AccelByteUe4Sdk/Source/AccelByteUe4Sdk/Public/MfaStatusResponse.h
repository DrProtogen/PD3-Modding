#pragma once
#include "CoreMinimal.h"
#include "MfaStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMfaStatusResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EnabledFactors;
    
    FMfaStatusResponse();
};

