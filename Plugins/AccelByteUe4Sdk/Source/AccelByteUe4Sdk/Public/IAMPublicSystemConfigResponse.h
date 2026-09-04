#pragma once
#include "CoreMinimal.h"
#include "IAMPublicSystemConfigResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FIAMPublicSystemConfigResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchQueryMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchQueryMaxLengthForEmail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchQueryMinLength;
    
    FIAMPublicSystemConfigResponse();
};

