#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/AssetData.h"
#include "Settings/CrimeFactoryPaletteSettings.h"

class FDragDropOperation;
class IAssetRegistry;

struct FCrimeFactoryPaletteItem
{
    FCrimeFactoryPaletteAssetEntry Entry;
    FSoftObjectPath Path;
    FAssetData AssetData;
    FText Label;
    FText TypeLabel;
    FText Problem;
    bool bClassEntry = false;

    bool MatchesSearch(const FString& Search) const;
    FText GetTooltip() const;
};

namespace CrimeFactoryPalette
{
    // Metadata lookup only. No GetAsset/TryLoad during browsing or filtering.
    FCrimeFactoryPaletteItem Resolve(const FCrimeFactoryPaletteAssetEntry& Entry, IAssetRegistry& Registry);
    TSharedPtr<FDragDropOperation> CreateDrag(const FCrimeFactoryPaletteItem& Item, IAssetRegistry& Registry, FText& Error);
    FText CategoryLabel(const FCrimeFactoryPaletteCategory& Category, int32 Index);
}
