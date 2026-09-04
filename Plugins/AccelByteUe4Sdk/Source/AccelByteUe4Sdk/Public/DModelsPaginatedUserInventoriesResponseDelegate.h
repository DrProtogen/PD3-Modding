#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserInventoriesPagingResponse.h"
#include "DModelsPaginatedUserInventoriesResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedUserInventoriesResponse, FAccelByteModelsUserInventoriesPagingResponse, Response);

