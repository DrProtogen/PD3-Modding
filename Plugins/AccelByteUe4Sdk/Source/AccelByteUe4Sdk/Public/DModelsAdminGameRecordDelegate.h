#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAdminGameRecord.h"
#include "DModelsAdminGameRecordDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsAdminGameRecord, FAccelByteModelsAdminGameRecord, Response);

