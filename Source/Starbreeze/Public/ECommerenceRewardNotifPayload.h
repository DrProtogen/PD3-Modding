#pragma once
#include "CoreMinimal.h"
#include "SBZCreditSummary.h"
#include "SBZEntitlementSummary.h"
#include "ECommerenceRewardNotifPayload.generated.h"

USTRUCT(BlueprintType)
struct FECommerenceRewardNotifPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rewardTopic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rewardCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rewardCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEntitlementSummary> EntitlementSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCreditSummary> CreditSummaries;
    
    STARBREEZE_API FECommerenceRewardNotifPayload();
};

