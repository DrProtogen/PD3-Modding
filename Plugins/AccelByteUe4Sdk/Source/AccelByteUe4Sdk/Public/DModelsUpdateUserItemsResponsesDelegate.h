#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateUserInventoryItemResponse.h"
#include "DModelsUpdateUserItemsResponsesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUpdateUserItemsResponses, TArray<FAccelByteModelsUpdateUserInventoryItemResponse>, Response);

