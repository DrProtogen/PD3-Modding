#include "Modules/Toolbar/Tools/ImportFolder.h"

#include "Modules/UI/Import/SImportPathsDialog.h"

void TToolImportFolder::Execute() {
	/* Folder import now lives in the main dockable importer. This keeps legacy menu actions from
	 * resurrecting the old standalone SImportFolderDialog window. */
	SImportPathsDialog::OpenAndAddCurrentGameFolder();
}
