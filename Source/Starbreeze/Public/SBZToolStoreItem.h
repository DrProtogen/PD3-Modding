#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZToolStoreItem.generated.h"

class USBZToolData;

USTRUCT(BlueprintType)
struct FSBZToolStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZToolData* ToolData;
    
    STARBREEZE_API FSBZToolStoreItem();
};

