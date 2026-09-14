

#include "CrimeForgeJsonImporter.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Modules/UI/StyleModule.h"
#include "Engine/EngineUtilities.h"
#include "Modules/AssetBackend/BlockingRequest.h"

static TWeakPtr<SNotificationItem> BackendNotification;

bool AssetBackend::Status::IsOpened() {
    /* Kept for compatibility with importer code that used to ask whether Core.exe existed. There
     * is no process anymore; the equivalent is the embedded runtime being shipped with CrimeForge. */
    return FCrimeForgeAssetReader::Get().IsRuntimeAvailable();
}

void AssetBackend::Status::IsReady(TFunction<void(bool)> OnResponse) {
    if (FCrimeForgeAssetReader::Get().IsInitialized()) {
        OnResponse(true);
        return;
    }

    const FBlockingRequestScope Scope(
        NSLOCTEXT("CrimeForgeJsonImporter", "InitializingBackend", "Initializing PAYDAY 3 data"));

    FString Error;
    const bool bReady = FCrimeForgeAssetReader::Get().EnsureInitialized(&Error);
    OnResponse(bReady);
}

void AssetBackend::Status::Check(TFunction<void(bool)> OnResponse) {
    RemoveNotification(BackendNotification);

    const FBlockingRequestScope Scope(
        NSLOCTEXT("CrimeForgeJsonImporter", "InitializingBackend", "Initializing PAYDAY 3 data"));

    FString Error;
    if (!FCrimeForgeAssetReader::Get().EnsureInitialized(&Error)) {
        BackendNotification = AppendNotificationWithHandler(
            FText::FromString(TEXT("CrimeForge JSON Importer isn't ready")),
            FText::FromString(Error),
            8.0f,
            FCrimeForgeJsonImporterStyle::Get().GetBrush("Toolbar.Icon"),
            SNotificationItem::CS_Fail,
            true,
            520.0f
        );

        OnResponse(false);
        return;
    }

    OnResponse(true);
}

bool AssetBackend::Status::ShouldWaitUntilInitialized() {
    /* Initialization is owned by the click that requested it; there is no external process to
     * poll while somebody opens a profile in another window. */
    return false;
}
