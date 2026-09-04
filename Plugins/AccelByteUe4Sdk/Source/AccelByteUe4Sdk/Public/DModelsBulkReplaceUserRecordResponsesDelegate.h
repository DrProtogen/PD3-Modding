#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkReplaceUserRecordResponse.h"
#include "DModelsBulkReplaceUserRecordResponsesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsBulkReplaceUserRecordResponses, TArray<FAccelByteModelsBulkReplaceUserRecordResponse>, Response);

