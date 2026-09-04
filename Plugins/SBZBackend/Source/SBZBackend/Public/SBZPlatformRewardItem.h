#pragma once
#include "CoreMinimal.h"
#include "SBZPlatformRewardItem.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZPlatformRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    FSBZPlatformRewardItem();
};

