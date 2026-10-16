#pragma once

#include "CoreMinimal.h"
#include "AssetPalette/CrimeFactoryPaletteModel.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/STileView.h"

class FAssetThumbnailPool;
class IAssetRegistry;
class SHorizontalBox;
class SSearchBox;

class SCrimeFactoryAssetPalette : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SCrimeFactoryAssetPalette) {} SLATE_END_ARGS()
    void Construct(const FArguments& Args);
    virtual ~SCrimeFactoryAssetPalette() override;

    void RefreshFromSettings();
    void SelectCategory(int32 Index);
    void SetSearchText(const FText& Text);
    int32 GetSelectedCategory() const { return SelectedCategory; }
    const TArray<TSharedPtr<FCrimeFactoryPaletteItem>>& GetVisibleItems() const { return VisibleItems; }

private:
    IAssetRegistry* Registry = nullptr;
    TSharedPtr<FAssetThumbnailPool> ThumbnailPool;
    TSharedPtr<SHorizontalBox> CategoryTabs;
    TSharedPtr<SSearchBox> SearchBox;
    TSharedPtr<STileView<TSharedPtr<FCrimeFactoryPaletteItem>>> Grid;
    TArray<TSharedPtr<FCrimeFactoryPaletteItem>> CategoryItems;
    TArray<TSharedPtr<FCrimeFactoryPaletteItem>> VisibleItems;
    TSet<FName> WatchedPackages;
    TMap<FSoftObjectPath, FSoftObjectPath> RenamedAssets;
    int32 SelectedCategory = INDEX_NONE;
    FName SelectedCategoryName;
    FString Search;
    bool bRegistryRefreshPending = false;
    FDelegateHandle SettingsChangedHandle;

    void RebuildCategoryItems();
    void ApplySearch();
    void OnSettingsChanged(UObject* Object, FPropertyChangedEvent& Event);
    void OnAssetChanged(const FAssetData& Asset);
    void OnAssetRenamed(const FAssetData& Asset, const FString& OldPath);
    void QueueRegistryRefresh();
    EActiveTimerReturnType RefreshRegistry(double Time, float Delta);
    TSharedRef<ITableRow> GenerateTile(TSharedPtr<FCrimeFactoryPaletteItem> Item, const TSharedRef<STableViewBase>& Owner);
    FReply DragTile(const FGeometry& Geometry, const FPointerEvent& Event, TSharedPtr<FCrimeFactoryPaletteItem> Item);
    TSharedPtr<SWidget> OpenContextMenu();
    void OpenAsset(TSharedPtr<FCrimeFactoryPaletteItem> Item);
    void FindAsset(TSharedPtr<FCrimeFactoryPaletteItem> Item);
    FText GetEmptyText() const;
};
