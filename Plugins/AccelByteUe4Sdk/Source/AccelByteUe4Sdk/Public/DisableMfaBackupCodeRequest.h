#pragma once
#include "CoreMinimal.h"
#include "DisableMfaBackupCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FDisableMfaBackupCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MfaToken;
    
    FDisableMfaBackupCodeRequest();
};

