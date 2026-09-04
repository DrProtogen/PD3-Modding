#pragma once
#include "CoreMinimal.h"
#include "SBZBulkStatItemInc.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBulkStatItemInc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Inc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatCode;
    
    FSBZBulkStatItemInc();
};

