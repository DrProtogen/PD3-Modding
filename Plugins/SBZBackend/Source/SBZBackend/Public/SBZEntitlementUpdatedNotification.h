#pragma once
#include "CoreMinimal.h"
#include "ESBZEntitlementUpdatedAction.h"
#include "SBZEntitlementUpdate.h"
#include "SBZEntitlementUpdatedNotification.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZEntitlementUpdatedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEntitlementUpdatedAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEntitlementUpdate> Data;
    
    FSBZEntitlementUpdatedNotification();
};

