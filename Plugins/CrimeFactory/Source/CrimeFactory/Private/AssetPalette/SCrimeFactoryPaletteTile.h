#pragma once

#include "CoreMinimal.h"
#include "AssetPalette/CrimeFactoryPaletteModel.h"
#include "AssetPalette/CrimeFactoryActorThumbnail.h"
#include "UObject/StrongObjectPtr.h"
#include "Widgets/Views/STableRow.h"

class FAssetThumbnail;
class FAssetThumbnailPool;

class SCrimeFactoryPaletteTile : public STableRow<TSharedPtr<FCrimeFactoryPaletteItem>>
{
public:
    SLATE_BEGIN_ARGS(SCrimeFactoryPaletteTile) {}
        SLATE_ARGUMENT(TSharedPtr<FCrimeFactoryPaletteItem>, Item)
        SLATE_ARGUMENT(TSharedPtr<FAssetThumbnailPool>, ThumbnailPool)
        SLATE_EVENT(FOnDragDetected, OnAssetDragDetected)
    SLATE_END_ARGS()

    void Construct(const FArguments& Args, const TSharedRef<STableViewBase>& Owner);
    virtual FReply OnMouseButtonDown(const FGeometry& Geometry, const FPointerEvent& Event) override;

private:
    TSharedPtr<FAssetThumbnail> Thumbnail;
    TStrongObjectPtr<UCrimeFactoryActorThumbnail> ActorThumbnail;
};
