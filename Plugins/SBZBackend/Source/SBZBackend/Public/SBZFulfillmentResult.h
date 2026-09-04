#pragma once
#include "CoreMinimal.h"
#include "SBZCreditSummary.h"
#include "SBZEntitlementSummary.h"
#include "SBZSubscriptionSummary.h"
#include "SBZFulfillmentResult.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZFulfillmentResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEntitlementSummary> EntitlementSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCreditSummary> CreditSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSubscriptionSummary> SubscriptionSummaries;
    
    FSBZFulfillmentResult();
};

