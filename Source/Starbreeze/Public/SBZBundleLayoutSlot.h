#pragma once
#include "CoreMinimal.h"
#include "ESBZItemCategory.h"
#include "SBZGridSpanInfo.h"
#include "SBZBundleLayoutSlot.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZBundleLayoutSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGridSpanInfo SpanInfo;
    
    FSBZBundleLayoutSlot();
};

