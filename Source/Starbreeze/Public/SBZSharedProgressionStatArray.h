#pragma once
#include "CoreMinimal.h"
#include "SBZSharedProgressionStatArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZSharedProgressionStatArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SharedProgressionStats;
    
    STARBREEZE_API FSBZSharedProgressionStatArray();
};

