#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemMappingInternal.h"
#include "AccelByteModelsItemMappingsResponseInternal.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemMappingsResponseInternal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsItemMappingInternal> Data;
    
    FAccelByteModelsItemMappingsResponseInternal();
};

