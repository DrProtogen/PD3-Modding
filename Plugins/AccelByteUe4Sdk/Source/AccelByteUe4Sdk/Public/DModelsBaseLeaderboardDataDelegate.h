#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBaseLeaderboardData.h"
#include "DModelsBaseLeaderboardDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsBaseLeaderboardData, FAccelByteModelsBaseLeaderboardData, Response);

