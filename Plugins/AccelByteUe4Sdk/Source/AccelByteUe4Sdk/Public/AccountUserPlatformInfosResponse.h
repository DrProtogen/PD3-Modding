#pragma once
#include "CoreMinimal.h"
#include "AccountUserPlatformData.h"
#include "AccountUserPlatformInfosResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountUserPlatformInfosResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccountUserPlatformData> Data;
    
    FAccountUserPlatformInfosResponse();
};

