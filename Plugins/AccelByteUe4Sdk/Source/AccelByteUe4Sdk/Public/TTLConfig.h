#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAccelByteTTLConfigAction.h"
#include "TTLConfig.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FTTLConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteTTLConfigAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Expires_At;
    
    FTTLConfig();
};

