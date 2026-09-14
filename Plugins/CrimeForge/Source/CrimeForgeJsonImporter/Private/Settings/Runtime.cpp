

#include "Settings/Runtime.h"

#include "Engine/EngineUtilities.h"
#include "Misc/Paths.h"

FRRuntime GCrimeForgeJsonImporterRuntime;

bool FRRuntime::IsOlderUE4Target() const {
    return MajorVersion == 4 && MinorVersion != -1 && MinorVersion < 14;
}

bool FRRuntime::IsUE5() const {
    return MajorVersion == 5;
}

bool FRRuntime::IsUE4() const {
    return MajorVersion == 4;
}

void FRRuntime::Update() {
    /* Reflection used to borrow FModel's PropertiesDirectory from AppSettings.json. CrimeForge's
     * AssetReader provider does not export JSON through FModel, so keep any legacy file-path fallback
     * rooted in our own Saved folder instead. Direct PAYDAY 3 imports use package paths and never
     * need this directory at all. */
    ExportDirectory.Path = FPaths::ConvertRelativePathToFull(
        FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CrimeForge"), TEXT("Exports")));

    // CrimeForge owns its toolbar entry directly. The old Reflection build conditionally
    // tied visibility behaviour to an unrelated plugin internal name; that probe no longer
    // exists in the integrated importer.
    GCrimeForgeJsonImporterRuntime.bEnableToolbarToggling = false;
}
