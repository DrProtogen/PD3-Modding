#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserItemResponse.h"
#include "DModelsUserItemResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserItemResponse, FAccelByteModelsUserItemResponse, Response);

