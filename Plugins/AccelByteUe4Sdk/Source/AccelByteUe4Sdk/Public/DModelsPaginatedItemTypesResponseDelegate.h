#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemTypePagingResponse.h"
#include "DModelsPaginatedItemTypesResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedItemTypesResponse, FAccelByteModelsItemTypePagingResponse, Response);

