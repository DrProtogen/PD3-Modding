#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBaseUserEntitlementHistory.h"
#include "AccelByteModelsUserEntitlementHistory.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserEntitlementHistory : public FAccelByteModelsBaseUserEntitlementHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Operator;
    
    FAccelByteModelsUserEntitlementHistory();
};

