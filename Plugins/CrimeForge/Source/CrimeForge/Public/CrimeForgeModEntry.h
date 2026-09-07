#pragma once
#include "CrimeForgeModEntryList.h"
#include "Interfaces/IPluginManager.h"

/**
 * Entry of a mod within the mod list of the crimeforge window
 */
class SCrimeForgeModEntry : public SCompoundWidget {
    SLATE_BEGIN_ARGS(SCrimeForgeModEntry) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& Args, TSharedRef<IPlugin> InMod, TSharedRef<SCrimeForgeModEntryList> InOwner);

    void PackageMod(const TArray<TSharedPtr<SCrimeForgeModEntry>>& NextEntries) const;
    bool RunPreflightValidation() const;

    FReply OnTogglePALInspector();
    FReply OnViewPALAssets();
    FReply OnRefreshPALInspector();
    FText GetPALInspectorButtonText() const;
    FText GetPALInspectorSummaryText() const;
    EVisibility GetPALInspectorVisibility() const;
    void OnEnableCheckboxChanged(ECheckBoxState NewState);

    void OnEditMod();
    FReply OnEditModFinished(class UModMetadataObject* Metadata);
    FReply OnDeleteMod();

    FORCEINLINE bool IsSelected() {
        return Checkbox && Checkbox->IsChecked();
    }

    FORCEINLINE void SetSelected(bool bInSelected) {
        if (Checkbox) {
            Checkbox->SetIsChecked(bInSelected);
        }
    }

private:
    TSharedPtr<IPlugin> Mod;
    TSharedPtr<SCrimeForgeModEntryList> Owner;
    TSharedPtr<class SCheckBox> Checkbox;

    /** Inline PAL/chunk inspector state. */
    bool bPALInspectorExpanded = false;
    FText PALInspectorSummary;
    
    /** Dialog for editing mod properties */
    TSharedPtr<SWindow> PropertiesWindow;
};
