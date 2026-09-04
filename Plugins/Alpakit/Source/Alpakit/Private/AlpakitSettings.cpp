#include "AlpakitSettings.h"

#include "Misc/ConfigCacheIni.h"

namespace
{
	static const TCHAR* AlpakitUserConfigSection = TEXT("Alpakit.PD3");

	static const TCHAR* PD3GamePathConfigKey = TEXT("PD3GamePath");
	static const TCHAR* CopyModsToGameConfigKey = TEXT("CopyModsToGame");
	static const TCHAR* LaunchGameAfterPackingConfigKey = TEXT("LaunchGameAfterPacking");
}

UAlpakitSettings* UAlpakitSettings::Get()
{
	UAlpakitSettings* Settings = GetMutableDefault<UAlpakitSettings>();

	/*
	 * Persist these Alpakit user settings explicitly in GEditorPerProjectIni.
	 *
	 * This avoids relying on the individual properties being declared
	 * UPROPERTY(Config) in AlpakitSettings.h and keeps them per-user/per-project.
	 */
	static bool bLoadedUserSettings = false;
	if (!bLoadedUserSettings)
	{
		bLoadedUserSettings = true;

		if (GConfig)
		{
			FString SavedGamePath;
			if (GConfig->GetString(
				AlpakitUserConfigSection,
				PD3GamePathConfigKey,
				SavedGamePath,
				GEditorPerProjectIni))
			{
				Settings->PD3GamePath.Path = SavedGamePath;
			}

			bool bSavedCopyModsToGame = Settings->bCopyModsToGame;
			if (GConfig->GetBool(
				AlpakitUserConfigSection,
				CopyModsToGameConfigKey,
				bSavedCopyModsToGame,
				GEditorPerProjectIni))
			{
				Settings->bCopyModsToGame = bSavedCopyModsToGame;
			}

			int32 SavedLaunchGameAfterPacking =
				static_cast<int32>(Settings->LaunchGameAfterPacking);

			if (GConfig->GetInt(
				AlpakitUserConfigSection,
				LaunchGameAfterPackingConfigKey,
				SavedLaunchGameAfterPacking,
				GEditorPerProjectIni))
			{
				Settings->LaunchGameAfterPacking =
					static_cast<EAlpakitStartGameType>(
						SavedLaunchGameAfterPacking
					);
			}
		}
	}

	return Settings;
}

void UAlpakitSettings::SaveSettings()
{
	// Preserve the existing behaviour for any normal Config properties.
	SaveConfig();

	if (GConfig)
	{
		GConfig->SetString(
			AlpakitUserConfigSection,
			PD3GamePathConfigKey,
			*PD3GamePath.Path,
			GEditorPerProjectIni);

		GConfig->SetBool(
			AlpakitUserConfigSection,
			CopyModsToGameConfigKey,
			bCopyModsToGame,
			GEditorPerProjectIni);

		GConfig->SetInt(
			AlpakitUserConfigSection,
			LaunchGameAfterPackingConfigKey,
			static_cast<int32>(LaunchGameAfterPacking),
			GEditorPerProjectIni);

		GConfig->Flush(false, GEditorPerProjectIni);
	}
}
