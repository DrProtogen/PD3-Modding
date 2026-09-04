#pragma once
#include "CoreMinimal.h"
#include "UpdatePasswordRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUpdatePasswordRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MfaToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldPassword;
    
    FUpdatePasswordRequest();
};

