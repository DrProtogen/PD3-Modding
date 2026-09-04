#pragma once
#include "CoreMinimal.h"
#include "SBZCodeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> GeneratedCodeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasBeenInteractedWith;
    
    STARBREEZE_API FSBZCodeData();
};

