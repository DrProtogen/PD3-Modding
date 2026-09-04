#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsInventoryTagPagingResponse.h"
#include "DModelsPaginatedInventoryTagsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedInventoryTagsResponse, FAccelByteModelsInventoryTagPagingResponse, Response);

