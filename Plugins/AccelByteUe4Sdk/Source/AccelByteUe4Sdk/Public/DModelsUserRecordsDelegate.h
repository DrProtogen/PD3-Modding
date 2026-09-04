#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRecord.h"
#include "DModelsUserRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsUserRecords, TArray<FAccelByteModelsUserRecord>, Response);

