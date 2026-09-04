#pragma once
#include "CoreMinimal.h"
#include "SBZOnDramaUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnDramaUpdated, const float, CurrentDrama);

