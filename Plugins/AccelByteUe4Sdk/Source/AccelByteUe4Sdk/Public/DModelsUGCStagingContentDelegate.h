#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCStagingContentResponse.h"
#include "DModelsUGCStagingContentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUGCStagingContent, FAccelByteModelsUGCStagingContentResponse, Response);

