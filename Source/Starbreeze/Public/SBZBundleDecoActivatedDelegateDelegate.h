#pragma once
#include "CoreMinimal.h"
#include "SBZBundleDecoActivatedDelegateDelegate.generated.h"

class USBZInventoryItemDecorator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZBundleDecoActivatedDelegate, USBZInventoryItemDecorator*, Deco);

