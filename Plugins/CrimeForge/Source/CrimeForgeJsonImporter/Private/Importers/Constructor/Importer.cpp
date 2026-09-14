

#include "Importers/Constructor/Importer.h"

#include "Settings/CrimeForgeJsonImporterSettings.h"

#include "Misc/MessageDialog.h"

/* ~~~~~~~~~~~~~ Templated Engine Classes ~~~~~~~~~~~~~ */
#include "Engine/Log.h"
#include "Engine/EngineUtilities.h"
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

UObject* IImporter::CreateAsset(UObject* CreatedAsset) {
	if (CreatedAsset) {
		AssetExport->Object = CreatedAsset;
    
		return CreatedAsset;
	}

	return nullptr;
}

void IImporter::Save() const {
	const UCrimeForgeSettings* Settings = GetSettings();

	/* Ensure the package is valid before proceeding */
	if (GetPackage() == nullptr) {
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("IImporter::Save: Package is null"));
		return;
	}

	/* User option to save packages on import */
	if (Settings->bSaveImportedAssets) {
		SavePackage(GetPackage());
	}
}

bool IImporter::OnAssetCreation(UObject* Asset) const {
	const bool Synced = HandleAssetCreation(Asset, GetPackage());
	if (Synced) {
		Save();
	}
	
	return Synced;
}