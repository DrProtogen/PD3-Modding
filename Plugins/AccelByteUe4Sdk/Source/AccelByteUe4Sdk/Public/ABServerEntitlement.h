#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DAccelByteModelsEntitlementHistoryResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "ABServerEntitlement.generated.h"

UCLASS(Blueprintable)
class UABServerEntitlement : public UObject {
    GENERATED_BODY()
public:
    UABServerEntitlement();

    UFUNCTION(BlueprintCallable)
    void GetUserEntitlementHistory(const FString& UserId, const FString& EntitlementId, FDAccelByteModelsEntitlementHistoryResponse OnSuccess, FDErrorHandler OnError);
    
};

