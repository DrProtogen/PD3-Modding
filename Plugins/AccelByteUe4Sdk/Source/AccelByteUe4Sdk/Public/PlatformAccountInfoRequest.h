#pragma once
#include "CoreMinimal.h"
#include "PlatformAccountInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FPlatformAccountInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    FPlatformAccountInfoRequest();
};

