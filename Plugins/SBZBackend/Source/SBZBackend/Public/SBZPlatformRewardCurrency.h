#pragma once
#include "CoreMinimal.h"
#include "SBZPlatformRewardCurrency.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZPlatformRewardCurrency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrencyCode;
    
    FSBZPlatformRewardCurrency();
};

