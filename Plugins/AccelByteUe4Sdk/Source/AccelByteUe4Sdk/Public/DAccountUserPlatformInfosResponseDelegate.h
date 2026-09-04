#pragma once
#include "CoreMinimal.h"
#include "AccountUserPlatformInfosResponse.h"
#include "DAccountUserPlatformInfosResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDAccountUserPlatformInfosResponse, FAccountUserPlatformInfosResponse, Response);

