#pragma once
#include "CoreMinimal.h"
#include "SBZIndexedButtonClickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZIndexedButtonClickedDelegate, int32, Index);

