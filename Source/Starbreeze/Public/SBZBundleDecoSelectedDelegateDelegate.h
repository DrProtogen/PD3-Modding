#pragma once
#include "CoreMinimal.h"
#include "SBZBundleDecoSelectedDelegateDelegate.generated.h"

class USBZInventoryItemDecorator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZBundleDecoSelectedDelegate, USBZInventoryItemDecorator*, Deco);

