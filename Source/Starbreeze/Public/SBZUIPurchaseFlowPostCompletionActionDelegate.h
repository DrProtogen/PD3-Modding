#pragma once
#include "CoreMinimal.h"
#include "SBZUIPurchaseFlowPostCompletionActionDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZUIPurchaseFlowPostCompletionAction, FName, ActionName, const USBZInventoryBaseData*, ItemData);

