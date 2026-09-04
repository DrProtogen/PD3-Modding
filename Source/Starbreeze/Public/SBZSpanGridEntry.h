#pragma once
#include "CoreMinimal.h"
#include "SBZGridSpanInfo.h"
#include "SBZSpanGridEntry.generated.h"

class USBZInventoryItemDecorator;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSpanGridEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryItemDecorator* ItemDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGridSpanInfo SpanInfo;
    
    FSBZSpanGridEntry();
};

