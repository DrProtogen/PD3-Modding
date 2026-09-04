#pragma once
#include "CoreMinimal.h"
#include "SBZUserPlatformInfo.h"
#include "SBZUserPlatformInfoData.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZUserPlatformInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZUserPlatformInfo> PlatformInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AvatarURL;
    
    FSBZUserPlatformInfoData();
};

