#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAdminUserRecord.h"
#include "DModelsAdminUserRecordDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsAdminUserRecord, FAccelByteModelsAdminUserRecord, Response);

