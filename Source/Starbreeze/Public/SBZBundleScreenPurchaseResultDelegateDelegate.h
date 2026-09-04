#pragma once
#include "CoreMinimal.h"
#include "SBZBundleScreenPurchaseResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZBundleScreenPurchaseResultDelegate, const FString&, ItemSku, bool, bSuccess);

