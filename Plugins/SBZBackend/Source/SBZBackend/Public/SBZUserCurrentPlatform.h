#pragma once
#include "CoreMinimal.h"
#include "SBZUserCurrentPlatform.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZUserCurrentPlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentPlatform;
    
    FSBZUserCurrentPlatform();
};

