#pragma once
#include "CoreMinimal.h"
#include "DisableMfaAuthenticatorRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FDisableMfaAuthenticatorRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MfaToken;
    
    FDisableMfaAuthenticatorRequest();
};

