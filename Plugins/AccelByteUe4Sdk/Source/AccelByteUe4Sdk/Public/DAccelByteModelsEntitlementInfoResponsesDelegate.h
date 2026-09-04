#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntitlementInfo.h"
#include "DAccelByteModelsEntitlementInfoResponsesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccelByteModelsEntitlementInfoResponses, TArray<FAccelByteModelsEntitlementInfo>, Response);

