#pragma once
#include "CoreMinimal.h"
#include "ESBZItemCurrencyType.h"
#include "SBZOrderCurrencySummary.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZOrderCurrencySummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrencyCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrencySymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemCurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Decimals;
    
    FSBZOrderCurrencySummary();
};

