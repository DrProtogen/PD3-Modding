#pragma once
#include "CoreMinimal.h"
#include "SBZPlatformUserIdMap.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZPlatformUserIdMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    FSBZPlatformUserIdMap();
};

