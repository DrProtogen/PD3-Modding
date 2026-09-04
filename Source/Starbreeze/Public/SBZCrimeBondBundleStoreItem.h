#pragma once
#include "CoreMinimal.h"
#include "SBZCrimeBondProgression.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZCrimeBondBundleStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZCrimeBondBundleStoreItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZItemBundleStoreItem ItemBundleStoreItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCrimeBondProgression CrimeBondProgression;
    
    STARBREEZE_API FSBZCrimeBondBundleStoreItem();
};

