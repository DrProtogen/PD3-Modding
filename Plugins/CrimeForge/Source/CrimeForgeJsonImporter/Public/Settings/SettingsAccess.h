

#pragma once

#include "CrimeForgeSettings.h"
#include "ISettingsModule.h"
#include "Modules/ModuleManager.h"

inline UCrimeForgeSettings* GetSettings()
{
    return UCrimeForgeSettings::Get();
}

inline void SavePluginSettings(UCrimeForgeSettings* Settings)
{
    if (Settings)
    {
        Settings->SaveSettings();
    }
}

inline void OpenPluginSettings()
{
    FModuleManager::LoadModuleChecked<ISettingsModule>(TEXT("Settings"))
        .ShowViewer(TEXT("Project"), TEXT("Plugins"), TEXT("CrimeForge"));
}
