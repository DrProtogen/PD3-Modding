#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZItemAction.h"
#include "ESBZItemCategory.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZNewItemInventoryScreen.generated.h"

class USBZBaseItemStrategy;
class USBZInventoryCategoryData;
class USBZTileView;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZNewItemInventoryScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZTileView* ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryCategoryData*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZItemCategory, TSubclassOf<USBZBaseItemStrategy>> InventoryStrategyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseItemStrategy* InventoryStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZItemCategory ActiveItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveSubCategory;
    
public:
    USBZNewItemInventoryScreen();

    UFUNCTION(BlueprintCallable)
    void ShowInventoryWithCategory(ESBZItemCategory ItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsGenerated(ESBZItemCategory ItemCategory, const FGameplayTag& SubCategory);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActionExecuted(ESBZItemAction Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USBZBaseItemStrategy* GetItemStrategy() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInventoryCategoryData* GetCategoryData(const ESBZItemCategory& ItemCategory) const;
    
    UFUNCTION(BlueprintCallable)
    bool GenerateItems(ESBZItemCategory ItemCategory, const FGameplayTag& SubCategory);
    
};

