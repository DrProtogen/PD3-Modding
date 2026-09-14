

#include "Modules/Toolbar/Dropdowns/GeneralDropdownBuilder.h"

#include "Engine/Compatibility.h"
#include "Engine/EngineUtilities.h"

#include "Modules/Metadata.h"

void IGeneralDropdownBuilder::Build(FMenuBuilder& MenuBuilder) const {
	MenuBuilder.BeginSection("CrimeForgeJsonImporterPluginSection", FText::FromString(FRMetadata::Version));

	MenuBuilder.AddMenuEntry(
		FText::FromString("Settings"),
		FText::FromString("Navigate to Settings"),
#if ENGINE_UE5
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Settings"),
#else
		FSlateIcon(FEditorStyle::GetStyleSetName(), "ProjectSettings.TabIcon"),
#endif
		FUIAction(
			FExecuteAction::CreateLambda([this]() {
				OpenPluginSettings();
			})
		),
		NAME_None
	);

	MenuBuilder.EndSection();
}
