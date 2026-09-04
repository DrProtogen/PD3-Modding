#include "AkInitBankAssetCreator.h"

#include "AkInitBank.h"
#include "AkInitBankAssetCreatorLibrary.h"
#include "HAL/IConsoleManager.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogAkInitBankAssetCreator, Log, All);

namespace
{
    TUniquePtr<FAutoConsoleCommand> CreateAssetCommand;
}

void FAkInitBankAssetCreatorModule::StartupModule()
{
    CreateAssetCommand = MakeUnique<FAutoConsoleCommand>(
        TEXT("AkInitBank.CreateAsset"),
        TEXT(
            "Creates a real UAkInitBank asset.\n"
            "Usage: AkInitBank.CreateAsset [FolderPath] [AssetName]\n"
            "Example: AkInitBank.CreateAsset /Game/WwiseAudio InitBank\n"
            "With no arguments, creates /Game/WwiseAudio/InitBank."
        ),
        FConsoleCommandWithArgsDelegate::CreateLambda(
            [](const TArray<FString>& Args)
            {
                const FString FolderPath =
                    Args.Num() > 0 ? Args[0] : TEXT("/Game/WwiseAudio");

                const FString AssetName =
                    Args.Num() > 1 ? Args[1] : TEXT("InitBank");

                FString Error;
                UAkInitBank* Asset =
                    UAkInitBankAssetCreatorLibrary::CreateAkInitBankAsset(
                        FolderPath,
                        AssetName,
                        true,
                        Error
                    );

                if (Asset)
                {
                    UE_LOG(
                        LogAkInitBankAssetCreator,
                        Display,
                        TEXT("Created AkInitBank asset: %s"),
                        *Asset->GetPathName()
                    );
                }
                else
                {
                    UE_LOG(
                        LogAkInitBankAssetCreator,
                        Error,
                        TEXT("Failed to create AkInitBank asset: %s"),
                        *Error
                    );
                }
            }
        )
    );

    UE_LOG(
        LogAkInitBankAssetCreator,
        Display,
        TEXT("AkInitBankAssetCreator loaded. Console command: AkInitBank.CreateAsset")
    );
}

void FAkInitBankAssetCreatorModule::ShutdownModule()
{
    CreateAssetCommand.Reset();
}

IMPLEMENT_MODULE(FAkInitBankAssetCreatorModule, AkInitBankAssetCreator)
