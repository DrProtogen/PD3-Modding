

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

struct FRImporterProfile {
	/* What the profile is called in the embedded PAYDAY 3 provider, which is the embedded importer calls it */
	FString Name;

	/* The project the profile's files came out of ("PAYDAY3"), which is what package paths
	 * are spelled with. Nothing like the name above, and the only one of the two paths care. */
	FString ProjectName;
};

struct FRRuntime {
	/* UE4.22 ~~> 22 */
	int MinorVersion = -1;

	/* UE4.22 ~~> 4 */
	int MajorVersion = -1;

	FRImporterProfile Profile;
	FDirectoryPath ExportDirectory;

	bool bEnableToolbarToggling = false;

	/* Helper Functions ~~~~~~~~~~~ */
	bool IsOlderUE4Target() const;
	bool IsUE5() const;
	bool IsUE4() const;

	/* Update Functions ~~~~~~~~~~~ */
	void Update();
};

extern FRRuntime GCrimeForgeJsonImporterRuntime;