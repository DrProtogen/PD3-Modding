#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDiscountCodeDeductionDetail.h"
#include "EAccelByteDeductionType.h"
#include "AccelByteModelsDeductionDetail.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDeductionDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteDeductionType DeductionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsDiscountCodeDeductionDetail DiscountCodeDeductionDetail;
    
    FAccelByteModelsDeductionDetail();
};

