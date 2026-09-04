#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerItemSource.h"
#include "SBZCrimeBondBundleStoreItem.h"
#include "SBZCrimeBondProgression.h"
#include "SBZCrimeBondBundlePack.generated.h"

class USBZItemBundleData;

USTRUCT(BlueprintType)
struct FSBZCrimeBondBundlePack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZItemBundleData* BundlePackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZCrimeBondBundleStoreItem> CrimeBondBundleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCrimeBondProgression CrimeBondProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZPlayerItemSource> ItemSourceArray;
    
    STARBREEZE_API FSBZCrimeBondBundlePack();
};

