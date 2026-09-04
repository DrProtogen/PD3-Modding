#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCContentPageResponse.h"
#include "DModelsUGCContentPagingResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCContentPagingResponse, FAccelByteModelsUGCContentPageResponse, Response);

