#pragma once
#include "CoreMinimal.h"
#include "ESBZBundleMannequinContext.h"
#include "SBZBundleDisplayBase.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZBundleMannequinDisplay.generated.h"

class ASBZBundleMannequin;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBundleMannequinDisplay : public USBZBundleDisplayBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZBundleMannequinContext MannequinContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZItemBundleStoreItem> EntryBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastDressedPack;
    
public:
    USBZBundleMannequinDisplay();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZBundleMannequin* GetMannequin(int32 Index) const;
    
};

