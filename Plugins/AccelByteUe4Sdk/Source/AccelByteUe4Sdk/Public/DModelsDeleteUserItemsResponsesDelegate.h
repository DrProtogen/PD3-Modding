#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDeleteUserInventoryItemResponse.h"
#include "DModelsDeleteUserItemsResponsesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsDeleteUserItemsResponses, TArray<FAccelByteModelsDeleteUserInventoryItemResponse>, Response);

