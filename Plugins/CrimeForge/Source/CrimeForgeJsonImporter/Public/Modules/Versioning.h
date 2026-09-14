

#pragma once

#include "CoreMinimal.h"

/* GitHub Versioning Updates for CrimeForge JSON Importer */
struct FCrimeForgeJsonImporterVersioning {
	/* Constructors ~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	FCrimeForgeJsonImporterVersioning() = default;
	
	FCrimeForgeJsonImporterVersioning(const int Version, const int LatestVersion, const FString& InHTMLUrl, const FString& VersionName, const FString& CurrentVersionName)
		: Version(Version)
		, VersionName(VersionName)
		, CurrentVersionName(CurrentVersionName)
		, HTMLUrl(InHTMLUrl)
		, LatestVersion(LatestVersion)
	{
	}

	/* Functions ~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	void SetValid(const bool Valid);
	void Reset(const int InVersion, const int InLatestVersion, const FString& InHTMLUrl, const FString& InVersionName, const FString& InCurrentVersionName);
	void Update();
	
	/* Static Helper Variables ~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	bool IsNewVersionAvailable() const;
	bool IsFutureVersion() const;
	bool IsLatestVersion() const;

	int Version = 0;
	
	FString VersionName = "";
	FString CurrentVersionName = "";
	FString HTMLUrl = "";

	bool IsValid = false;

	/* .uplugin version */
	int LatestVersion = 0;
};

extern FCrimeForgeJsonImporterVersioning GCrimeForgeJsonImporterVersioning;