#pragma once
#include "CoreMinimal.h"
#include "SBZItemBoxItem.h"
#include "SBZItemOptionBoxConfig.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZItemOptionBoxConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemBoxItem> BoxItems;
    
    FSBZItemOptionBoxConfig();
};

