#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseCompletionReason.h"
#include "SBZUIPurchaseFlowCompletedDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZUIPurchaseFlowCompleted, ESBZUIPurchaseCompletionReason, Reason, const USBZInventoryBaseData*, ItemData);

