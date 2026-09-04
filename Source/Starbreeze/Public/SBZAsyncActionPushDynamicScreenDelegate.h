#pragma once
#include "CoreMinimal.h"
#include "SBZAsyncActionPushDynamicScreenDelegate.generated.h"

class USBZMenuStackScreenWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAsyncActionPushDynamicScreen, USBZMenuStackScreenWidget*, MenuWidget);

