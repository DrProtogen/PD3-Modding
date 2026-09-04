#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsInventoryConfigurationsPagingResponse.h"
#include "DModelsPaginatedInventoryTypesResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedInventoryTypesResponse, FAccelByteModelsInventoryConfigurationsPagingResponse, Response);

