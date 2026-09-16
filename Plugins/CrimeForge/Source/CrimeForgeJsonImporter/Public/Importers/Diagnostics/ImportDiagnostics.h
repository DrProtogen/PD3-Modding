#pragma once

#include "CoreMinimal.h"

enum class ECrimeForgeImportStatus : uint8 {
	Queued,
	Importing,
	Imported,
	ImportedWithWarnings,
	UpToDate,
	Skipped,
	Failed,
	Cancelled
};

struct FCrimeForgeUnsupportedRecord {
	FString AssetPath;
	FString Category;
	FString Detail;
	FString RawData;
};

struct FCrimeForgeImportResult {
	FString AssetPath;
	FString Type;
	ECrimeForgeImportStatus Status = ECrimeForgeImportStatus::Queued;
	FString Message;
	FString DiffSummary;
	TArray<FString> ReconstructionPhases;
	int32 UnsupportedCount = 0;
	int32 DependencyCount = 0;
};

/* Shared run diagnostics for the dockable importer and nested reconstruction code. It deliberately
 * stores facts rather than UI objects so serializers/graph reconstruction can report unsupported
 * data without depending on Slate. */
class CRIMEFORGEJSONIMPORTER_API FCrimeForgeImportDiagnostics {
public:
	static void ResetRun();
	static void BeginAsset(const FString& AssetPath, const FString& Type = FString());
	static void FinishAsset(const FString& AssetPath, ECrimeForgeImportStatus Status, const FString& Message = FString());
	static void SetType(const FString& AssetPath, const FString& Type);
	static void SetDiff(const FString& AssetPath, const FString& DiffSummary);
	static void SetDependencyCount(const FString& AssetPath, int32 Count);
	static void RecordPhase(const FString& Phase, const FString& Detail = FString(), const FString& ExplicitAssetPath = FString());
	static void RecordUnsupported(const FString& Category, const FString& Detail, const FString& RawData = FString(), const FString& ExplicitAssetPath = FString());

	static bool GetResult(const FString& AssetPath, FCrimeForgeImportResult& OutResult);
	static TArray<FCrimeForgeImportResult> GetResults();
	static TArray<FCrimeForgeUnsupportedRecord> GetUnsupported(const FString& AssetPath = FString());
	static int32 GetUnsupportedCount(const FString& AssetPath);
	static FString StatusToString(ECrimeForgeImportStatus Status);

	/* Nested imports push their path so warnings naturally attach to the asset currently being rebuilt. */
	static void PushContext(const FString& AssetPath);
	static void PopContext();
	static FString CurrentContext();
};

class CRIMEFORGEJSONIMPORTER_API FScopedCrimeForgeImportDiagnosticContext {
public:
	explicit FScopedCrimeForgeImportDiagnosticContext(const FString& AssetPath) { FCrimeForgeImportDiagnostics::PushContext(AssetPath); }
	~FScopedCrimeForgeImportDiagnosticContext() { FCrimeForgeImportDiagnostics::PopContext(); }
};
