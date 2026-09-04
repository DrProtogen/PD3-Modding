#pragma once
#include "CoreMinimal.h"
#include "SendVerificationCodeToNewUserRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FSendVerificationCodeToNewUserRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmailAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageTag;
    
    FSendVerificationCodeToNewUserRequest();
};

