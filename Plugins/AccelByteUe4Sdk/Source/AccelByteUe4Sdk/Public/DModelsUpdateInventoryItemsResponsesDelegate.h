#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateUserInventoryItemResponse.h"
#include "DModelsUpdateInventoryItemsResponsesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUpdateInventoryItemsResponses, TArray<FAccelByteModelsUpdateUserInventoryItemResponse>, Response);

