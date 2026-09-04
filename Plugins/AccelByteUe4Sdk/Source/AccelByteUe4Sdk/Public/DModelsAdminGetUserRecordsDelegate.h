#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAdminGetUserRecords.h"
#include "DModelsAdminGetUserRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsAdminGetUserRecords, FAccelByteModelsAdminGetUserRecords, Response);

