#pragma once
#include "CoreMinimal.h"
#include "ESBZItemAction.h"
#include "SBZActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZActionDelegate, ESBZItemAction, Action);

