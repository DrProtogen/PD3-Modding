#pragma once
#include "CoreMinimal.h"
#include "SBZUIStoreItem.h"
#include "SBZStoreItemArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZStoreItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZUIStoreItem> StoreItemArray;
    
    STARBREEZE_API FSBZStoreItemArray();
};

