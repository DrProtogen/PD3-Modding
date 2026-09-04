#pragma once
#include "CoreMinimal.h"
#include "ESBZShopCategoryItemSizeRule.h"
#include "SBZShopCategoryConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZShopCategoryConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZShopCategoryItemSizeRule SizeRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SkusInOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> VariableSizeRuleWideSkus;
    
    STARBREEZE_API FSBZShopCategoryConfiguration();
};

