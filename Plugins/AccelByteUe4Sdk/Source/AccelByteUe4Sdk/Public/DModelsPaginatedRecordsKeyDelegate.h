#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedRecordsKey.h"
#include "DModelsPaginatedRecordsKeyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedRecordsKey, FAccelByteModelsPaginatedRecordsKey, Response);

