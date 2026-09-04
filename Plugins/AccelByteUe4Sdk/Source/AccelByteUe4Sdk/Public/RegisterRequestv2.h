#pragma once
#include "CoreMinimal.h"
#include "RegisterRequest.h"
#include "RegisterRequestv2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FRegisterRequestv2 : public FRegisterRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    FRegisterRequestv2();
};

