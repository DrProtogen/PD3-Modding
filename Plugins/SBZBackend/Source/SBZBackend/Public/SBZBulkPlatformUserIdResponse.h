#pragma once
#include "CoreMinimal.h"
#include "SBZPlatformUserIdMap.h"
#include "SBZBulkPlatformUserIdResponse.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBulkPlatformUserIdResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlatformUserIdMap> UserIdPlatforms;
    
    FSBZBulkPlatformUserIdResponse();
};

