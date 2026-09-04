#pragma once
#include "CoreMinimal.h"
#include "SBZBulkUserCurrentPlatformRequest.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBulkUserCurrentPlatformRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    FSBZBulkUserCurrentPlatformRequest();
};

