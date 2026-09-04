#pragma once
#include "CoreMinimal.h"
#include "SBZAsyncActionTimerUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAsyncActionTimerUpdate, float, Progress);

