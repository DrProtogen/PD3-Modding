#pragma once
#include "CoreMinimal.h"
#include "SBZBundlePostPurchaseActionDelegateDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZBundlePostPurchaseActionDelegate, FName, ActionName, const USBZInventoryBaseData*, ItemData);

