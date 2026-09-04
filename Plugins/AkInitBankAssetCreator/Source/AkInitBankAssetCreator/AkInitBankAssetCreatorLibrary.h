#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkInitBankAssetCreatorLibrary.generated.h"

class UAkInitBank;

/**
 * Editor-only helpers for creating native AkAudio assets.
 *
 * These functions create actual UAkInitBank UObject assets.
 * They do NOT create Blueprint subclasses of UAkInitBank.
 */
UCLASS()
class AKINITBANKASSETCREATOR_API UAkInitBankAssetCreatorLibrary
    : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Creates a UAkInitBank asset at:
     *
     *     FolderPath/AssetName
     *
     * Example:
     *     FolderPath = /Game/WwiseAudio
     *     AssetName  = InitBank
     *
     * Produces:
     *     /Game/WwiseAudio/InitBank.InitBank
     *
     * @param FolderPath Package folder, e.g. /Game/WwiseAudio
     * @param AssetName Asset/object name, e.g. InitBank
     * @param bSaveImmediately Save the package to disk immediately
     * @param OutError Populated if creation fails
     */
    UFUNCTION(
        BlueprintCallable,
        Category = "Ak InitBank Asset Creator",
        meta = (DevelopmentOnly)
    )
    static UAkInitBank* CreateAkInitBankAsset(
        const FString& FolderPath,
        const FString& AssetName,
        bool bSaveImmediately,
        FString& OutError
    );
};
