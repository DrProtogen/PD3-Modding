#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "CrimeFactoryModEntryList.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateColor.h"

/**
 * Entry of a mod within the mod list of the crimefactory window
 */
class SCrimeFactoryModEntry : public SCompoundWidget {
    SLATE_BEGIN_ARGS(SCrimeFactoryModEntry) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& Args, TSharedRef<IPlugin> InMod, TSharedRef<SCrimeFactoryModEntryList> InOwner);

    void PackageMod(const TArray<TSharedPtr<SCrimeFactoryModEntry>>& NextEntries) const;
    bool RunPreflightValidation() const;

    FReply OnOpenInformation();
    FReply OnOpenModContent();
    FReply OnViewPALAssets();
    FReply OnRefreshPALInspector();
    FReply OnFixInformationIssues();

    void RefreshPALInspectorState();
    FText GetPALInspectorSummaryText() const;
    FSlateColor GetInformationButtonColor() const;
    FText GetInformationButtonTooltip() const;
    EVisibility GetFixInformationVisibility() const;
    bool CanAutoFixInformationIssues() const;
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
    TSharedPtr<SCrimeFactoryModEntryList> Owner;
    TSharedPtr<class SCheckBox> Checkbox;

    /** PAL/chunk information shown by the Information window. */
    FText PALInspectorSummary;
    TSharedPtr<const struct FCrimeFactoryModInspection> PALInformation;
    TArray<TWeakPtr<class SCrimeFactoryModInspector>> InspectorViews;

    /** Cached inspector severity used to tint the Information button. */
    bool bInformationHasWarnings = false;
    bool bInformationHasAutoFixableWarnings = false;

    /** Brush for the mod's Icon128.png, or CrimeFactory128.png as fallback. */
    TSharedPtr<struct FSlateDynamicImageBrush> ModIconBrush;
    
    /** Dialog for editing mod properties */
    TSharedPtr<SWindow> PropertiesWindow;
};
