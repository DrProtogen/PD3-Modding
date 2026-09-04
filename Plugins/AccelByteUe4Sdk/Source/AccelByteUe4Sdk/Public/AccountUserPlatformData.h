#pragma once
#include "CoreMinimal.h"
#include "AccountUserPlatformInfo.h"
#include "AccountUserPlatformData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountUserPlatformData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AvatarUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccountUserPlatformInfo> PlatformInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueDisplayName;
    
    FAccountUserPlatformData();
};

