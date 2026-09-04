#pragma once
#include "CoreMinimal.h"
#include "DiscountCategoryModel.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FDiscountCategoryModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludeSubCategories;
    
    FDiscountCategoryModel();
};

