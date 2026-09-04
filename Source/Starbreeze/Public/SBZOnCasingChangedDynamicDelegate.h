#pragma once
#include "CoreMinimal.h"
#include "SBZOnCasingChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnCasingChangedDynamic, bool, bIsCasing);

