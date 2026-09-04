#pragma once
#include "CoreMinimal.h"
#include "AcceptedPolicies.h"
#include "RegisterRequestv2.h"
#include "RegisterRequestv3.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FRegisterRequestv3 : public FRegisterRequestv2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAcceptedPolicies> AcceptedPolicies;
    
    FRegisterRequestv3();
};

