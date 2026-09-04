#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "SBZOrderCurrencySummary.h"
#include "SBZOrderSummary.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZOrderSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOrderCurrencySummary Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Ext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Free;
    
    FSBZOrderSummary();
};

