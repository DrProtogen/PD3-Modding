#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZThrowableStoreItem.generated.h"

class USBZThrowableData;

USTRUCT(BlueprintType)
struct FSBZThrowableStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZThrowableData* ThrowableData;
    
    STARBREEZE_API FSBZThrowableStoreItem();
};

