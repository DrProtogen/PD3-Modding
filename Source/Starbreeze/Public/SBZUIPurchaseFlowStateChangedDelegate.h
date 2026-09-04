#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseFlowState.h"
#include "SBZUIPurchaseFlowStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZUIPurchaseFlowStateChanged, ESBZUIPurchaseFlowState, NewState);

