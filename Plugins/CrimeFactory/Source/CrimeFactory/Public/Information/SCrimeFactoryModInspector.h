#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

struct FCrimeFactoryInspectionAssetGroup
{
    FName Id;
    FText Name;
    FText Description;
    TArray<FString> Paths;
};

/** Immutable presentation snapshot of the existing PAL inspector, with no loaded asset references. */
struct FCrimeFactoryModInspection
{
    FString PluginName;
    FString PackagingMode;
    FString Chunk;
    int32 PluginAssetCount = 0;
    int32 ManagedAssetCount = 0;
    int32 ExternalAssetCount = 0;
    bool bCanFix = false;
    TArray<TPair<FText, FString>> Fields;
    TArray<FString> Issues;
    TSet<FString> MissingPaths;
    TArray<TSharedPtr<FCrimeFactoryInspectionAssetGroup>> Groups;
    FString InformationReport;
    FString AssetsReport;
};

class SCrimeFactoryModInspector : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SCrimeFactoryModInspector) : _ShowAssets(false) {}
        SLATE_ARGUMENT(TSharedPtr<const FCrimeFactoryModInspection>, Data)
        SLATE_ARGUMENT(bool, ShowAssets)
        SLATE_EVENT(FSimpleDelegate, OnRefresh)
        SLATE_EVENT(FSimpleDelegate, OnFix)
        SLATE_EVENT(FSimpleDelegate, OnViewAssets)
        SLATE_EVENT(FSimpleDelegate, OnClose)
        SLATE_EVENT(TDelegate<bool(const FString&)>, OnLocateAsset)
    SLATE_END_ARGS()

    void Construct(const FArguments& Args);
    void SetData(TSharedPtr<const FCrimeFactoryModInspection> InData);
    void SetSearchText(const FText& Text);
    void SelectGroup(FName Id);
    int32 GetVisibleAssetCount() const { return VisiblePaths.Num(); }
    FName GetSelectedGroup() const { return SelectedGroup; }

private:
    void Rebuild();
    void FilterAssets();
    void LocateAsset(const TSharedPtr<FString>& Path);
    TSharedRef<SWidget> MakeInformationBody();
    TSharedRef<SWidget> MakeAssetsBody();
    TSharedPtr<const FCrimeFactoryModInspection> Data;
    bool bShowAssets = false;
    FName SelectedGroup;
    FString SearchText;
    FText AssetFeedback;
    TArray<TSharedPtr<FString>> VisiblePaths;
    TSharedPtr<SListView<TSharedPtr<FString>>> AssetList;
    FSimpleDelegate RefreshAction, FixAction, ViewAssetsAction, CloseAction;
    TDelegate<bool(const FString&)> LocateAction;
};
