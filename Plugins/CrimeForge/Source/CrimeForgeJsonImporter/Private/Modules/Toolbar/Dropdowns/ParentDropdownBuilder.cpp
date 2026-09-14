

#include "Modules/Toolbar/Dropdowns/ParentDropdownBuilder.h"

#include "CrimeForgeJsonImporter.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/Toolbar/Tools/ImportFolder.h"
#include "Engine/Compatibility.h"
#include "Engine/EngineUtilities.h"

void IParentDropdownBuilder::Build(FMenuBuilder& MenuBuilder) const {
	MenuBuilder.BeginSection(
		"CrimeForgeJsonImporterSection",
		FText::FromString("Plugin")
	);

	/* The button reflects one path, this reflects all of them under a folder. Same way in, so it
	 * sits with the button rather than off in the asset backend menu. */
	MenuBuilder.AddMenuEntry(
		FText::FromString("Folder"),
		FText::FromString("Import assets under a folder of the game files, not one in this project"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "ContentBrowser.AssetTreeFolderOpen"),

		FUIAction(
			FExecuteAction::CreateLambda([] {
				TToolImportFolder Tool;
				Tool.Execute();
			}),

			FCanExecuteAction::CreateLambda([] {
				return AssetBackend::Status::IsOpened();
			})
		),
		NAME_None
	);

	MenuBuilder.EndSection();
}
