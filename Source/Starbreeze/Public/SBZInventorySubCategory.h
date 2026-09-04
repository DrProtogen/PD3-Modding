#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZInventorySubCategory.generated.h"

USTRUCT(BlueprintType)
struct FSBZInventorySubCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SubCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubCategoryText;
    
    STARBREEZE_API FSBZInventorySubCategory();
};

