#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Interfaces/IPluginManager.h"

/**
 * Widget that lists all plugins that might be able to get packed as mods
 */
class SCrimeFactoryModEntryList : public SCompoundWidget {
	SLATE_BEGIN_ARGS(SCrimeFactoryModEntryList) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& Args);

	/**
	 * Updates the mod list.
	 */
	void LoadMods();
    FReply RefreshMods();
    int32 GetModCount() const { return Mods.Num(); }
    bool ContainsMod(const FString& Name) const;

	/**
	 * Filters the mods for the given string
	 */
	void Filter(const FString& InFilter);

	/**
	 * Returns the string which was use previously to filter
	 */
	FString GetLastFilter() const;

	/**
	 * True if engine plugins are considered being mods
	 */
	void SetShowEngine(bool bInShowEngine);
	void SetShowProject(bool bInShowProject);

	void OnNewPluginCreated(IPlugin& Plugin);
private:
	void RebuildModGrid();

	TSharedPtr<class SWrapBox> ModGrid;
	TArray<TSharedPtr<class SCrimeFactoryModEntry>> VisibleEntries;
	TArray<TSharedRef<IPlugin>> Mods;
	TArray<TSharedRef<IPlugin>> FilteredMods;
	FString LastFilter;
	bool bShowEngine = false;
	bool bShowProject = false;
    bool bLoadingMods = false;
    FText RefreshStatus;

	FReply PackageAllMods();
	FReply CheckAllMods();
	FReply UncheckAllMods();
	FReply CreateMod();
	FReply ImportLegacyMod();
};
