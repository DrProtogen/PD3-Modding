#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserInventoryResponse.h"
#include "DModelsUpdateAllInventoriesResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUpdateAllInventoriesResponse, TArray<FAccelByteModelsUserInventoryResponse>, Response);

