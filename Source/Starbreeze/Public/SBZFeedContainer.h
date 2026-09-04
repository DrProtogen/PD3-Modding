#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidgetPool.h"
#include "SBZActiveFeedEntry.h"
#include "Templates/SubclassOf.h"
#include "SBZFeedContainer.generated.h"

class UPanelWidget;
class USBZFeedEntryConfigAsset;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZFeedContainer : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZFeedEntryConfigAsset* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Container;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZActiveFeedEntry> ActiveArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZActiveFeedEntry> RemovingArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUserWidget>, FUserWidgetPool> PoolMap;
    
public:
    USBZFeedContainer();

    UFUNCTION(BlueprintCallable)
    void RemoveEntry(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateEntry(FName EntryType);
    
    UFUNCTION(BlueprintCallable)
    void Clear(bool bAnimate);
    
    UFUNCTION(BlueprintCallable)
    bool AddEntry(UUserWidget* Widget);
    
};

