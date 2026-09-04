#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserEntitlementHistory.h"
#include "DAccelByteModelsEntitlementHistoryResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsEntitlementHistoryResponse, TArray<FAccelByteModelsUserEntitlementHistory>, Response);

