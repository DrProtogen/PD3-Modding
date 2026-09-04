#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkSaveInventoryItems.h"
#include "DModelsSaveInventoryItemsResponsesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsSaveInventoryItemsResponses, TArray<FAccelByteModelsBulkSaveInventoryItems>, Response);

