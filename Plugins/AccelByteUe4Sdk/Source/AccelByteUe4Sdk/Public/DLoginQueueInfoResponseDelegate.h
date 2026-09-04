#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLoginQueueTicketInfo.h"
#include "DLoginQueueInfoResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDLoginQueueInfoResponse, FAccelByteModelsLoginQueueTicketInfo, Response);

