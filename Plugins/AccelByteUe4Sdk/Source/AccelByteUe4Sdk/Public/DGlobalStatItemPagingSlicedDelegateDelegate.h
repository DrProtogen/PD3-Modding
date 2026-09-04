#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalStatItemPagingSlicedResult.h"
#include "DGlobalStatItemPagingSlicedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDGlobalStatItemPagingSlicedDelegate, FAccelByteModelsGlobalStatItemPagingSlicedResult, Response);

