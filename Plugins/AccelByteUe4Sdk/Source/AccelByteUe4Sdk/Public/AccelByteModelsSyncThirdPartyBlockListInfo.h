#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncThirdPartyBlockListInfo.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsSyncThirdPartyBlockListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PsnEnv;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsSyncThirdPartyBlockListInfo();
};

