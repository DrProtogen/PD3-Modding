#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPublicUserProfileInfo.h"
#include "AccelByteModelsPublicUserProfileInfoV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPublicUserProfileInfoV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPublicUserProfileInfo> UserProfileInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NotProcessed;
    
    FAccelByteModelsPublicUserProfileInfoV2();
};

