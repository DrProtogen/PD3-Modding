#pragma once
#include "CoreMinimal.h"
#include "PD3AssaultTimerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPD3AssaultTimerUpdated, int32, RemainingSeconds);

