#pragma once
#include "CoreMinimal.h"
#include "SBZUIPurchaseFlowPopupActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZUIPurchaseFlowPopupAction, FName, ActionName);

