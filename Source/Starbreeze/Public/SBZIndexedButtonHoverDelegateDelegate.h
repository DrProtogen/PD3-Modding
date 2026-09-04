#pragma once
#include "CoreMinimal.h"
#include "SBZIndexedButtonHoverDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZIndexedButtonHoverDelegate, int32, Index, bool, bIsHovered);

