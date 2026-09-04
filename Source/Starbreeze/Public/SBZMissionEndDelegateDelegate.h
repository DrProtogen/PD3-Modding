#pragma once
#include "CoreMinimal.h"
#include "SBZEndMissionRequestData.h"
#include "SBZMissionEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZMissionEndDelegate, const FSBZEndMissionRequestData&, RequestData);

