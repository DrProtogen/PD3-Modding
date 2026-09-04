#pragma once
#include "CoreMinimal.h"
#include "SBZUIPurchaseExecuteDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable, meta=(WorldContext="WorldContextObject")) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSBZUIPurchaseExecuteDelegate, const UObject*, WorldContextObject, const FString&, ItemSku);

