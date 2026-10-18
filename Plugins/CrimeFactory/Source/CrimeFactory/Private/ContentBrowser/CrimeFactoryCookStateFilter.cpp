#include "ContentBrowser/CrimeFactoryCookStateFilter.h"

#include "AssetRegistry/AssetData.h"
#include "ContentBrowserItem.h"
#include "UObject/Package.h"

#define LOCTEXT_NAMESPACE "CrimeFactoryCookStateFilter"

FCrimeFactoryUncookedAssetsFilter::FCrimeFactoryUncookedAssetsFilter(TSharedPtr<FFrontendFilterCategory> Category)
    : FFrontendFilter(MoveTemp(Category))
{
}

FString FCrimeFactoryUncookedAssetsFilter::GetName() const
{
    // Persisted by the native filter bar in each Content Browser's settings.
    return TEXT("CrimeFactoryUncookedAssets");
}

FText FCrimeFactoryUncookedAssetsFilter::GetDisplayName() const
{
    return LOCTEXT("DisplayName", "Uncooked Assets");
}

FText FCrimeFactoryUncookedAssetsFilter::GetToolTipText() const
{
    return LOCTEXT("Tooltip", "Show only uncooked assets. Disable this filter to include cooked game assets again.");
}

bool FCrimeFactoryUncookedAssetsFilter::IsUncookedAsset(const FAssetData& Asset)
{
    // Retail registry records retain these package flags in the compatibility engine.
    // Paths and package writability cannot distinguish retail assets from source overrides.
    return !Asset.HasAnyPackageFlags(PKG_Cooked | PKG_FilterEditorOnly);
}

bool FCrimeFactoryUncookedAssetsFilter::PassesFilter(FAssetFilterType Item) const
{
    // Keep folders navigable and leave non-asset data sources alone.
    if (Item.IsFolder()) return true;
    FAssetData Asset;
    return !Item.Legacy_TryGetAssetData(Asset) || IsUncookedAsset(Asset);
}

void UCrimeFactoryCookStateFilterExtension::AddFrontEndFilterExtensions(
    TSharedPtr<FFrontendFilterCategory> DefaultCategory, TArray<TSharedRef<FFrontendFilter>>& InOutFilterList) const
{
    InOutFilterList.Add(MakeShared<FCrimeFactoryUncookedAssetsFilter>(MoveTemp(DefaultCategory)));
}

#undef LOCTEXT_NAMESPACE
