#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserItemsPagingResponse.h"
#include "DModelsPaginatedUserItemsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedUserItemsResponse, FAccelByteModelsUserItemsPagingResponse, Response);

