#include "AkInitBankAssetCreatorLibrary.h"

#include "AkInitBank.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Misc/PackageName.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"

namespace
{
    FString NormalizeFolderPath(FString FolderPath)
    {
        FolderPath.TrimStartAndEndInline();

        while (FolderPath.EndsWith(TEXT("/")))
        {
            FolderPath.LeftChopInline(1);
        }

        return FolderPath;
    }
}

UAkInitBank* UAkInitBankAssetCreatorLibrary::CreateAkInitBankAsset(
    const FString& InFolderPath,
    const FString& InAssetName,
    const bool bSaveImmediately,
    FString& OutError
)
{
    OutError.Reset();

    FString FolderPath = NormalizeFolderPath(InFolderPath);
    FString AssetName = InAssetName;
    AssetName.TrimStartAndEndInline();

    if (FolderPath.IsEmpty())
    {
        OutError = TEXT("FolderPath is empty.");
        return nullptr;
    }

    if (!FolderPath.StartsWith(TEXT("/Game")))
    {
        OutError = FString::Printf(
            TEXT("FolderPath must be a long package path beginning with /Game. Got: %s"),
            *FolderPath
        );
        return nullptr;
    }

    if (AssetName.IsEmpty())
    {
        OutError = TEXT("AssetName is empty.");
        return nullptr;
    }

    if (!FPackageName::IsValidObjectPath(
            FString::Printf(
                TEXT("%s/%s.%s"),
                *FolderPath,
                *AssetName,
                *AssetName
            )
        ))
    {
        OutError = FString::Printf(
            TEXT("Invalid asset path: %s/%s"),
            *FolderPath,
            *AssetName
        );
        return nullptr;
    }

    const FString PackageName =
        FString::Printf(TEXT("%s/%s"), *FolderPath, *AssetName);

    const FString ObjectPath =
        FString::Printf(
            TEXT("%s.%s"),
            *PackageName,
            *AssetName
        );

    // If the object is already loaded, do not create a duplicate.
    if (UObject* ExistingObject = StaticFindObject(
            UObject::StaticClass(),
            nullptr,
            *ObjectPath
        ))
    {
        if (UAkInitBank* ExistingInitBank = Cast<UAkInitBank>(ExistingObject))
        {
            OutError = FString::Printf(
                TEXT("A UAkInitBank already exists at %s."),
                *ObjectPath
            );
            return ExistingInitBank;
        }

        OutError = FString::Printf(
            TEXT(
                "An object already exists at %s, but it is %s rather than UAkInitBank. "
                "Delete or rename the existing asset first."
            ),
            *ObjectPath,
            *ExistingObject->GetClass()->GetPathName()
        );
        return nullptr;
    }

    // Also try loading an existing object that is not currently loaded.
    if (UObject* ExistingObject = StaticLoadObject(
            UObject::StaticClass(),
            nullptr,
            *ObjectPath,
            nullptr,
            LOAD_NoWarn
        ))
    {
        if (UAkInitBank* ExistingInitBank = Cast<UAkInitBank>(ExistingObject))
        {
            OutError = FString::Printf(
                TEXT("A UAkInitBank already exists at %s."),
                *ObjectPath
            );
            return ExistingInitBank;
        }

        OutError = FString::Printf(
            TEXT(
                "An asset already exists at %s, but it is %s rather than UAkInitBank. "
                "Delete or rename the existing asset first."
            ),
            *ObjectPath,
            *ExistingObject->GetClass()->GetPathName()
        );
        return nullptr;
    }

    UPackage* Package = CreatePackage(*PackageName);

    if (!Package)
    {
        OutError = FString::Printf(
            TEXT("CreatePackage failed for %s."),
            *PackageName
        );
        return nullptr;
    }

    Package->FullyLoad();

    UAkInitBank* InitBank = NewObject<UAkInitBank>(
        Package,
        UAkInitBank::StaticClass(),
        *AssetName,
        RF_Public | RF_Standalone | RF_Transactional
    );

    if (!InitBank)
    {
        OutError = FString::Printf(
            TEXT("NewObject<UAkInitBank> failed for %s."),
            *ObjectPath
        );
        return nullptr;
    }

    FAssetRegistryModule::AssetCreated(InitBank);

    InitBank->MarkPackageDirty();
    Package->MarkPackageDirty();

    if (bSaveImmediately)
    {
        const FString Filename =
            FPackageName::LongPackageNameToFilename(
                PackageName,
                FPackageName::GetAssetPackageExtension()
            );

        FSavePackageArgs SaveArgs;
        SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
        SaveArgs.SaveFlags = SAVE_None;
        SaveArgs.Error = GError;

        const bool bSaved = UPackage::SavePackage(
            Package,
            InitBank,
            *Filename,
            SaveArgs
        );

        if (!bSaved)
        {
            OutError = FString::Printf(
                TEXT(
                    "The UAkInitBank object was created in memory, but the package "
                    "failed to save to %s."
                ),
                *Filename
            );
            return InitBank;
        }
    }

    return InitBank;
}
