#include "Importers/Diagnostics/ImportDiagnostics.h"

namespace {
	TMap<FString, FCrimeForgeImportResult> GResults;
	TArray<FCrimeForgeUnsupportedRecord> GUnsupported;
	TArray<FString> GContextStack;

	FString NormalizeKey(FString Path) {
		Path.TrimStartAndEndInline();
		const int32 FirstQuote = Path.Find(TEXT("'"));
		const int32 LastQuote = Path.Find(TEXT("'"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
		if (FirstQuote != INDEX_NONE && LastQuote > FirstQuote) Path = Path.Mid(FirstQuote + 1, LastQuote - FirstQuote - 1);
		Path.ReplaceInline(TEXT("\\"), TEXT("/"));
		int32 Dot = INDEX_NONE;
		if (Path.FindChar(TEXT('.'), Dot)) Path.LeftInline(Dot);
		return Path.ToLower();
	}

	FCrimeForgeImportResult& GetOrAdd(const FString& Path) {
		const FString Key = NormalizeKey(Path);
		FCrimeForgeImportResult& Result = GResults.FindOrAdd(Key);
		if (Result.AssetPath.IsEmpty()) Result.AssetPath = Path;
		return Result;
	}
}

void FCrimeForgeImportDiagnostics::ResetRun() {
	GResults.Reset();
	GUnsupported.Reset();
	GContextStack.Reset();
}

void FCrimeForgeImportDiagnostics::BeginAsset(const FString& AssetPath, const FString& Type) {
	FCrimeForgeImportResult& Result = GetOrAdd(AssetPath);
	Result.Status = ECrimeForgeImportStatus::Importing;
	Result.Message.Reset();
	if (!Type.IsEmpty()) Result.Type = Type;
}

void FCrimeForgeImportDiagnostics::FinishAsset(const FString& AssetPath, const ECrimeForgeImportStatus Status, const FString& Message) {
	FCrimeForgeImportResult& Result = GetOrAdd(AssetPath);
	Result.Status = Status;
	Result.Message = Message;
	Result.UnsupportedCount = GetUnsupportedCount(AssetPath);
	if (Result.UnsupportedCount > 0 && Result.Status == ECrimeForgeImportStatus::Imported) {
		Result.Status = ECrimeForgeImportStatus::ImportedWithWarnings;
	}
}

void FCrimeForgeImportDiagnostics::SetType(const FString& AssetPath, const FString& Type) {
	GetOrAdd(AssetPath).Type = Type;
}

void FCrimeForgeImportDiagnostics::SetDiff(const FString& AssetPath, const FString& DiffSummary) {
	GetOrAdd(AssetPath).DiffSummary = DiffSummary;
}

void FCrimeForgeImportDiagnostics::SetDependencyCount(const FString& AssetPath, const int32 Count) {
	GetOrAdd(AssetPath).DependencyCount = Count;
}

void FCrimeForgeImportDiagnostics::RecordPhase(const FString& Phase, const FString& Detail, const FString& ExplicitAssetPath) {
	const FString AssetPath = ExplicitAssetPath.IsEmpty() ? CurrentContext() : ExplicitAssetPath;
	if (AssetPath.IsEmpty() || Phase.IsEmpty()) return;
	FCrimeForgeImportResult& Result = GetOrAdd(AssetPath);
	const FString Line = Detail.IsEmpty() ? Phase : FString::Printf(TEXT("%s: %s"), *Phase, *Detail);
	Result.ReconstructionPhases.Add(Line);
}

void FCrimeForgeImportDiagnostics::RecordUnsupported(const FString& Category, const FString& Detail, const FString& RawData, const FString& ExplicitAssetPath) {
	FCrimeForgeUnsupportedRecord Record;
	Record.AssetPath = ExplicitAssetPath.IsEmpty() ? CurrentContext() : ExplicitAssetPath;
	Record.Category = Category;
	Record.Detail = Detail;
	Record.RawData = RawData.Left(4096);
	const FString RecordPath = Record.AssetPath;
	GUnsupported.Add(MoveTemp(Record));

	if (!RecordPath.IsEmpty()) {
		GetOrAdd(RecordPath).UnsupportedCount = GetUnsupportedCount(RecordPath);
	}
}

bool FCrimeForgeImportDiagnostics::GetResult(const FString& AssetPath, FCrimeForgeImportResult& OutResult) {
	if (const FCrimeForgeImportResult* Found = GResults.Find(NormalizeKey(AssetPath))) {
		OutResult = *Found;
		return true;
	}
	return false;
}

TArray<FCrimeForgeImportResult> FCrimeForgeImportDiagnostics::GetResults() {
	TArray<FCrimeForgeImportResult> Results;
	GResults.GenerateValueArray(Results);
	return Results;
}

TArray<FCrimeForgeUnsupportedRecord> FCrimeForgeImportDiagnostics::GetUnsupported(const FString& AssetPath) {
	if (AssetPath.IsEmpty()) return GUnsupported;
	const FString Key = NormalizeKey(AssetPath);
	TArray<FCrimeForgeUnsupportedRecord> Result;
	for (const FCrimeForgeUnsupportedRecord& Record : GUnsupported) {
		if (NormalizeKey(Record.AssetPath) == Key) Result.Add(Record);
	}
	return Result;
}

int32 FCrimeForgeImportDiagnostics::GetUnsupportedCount(const FString& AssetPath) {
	const FString Key = NormalizeKey(AssetPath);
	int32 Count = 0;
	for (const FCrimeForgeUnsupportedRecord& Record : GUnsupported) {
		if (NormalizeKey(Record.AssetPath) == Key) ++Count;
	}
	return Count;
}

FString FCrimeForgeImportDiagnostics::StatusToString(const ECrimeForgeImportStatus Status) {
	switch (Status) {
	case ECrimeForgeImportStatus::Queued: return TEXT("Queued");
	case ECrimeForgeImportStatus::Importing: return TEXT("Importing");
	case ECrimeForgeImportStatus::Imported: return TEXT("Imported");
	case ECrimeForgeImportStatus::ImportedWithWarnings: return TEXT("Imported with warnings");
	case ECrimeForgeImportStatus::UpToDate: return TEXT("Up to date");
	case ECrimeForgeImportStatus::Skipped: return TEXT("Skipped");
	case ECrimeForgeImportStatus::Failed: return TEXT("Failed");
	case ECrimeForgeImportStatus::Cancelled: return TEXT("Cancelled");
	default: return TEXT("Unknown");
	}
}

void FCrimeForgeImportDiagnostics::PushContext(const FString& AssetPath) { GContextStack.Add(AssetPath); }
void FCrimeForgeImportDiagnostics::PopContext() { if (GContextStack.Num() > 0) GContextStack.Pop(); }
FString FCrimeForgeImportDiagnostics::CurrentContext() { return GContextStack.Num() > 0 ? GContextStack.Last() : FString(); }
