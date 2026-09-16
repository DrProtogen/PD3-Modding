#pragma once

#include "CoreMinimal.h"

/* File-backed replacement transaction.
 *
 * Every existing package file that belongs to the asset (.uasset/.umap and any sidecars such as
 * .uexp/.ubulk/.uptnl) is copied before mutation. A replacement is allowed to proceed only when
 * the backup succeeds. A failed import restores all copied files and reloads the package.
 * Successful backups are retained under Saved/CrimeForge/ImportBackups/LastImport so the user can
 * explicitly restore the previous batch from the importer UI. */
class CRIMEFORGEJSONIMPORTER_API FCrimeForgeImportTransaction {
public:
	static void BeginBatch();
	static void EndBatch();
	static FString GetLastBackupDirectory();
	static bool RestoreLastBatch(FString& OutMessage);

	explicit FCrimeForgeImportTransaction(const FString& InObjectPath, bool bEnabled);
	~FCrimeForgeImportTransaction();

	bool IsRequested() const { return bRequested; }
	bool IsReady() const { return !bRequested || bReady; }
	const FString& GetFailureReason() const { return FailureReason; }
	void Commit();
	void Rollback(const FString& Reason);

private:
	FString ObjectPath;
	FString PackageName;
	TArray<FString> OriginalFiles;
	TArray<FString> BackupFiles;
	FString FailureReason;
	bool bRequested = false;
	bool bReady = false;
	bool bCommitted = false;
	bool bRolledBack = false;
	bool bOwnsImplicitBatch = false;
};
