#include "Importers/Transaction/ImportTransaction.h"

#include "Engine/Log.h"
#include "HAL/FileManager.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "PackageTools.h"
#include "UObject/Package.h"
#include "UObject/UObjectGlobals.h"

namespace {
	FString GBatchDirectory;
	int32 GBatchDepth = 0;
	bool bBatchPrepared = false;

	FString MakeBatchDirectory() {
		return FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CrimeForge"), TEXT("ImportBackups"), TEXT("LastImport"));
	}

	void PrepareBatchDirectory() {
		if (bBatchPrepared) return;
		GBatchDirectory = MakeBatchDirectory();
		IFileManager::Get().DeleteDirectory(*GBatchDirectory, false, true);
		IFileManager::Get().MakeDirectory(*GBatchDirectory, true);
		bBatchPrepared = true;
	}

	void AddPackageFileIfPresent(const FString& Filename, TArray<FString>& OutFiles) {
		if (IFileManager::Get().FileExists(*Filename)) OutFiles.AddUnique(Filename);
	}

	TArray<FString> FindPackageFiles(const FString& PackageName) {
		TArray<FString> Files;
		if (PackageName.IsEmpty()) return Files;

		const FString AssetFilename = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
		const FString MapFilename = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetMapPackageExtension());
		AddPackageFileIfPresent(AssetFilename, Files);
		AddPackageFileIfPresent(MapFilename, Files);

		const FString AssetExtension = FPaths::GetExtension(AssetFilename, true);
		const FString Base = AssetExtension.IsEmpty() ? AssetFilename : AssetFilename.LeftChop(AssetExtension.Len());
		AddPackageFileIfPresent(Base + TEXT(".uexp"), Files);
		AddPackageFileIfPresent(Base + TEXT(".ubulk"), Files);
		AddPackageFileIfPresent(Base + TEXT(".uptnl"), Files);
		return Files;
	}

	FString BackupPathFor(const FString& PackageName, const FString& SourceFile) {
		FString RelativePackage = PackageName;
		RelativePackage.RemoveFromStart(TEXT("/"));
		return FPaths::Combine(MakeBatchDirectory(), RelativePackage + TEXT(".") + FPaths::GetExtension(SourceFile));
	}

	void ReloadPackageByName(const FString& PackageName) {
		if (UPackage* Package = FindPackage(nullptr, *PackageName)) {
			/* A failed replacement commonly leaves the in-memory package dirty. The on-disk package has
			 * already been restored at this point, so clear the dirty flag before asking UnrealEd to
			 * reload it. Otherwise ReloadPackages can try to protect the failed, mutated state instead
			 * of accepting the transactional backup. */
			Package->SetDirtyFlag(false);
			TArray<UPackage*> Packages{Package};
			UPackageTools::ReloadPackages(Packages);
		}
	}

	TArray<FString> PotentialPackageFiles(const FString& PackageName) {
		TArray<FString> Files;
		if (PackageName.IsEmpty()) return Files;

		const FString AssetFilename = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
		const FString MapFilename = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetMapPackageExtension());
		Files.Add(AssetFilename);
		Files.Add(MapFilename);

		const FString AssetExtension = FPaths::GetExtension(AssetFilename, true);
		const FString Base = AssetExtension.IsEmpty() ? AssetFilename : AssetFilename.LeftChop(AssetExtension.Len());
		Files.Add(Base + TEXT(".uexp"));
		Files.Add(Base + TEXT(".ubulk"));
		Files.Add(Base + TEXT(".uptnl"));
		return Files;
	}
}

void FCrimeForgeImportTransaction::BeginBatch() {
	if (GBatchDepth++ > 0) return;
	GBatchDirectory = MakeBatchDirectory();
	bBatchPrepared = false;
}

void FCrimeForgeImportTransaction::EndBatch() {
	if (GBatchDepth <= 0) return;
	--GBatchDepth;
	if (GBatchDepth == 0) bBatchPrepared = false;
}

FString FCrimeForgeImportTransaction::GetLastBackupDirectory() { return MakeBatchDirectory(); }

FCrimeForgeImportTransaction::FCrimeForgeImportTransaction(const FString& InObjectPath, const bool bEnabled)
	: ObjectPath(InObjectPath), bRequested(bEnabled)
{
	if (!bRequested) { bReady = true; return; }
	if (ObjectPath.IsEmpty()) { FailureReason = TEXT("Replacement path is empty"); return; }

	PackageName = FPackageName::ObjectPathToPackageName(ObjectPath);
	if (PackageName.IsEmpty()) { FailureReason = TEXT("Could not resolve the existing package name"); return; }

	/* The file backup must represent what the user currently considers their asset. If the package
	 * already has unsaved editor changes, copying the old file would create a rollback point that
	 * silently loses those changes. Require the user to save first instead of pretending that backup
	 * is transactional. */
	if (UPackage* ExistingPackage = FindPackage(nullptr, *PackageName)) {
		if (ExistingPackage->IsDirty()) {
			FailureReason = FString::Printf(TEXT("Existing package %s has unsaved changes. Save it before replacing so CrimeForge can create a faithful backup."), *PackageName);
			return;
		}
	}

	if (GBatchDepth == 0) {
		BeginBatch();
		bOwnsImplicitBatch = true;
	}
	PrepareBatchDirectory();

	OriginalFiles = FindPackageFiles(PackageName);
	if (OriginalFiles.Num() == 0) {
		FailureReason = FString::Printf(TEXT("Existing package %s has no on-disk package file to back up"), *PackageName);
		return;
	}

	for (const FString& SourceFile : OriginalFiles) {
		const FString BackupFile = BackupPathFor(PackageName, SourceFile);
		IFileManager::Get().MakeDirectory(*FPaths::GetPath(BackupFile), true);
		if (IFileManager::Get().Copy(*BackupFile, *SourceFile, true, true) != COPY_OK) {
			FailureReason = FString::Printf(TEXT("Could not back up %s"), *SourceFile);
			for (const FString& CreatedBackup : BackupFiles) IFileManager::Get().Delete(*CreatedBackup, false, true);
			BackupFiles.Reset();
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("CrimeForge transaction: %s; replacement aborted"), *FailureReason);
			return;
		}
		BackupFiles.Add(BackupFile);
	}

	bReady = BackupFiles.Num() == OriginalFiles.Num();
	if (bReady) {
		UE_LOG(LogCrimeForgeJsonImporter, Verbose, TEXT("CrimeForge transaction: backed up %d package file(s) for %s"), BackupFiles.Num(), *PackageName);
	}
}

FCrimeForgeImportTransaction::~FCrimeForgeImportTransaction() {
	if (bRequested && bReady && !bCommitted && !bRolledBack) Rollback(TEXT("replacement scope ended without commit"));
	if (bOwnsImplicitBatch) EndBatch();
}

void FCrimeForgeImportTransaction::Commit() { bCommitted = true; }

void FCrimeForgeImportTransaction::Rollback(const FString& Reason) {
	if (!bRequested || !bReady || bRolledBack) return;
	bRolledBack = true;
	bool bRestored = true;

	/* Remove sidecars the failed import may have introduced that did not exist in the snapshot.
	 * Leaving a new .uexp/.ubulk beside a restored .uasset can make the package unreadable even
	 * though all backed-up files were copied back successfully. */
	for (const FString& Candidate : PotentialPackageFiles(PackageName)) {
		if (!OriginalFiles.Contains(Candidate) && IFileManager::Get().FileExists(*Candidate)) {
			if (!IFileManager::Get().Delete(*Candidate, false, true)) {
				bRestored = false;
				UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("CrimeForge transaction: FAILED to remove replacement sidecar %s after %s"), *Candidate, *Reason);
			}
		}
	}

	for (int32 Index = 0; Index < OriginalFiles.Num(); ++Index) {
		if (!BackupFiles.IsValidIndex(Index) || IFileManager::Get().Copy(*OriginalFiles[Index], *BackupFiles[Index], true, true) != COPY_OK) {
			bRestored = false;
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("CrimeForge transaction: FAILED to restore %s after %s"), *OriginalFiles[Index], *Reason);
		}
	}
	if (bRestored) {
		ReloadPackageByName(PackageName);
		UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("CrimeForge transaction: restored %s after %s"), *PackageName, *Reason);
	}
}

bool FCrimeForgeImportTransaction::RestoreLastBatch(FString& OutMessage) {
	const FString Root = MakeBatchDirectory();
	TArray<FString> Backups;
	IFileManager::Get().FindFilesRecursive(Backups, *Root, TEXT("*.*"), true, false, false);
	if (Backups.Num() == 0) {
		OutMessage = TEXT("No last-import backup exists.");
		return false;
	}

	TSet<FString> PackagesToReload;
	TMap<FString, TSet<FString>> BackedExtensionsByPackage;

	/* First identify the complete original file set for every package. That lets Restore Last Import
	 * remove sidecars introduced by the replacement before copying the snapshot back. */
	for (const FString& Backup : Backups) {
		FString Relative = Backup;
		FString NormalizedRoot = Root;
		FPaths::NormalizeDirectoryName(NormalizedRoot);
		FPaths::NormalizeFilename(Relative);
		Relative.RemoveFromStart(NormalizedRoot + TEXT("/"), ESearchCase::IgnoreCase);
		const FString Extension = FPaths::GetExtension(Relative, true);
		const FString PackagePart = Extension.IsEmpty() ? Relative : Relative.LeftChop(Extension.Len());
		const FString LongPackageName = TEXT("/") + PackagePart;
		if (FPackageName::IsValidLongPackageName(LongPackageName)) {
			BackedExtensionsByPackage.FindOrAdd(LongPackageName).Add(Extension);
		}
	}

	/* Do not let an explicit restore silently discard edits made after the import. Ask the user to
	 * save/close those edits first, just like replacement transactions require a clean snapshot. */
	for (const TPair<FString, TSet<FString>>& Pair : BackedExtensionsByPackage) {
		if (UPackage* LoadedPackage = FindPackage(nullptr, *Pair.Key)) {
			if (LoadedPackage->IsDirty()) {
				OutMessage = FString::Printf(TEXT("Cannot restore %s because it has unsaved changes. Save or revert that package first."), *Pair.Key);
				return false;
			}
		}
	}

	for (const TPair<FString, TSet<FString>>& Pair : BackedExtensionsByPackage) {
		for (const FString& Candidate : PotentialPackageFiles(Pair.Key)) {
			const FString CandidateExtension = FPaths::GetExtension(Candidate, true);
			if (!Pair.Value.Contains(CandidateExtension) && IFileManager::Get().FileExists(*Candidate)) {
				IFileManager::Get().Delete(*Candidate, false, true);
			}
		}
	}

	int32 RestoredFiles = 0;
	for (const FString& Backup : Backups) {
		FString Relative = Backup;
		FString NormalizedRoot = Root;
		FPaths::NormalizeDirectoryName(NormalizedRoot);
		FPaths::NormalizeFilename(Relative);
		Relative.RemoveFromStart(NormalizedRoot + TEXT("/"), ESearchCase::IgnoreCase);
		const FString Extension = FPaths::GetExtension(Relative, true);
		const FString PackagePart = Extension.IsEmpty() ? Relative : Relative.LeftChop(Extension.Len());
		const FString LongPackageName = TEXT("/") + PackagePart;
		if (!FPackageName::IsValidLongPackageName(LongPackageName)) continue;
		const FString Destination = FPackageName::LongPackageNameToFilename(LongPackageName, Extension);
		IFileManager::Get().MakeDirectory(*FPaths::GetPath(Destination), true);
		if (IFileManager::Get().Copy(*Destination, *Backup, true, true) == COPY_OK) {
			++RestoredFiles;
			PackagesToReload.Add(LongPackageName);
		}
	}

	if (RestoredFiles == 0) {
		OutMessage = TEXT("The backup directory existed, but no package files could be restored.");
		return false;
	}
	for (const FString& PackageName : PackagesToReload) ReloadPackageByName(PackageName);
	OutMessage = FString::Printf(TEXT("Restored %d package file(s) from the last import backup."), RestoredFiles);
	return true;
}
