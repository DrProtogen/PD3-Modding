#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncThirdPartyBlockListResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsSyncThirdPartyBlockListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsSyncThirdPartyBlockListResponse();
};

