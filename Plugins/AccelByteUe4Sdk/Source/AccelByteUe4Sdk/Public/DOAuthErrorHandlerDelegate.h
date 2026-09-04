#pragma once
#include "CoreMinimal.h"
#include "ErrorOAuthInfo.h"
#include "DOAuthErrorHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDOAuthErrorHandler, int32, ErrorCode, const FString&, ErrrMessage, const FErrorOAuthInfo&, ErrorInfo);

