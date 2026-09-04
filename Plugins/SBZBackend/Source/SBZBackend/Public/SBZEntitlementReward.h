#pragma once
#include "CoreMinimal.h"
#include "SBZEntitlementReward.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZEntitlementReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FSBZEntitlementReward();
};

