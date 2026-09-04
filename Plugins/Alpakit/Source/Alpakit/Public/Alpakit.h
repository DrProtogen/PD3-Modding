#pragma once
#include "CoreMinimal.h"
#include "ContentBrowserDelegates.h"
#include "Interfaces/IPluginManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAlpakit, Verbose, All);

class FAlpakitModule : public IModuleInterface {
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    TArray<TSharedRef<struct FModTemplateDescription>> GetModTemplates() const { return ModTemplates; }

    /**
     * Ensure this mod is present in the PrimaryAssetLabel scan configuration
     * and persist it before a separate UAT cook starts.
     */
    void EnsureAssetManagerRegistrationForPlugin(IPlugin& Plugin);
    
    /** ID name for the mod creator tab */
    static const FName ModCreatorTabName;
private:
    TSharedPtr<class FUICommandList> PluginCommands;

    TSharedRef<SDockTab> HandleSpawnModCreatorTab(const FSpawnTabArgs& SpawnTabArgs);
    
    void RegisterSettings() const;
    void UnregisterSettings() const;

    void RegisterModTemplates();
    void AddModTemplatesFromPlugin(IPlugin& Plugin);
    bool RegisterPrimaryAssetLabelsFromPlugin(IPlugin& Plugin);
    void SaveAndRefreshAssetManagerSettings();
    TArray<TSharedRef<struct FModTemplateDescription>> ModTemplates;
};
