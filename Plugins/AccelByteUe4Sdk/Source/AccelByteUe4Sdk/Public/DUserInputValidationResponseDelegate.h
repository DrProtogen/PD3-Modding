#pragma once
#include "CoreMinimal.h"
#include "UserInputValidationResponse.h"
#include "DUserInputValidationResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUserInputValidationResponse, FUserInputValidationResponse, Response);

