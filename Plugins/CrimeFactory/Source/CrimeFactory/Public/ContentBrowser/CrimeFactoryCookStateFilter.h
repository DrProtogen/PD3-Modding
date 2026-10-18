#pragma once

#include "ContentBrowserFrontEndFilterExtension.h"
#include "CrimeFactoryCookStateFilter.generated.h"

struct FAssetData;

/** Registry-only filtering: never load or modify an asset to determine its cook state. */
class FCrimeFactoryUncookedAssetsFilter final : public FFrontendFilter
{
public:
    explicit FCrimeFactoryUncookedAssetsFilter(TSharedPtr<FFrontendFilterCategory> Category);

    virtual FString GetName() const override;
    virtual FText GetDisplayName() const override;
    virtual FText GetToolTipText() const override;
    virtual bool PassesFilter(FAssetFilterType Item) const override;

    static bool IsUncookedAsset(const FAssetData& Asset);
};

/** Discovered by the native Content Browser when constructing each filter bar. */
UCLASS()
class UCrimeFactoryCookStateFilterExtension final : public UContentBrowserFrontEndFilterExtension
{
    GENERATED_BODY()

public:
    virtual void AddFrontEndFilterExtensions(TSharedPtr<FFrontendFilterCategory> DefaultCategory,
        TArray<TSharedRef<FFrontendFilter>>& InOutFilterList) const override;
};
