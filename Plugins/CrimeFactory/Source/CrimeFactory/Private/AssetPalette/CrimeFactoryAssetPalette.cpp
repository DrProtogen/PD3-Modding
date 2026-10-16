#include "AssetPalette/CrimeFactoryAssetPalette.h"
#include "AssetPalette/SCrimeFactoryAssetPalette.h"
#include "AssetPalette/CrimeFactoryActorThumbnail.h"
#include "CrimeFactoryPaletteSettings.h"

#include "Framework/Docking/TabManager.h"
#include "ISettingsContainer.h"
#include "ISettingsModule.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SNullWidget.h"

#define LOCTEXT_NAMESPACE "CrimeFactoryAssetPalette"

const FName CrimeFactoryAssetPalette::TabName(TEXT("CrimeFactory.AssetPalette"));

void CrimeFactoryAssetPalette::Register()
{
    CrimeFactoryActorThumbnails::Register();
    ISettingsModule& Settings = FModuleManager::LoadModuleChecked<ISettingsModule>("Settings");
    if (auto Container = Settings.GetContainer("Project"))
        Container->DescribeCategory("CrimeFactory", LOCTEXT("Category", "CrimeFactory"),
            LOCTEXT("CategoryDescription", "CrimeFactory level authoring tools."));
    Settings.RegisterSettings("Project", "CrimeFactory", "AssetPalette",
        LOCTEXT("Title", "Asset Palette"), LOCTEXT("SettingsDescription", "Shared categories and assets for the Asset Palette window."),
        GetMutableDefault<UCrimeFactoryPaletteSettings>());
    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(TabName,
        FOnSpawnTab::CreateLambda([](const FSpawnTabArgs& Args)
        {
            return SNew(SDockTab).TabRole(NomadTab)[SNew(SCrimeFactoryAssetPalette)];
        }))
        .SetDisplayName(LOCTEXT("Title", "Asset Palette"))
        .SetTooltipText(LOCTEXT("Tooltip", "Browse configured assets and drag them into the level viewport."))
        .SetMenuType(ETabSpawnerMenuType::Hidden);
}

void CrimeFactoryAssetPalette::Unregister()
{
    if (FSlateApplication::IsInitialized())
    {
        if (auto Tab = FGlobalTabmanager::Get()->FindExistingLiveTab(TabName))
        {
            // Release all palette delegates/thumbnail requests before unloading its module.
            Tab->SetContent(SNullWidget::NullWidget);
            Tab->RequestCloseTab();
        }
    }
    FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabName);
    CrimeFactoryActorThumbnails::Unregister();
    if (auto* Settings = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
        Settings->UnregisterSettings("Project", "CrimeFactory", "AssetPalette");
}

#undef LOCTEXT_NAMESPACE
