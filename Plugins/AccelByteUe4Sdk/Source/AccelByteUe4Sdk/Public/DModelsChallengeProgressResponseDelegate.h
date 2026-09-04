#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeProgressResponse.h"
#include "DModelsChallengeProgressResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsChallengeProgressResponse, FAccelByteModelsChallengeProgressResponse, Response);

