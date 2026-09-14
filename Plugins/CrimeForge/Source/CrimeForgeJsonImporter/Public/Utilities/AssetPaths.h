

#pragma once

#include "CoreMinimal.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"
#include "Settings/SettingsAccess.h"
#include "Settings/Runtime.h"

/* Turns a package path as the asset backend knows it into the one the same asset takes in the editor. */
inline FString ToEditorPackagePath(const FString& InPath) {
	FString Path = InPath;

	const FString& ProjectName = GCrimeForgeJsonImporterRuntime.Profile.ProjectName;

	if (!ProjectName.IsEmpty()) {
		Path = Path.Replace(*(ProjectName + "/Content/"), TEXT("/Game/"));
		Path = Path.Replace(*(ProjectName + "/Plugins"), TEXT(""));
		Path = Path.Replace(TEXT("/Content/"), TEXT("/"));
	}

	Path = Path.Replace(TEXT("Engine/Content"), TEXT("/Engine"));

	if (!Path.StartsWith(TEXT("/"))) {
		Path = "/" + Path;
	}


	return Path;
}
