#pragma once
#include "CoreMinimal.h"
#include "SBZQosServerList.h"
#include "ESBZOnlineCode.h"
#include "OnOnlineGetRegionsEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOnlineGetRegionsEventDelegate, ESBZOnlineCode, ErrorCode, const FSBZQosServerList&, Regions);

