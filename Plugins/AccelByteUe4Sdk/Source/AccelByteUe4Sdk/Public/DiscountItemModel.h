#pragma once
#include "CoreMinimal.h"
#include "DiscountItemModel.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FDiscountItemModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    FDiscountItemModel();
};

