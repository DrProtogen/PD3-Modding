#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserInventoryResponse.h"
#include "DModelsUserInventoryResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserInventoryResponse, FAccelByteModelsUserInventoryResponse, Response);

