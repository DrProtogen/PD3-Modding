#pragma once
#include "CoreMinimal.h"
#include "SBZShopCategoryConfiguration.h"
#include "SBZShopScreenConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZShopScreenConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> NewSkus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZShopCategoryConfiguration> CategoryOverrides;
    
    STARBREEZE_API FSBZShopScreenConfiguration();
};

