#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemMapping.h"
#include "AccelByteModelsItemMappingsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemMappingsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsItemMapping> Data;
    
    FAccelByteModelsItemMappingsResponse();
};

