#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetChallengesResponse.h"
#include "DModelsGetChallengesResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsGetChallengesResponse, FAccelByteModelsGetChallengesResponse, Response);

