#pragma once
#include "CoreMinimal.h"
#include "SBZOnRunningTrialChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnRunningTrialChanged, bool, bIsRunningTrial);

