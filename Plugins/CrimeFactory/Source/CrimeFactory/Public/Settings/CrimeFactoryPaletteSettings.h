#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameFramework/Actor.h"
#include "CrimeFactoryPaletteSettings.generated.h"

USTRUCT()
struct CRIMEFACTORY_API FCrimeFactoryPaletteAssetEntry
{
    GENERATED_BODY()

    /** Choose an asset, or use Actor Class for a native actor/generated class. */
    UPROPERTY(EditAnywhere, Category = "Asset", meta = (DisplayThumbnail = "true"))
    TSoftObjectPtr<UObject> Asset;

    UPROPERTY(EditAnywhere, Category = "Asset", meta = (AllowAbstract = "false",
        ToolTip = "Optional alternative to Asset. Select a native Actor class or a Blueprint actor class. Set only one of Asset and Actor Class."))
    TSoftClassPtr<AActor> ActorClass;

    UPROPERTY(EditAnywhere, Category = "Asset")
    FString DisplayName;
};

USTRUCT()
struct CRIMEFACTORY_API FCrimeFactoryPaletteCategory
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "Category")
    FName CategoryName;

    UPROPERTY(EditAnywhere, Category = "Category", meta = (TitleProperty = "DisplayName"))
    TArray<FCrimeFactoryPaletteAssetEntry> Assets;
};

/** Shared palette configuration. Packaging preferences remain per-user. */
UCLASS(Config = Editor, DefaultConfig, meta = (DisplayName = "Asset Palette"))
class CRIMEFACTORY_API UCrimeFactoryPaletteSettings : public UDeveloperSettings
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Config, Category = "Asset Palette", meta = (TitleProperty = "CategoryName"))
    TArray<FCrimeFactoryPaletteCategory> Categories;

    // Registered alongside the existing CrimeFactory settings by its editor module.
    virtual bool SupportsAutoRegistration() const override { return false; }
    virtual FName GetContainerName() const override { return TEXT("Project"); }
    virtual FName GetCategoryName() const override { return TEXT("CrimeFactory"); }
    virtual FName GetSectionName() const override { return TEXT("AssetPalette"); }
};
