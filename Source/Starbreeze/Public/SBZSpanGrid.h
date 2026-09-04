#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidgetPool.h"
#include "OnSpanGridItemClickedDelegate.h"
#include "OnSpanGridItemHoveredDelegate.h"
#include "OnSpanGridItemSelectedDelegate.h"
#include "SBZSpanGridEntry.h"
#include "Templates/SubclassOf.h"
#include "SBZSpanGrid.generated.h"

class UObject;
class USBZItemButton;
class USBZMenuButton;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSpanGrid : public UGridPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpanGridItemSelected OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpanGridItemClicked OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpanGridItemHovered OnItemHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZItemButton> DefaultTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TilePadding;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpanGridEntry> EntryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZItemButton*> ActiveTileArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool TilePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* SelectedItem;
    
public:
    USBZSpanGrid();

    UFUNCTION(BlueprintCallable)
    void SetEntryArray(const TArray<FSBZSpanGridEntry>& InEntryArray);
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstTile();
    
    UFUNCTION(BlueprintCallable)
    void RestoreSelection(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void RefreshLayout();
    
    UFUNCTION(BlueprintCallable)
    void NavigateUp();
    
    UFUNCTION(BlueprintCallable)
    void NavigateRight();
    
    UFUNCTION(BlueprintCallable)
    void NavigateLeft();
    
    UFUNCTION(BlueprintCallable)
    void NavigateDown();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTileHovered(USBZMenuButton* Button, bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void HandleTileFocused(USBZMenuButton* Button, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void HandleTileClicked(USBZMenuButton* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEntryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZItemButton* FindTileForItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearEntries();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLayoutRefreshed(int32 NumEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemSelected(UObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemHovered(UObject* Item, bool bIsHovered);
    
};

