#pragma once
#include "CoreMinimal.h"
#include "DisableMfaEmailRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FDisableMfaEmailRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MfaToken;
    
    FDisableMfaEmailRequest();
};

