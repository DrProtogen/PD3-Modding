#pragma once
#include "CoreMinimal.h"
#include "SBZUserCurrentPlatform.h"
#include "SBZBulkUserCurrentPlatformResponse.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBulkUserCurrentPlatformResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZUserCurrentPlatform> Data;
    
    FSBZBulkUserCurrentPlatformResponse();
};

