

#pragma once

#include "CoreMinimal.h"
#include "Modules/Tools/ToolBase.h"

/* Imports every asset under a folder of the game files.
 *
 * The folder is one the asset backend knows about, not one in this project: nothing has to point at any of
 * it yet. The asset backend hands back the paths, and each of them goes through the same import the by-path
 * tool runs. */
class TToolImportFolder : public TToolBase {
public:
	void Execute();
};
