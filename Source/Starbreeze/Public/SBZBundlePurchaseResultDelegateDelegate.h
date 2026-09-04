#pragma once
#include "CoreMinimal.h"
#include "SBZBundlePurchaseResultDelegateDelegate.generated.h"

class USBZInventoryBaseData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZBundlePurchaseResultDelegate, const FString&, ItemSku, bool, bSuccess, const USBZInventoryBaseData*, ItemData);

