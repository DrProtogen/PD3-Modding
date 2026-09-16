#include "Importers/Constructor/ImportConflict.h"

#include "Engine/Log.h"
#include "Framework/Application/SlateApplication.h"
#include "Importers/Diff/ImportDiff.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"
#include "Importers/Transaction/ImportTransaction.h"
#include "Interfaces/IMainFrameModule.h"
#include "Misc/PackageName.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/Text/STextBlock.h"

namespace {
	enum class EReplaceChoice : uint8 { ReplaceThis, ReplaceAll, SkipThis, Cancel };

	struct FConflictState {
		int32 BatchDepth = 0;
		bool bReplaceAll = false;
		bool bCancelled = false;
		ECrimeForgeImportMode Mode = ECrimeForgeImportMode::Update;
		TSet<FString> EncounteredPaths;
		TSet<FString> SkippedPaths;
		TSet<FString> UpToDatePaths;
		TSet<FString> ReplacementPaths;

		void Reset(const ECrimeForgeImportMode InMode) {
			bReplaceAll = false;
			bCancelled = false;
			Mode = InMode;
			EncounteredPaths.Reset();
			SkippedPaths.Reset();
			UpToDatePaths.Reset();
			ReplacementPaths.Reset();
		}
	};

	FConflictState GConflictState;

	FString ModeDescription(const ECrimeForgeImportMode Mode) {
		switch (Mode) {
		case ECrimeForgeImportMode::Reference: return TEXT("Reference mode uses the existing project asset and never rebuilds it.");
		case ECrimeForgeImportMode::ForceRebuild: return TEXT("Force Rebuild mode ignores source fingerprints and rebuilds approved existing assets.");
		default: return TEXT("Update mode skips assets whose source fingerprint already matches and asks before replacing changed/unknown assets.");
		}
	}

	EReplaceChoice PromptForReplacement(const FString& ObjectPath, const FString& Type, const UObject* ExistingAsset, const FString& DiffSummary) {
		EReplaceChoice Choice = EReplaceChoice::Cancel;
		const FString ExistingType = ExistingAsset && ExistingAsset->GetClass() ? ExistingAsset->GetClass()->GetName() : FString(TEXT("asset"));
		const FString Message = FString::Printf(
			TEXT("CrimeForge is about to import:\n\n%s\n\nIncoming type: %s\nExisting type: %s\n\nChanges detected:\n%s\n\n")
			TEXT("%s\n\nBefore replacement CrimeForge saves the current package under Saved/CrimeForge/ImportBackups/LastImport. ")
			TEXT("If reconstruction fails, the original package is restored automatically."),
			*ObjectPath, *Type, *ExistingType,
			DiffSummary.IsEmpty() ? TEXT("The source differs from the existing/last imported version.") : *DiffSummary,
			*ModeDescription(GConflictState.Mode));

		const TSharedRef<SWindow> Window = SNew(SWindow)
			.Title(FText::FromString(TEXT("Replace Existing Asset?")))
			.ClientSize(FVector2D(720.0f, 330.0f))
			.SupportsMinimize(false).SupportsMaximize(false);

		Window->SetContent(
			SNew(SBorder).Padding(14.0f)[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot().FillHeight(1.0f)[SNew(STextBlock).Text(FText::FromString(Message)).AutoWrapText(true)]
				+ SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Right).Padding(FMargin(0,14,0,0))[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(0,0,6,0))[
						SNew(SButton).Text(FText::FromString(TEXT("Replace This Asset"))).OnClicked_Lambda([&Choice,Window](){ Choice=EReplaceChoice::ReplaceThis; Window->RequestDestroyWindow(); return FReply::Handled(); })]
					+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(0,0,6,0))[
						SNew(SButton).Text(FText::FromString(TEXT("Replace All"))).OnClicked_Lambda([&Choice,Window](){ Choice=EReplaceChoice::ReplaceAll; Window->RequestDestroyWindow(); return FReply::Handled(); })]
					+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(0,0,6,0))[
						SNew(SButton).Text(FText::FromString(TEXT("Skip This Asset"))).OnClicked_Lambda([&Choice,Window](){ Choice=EReplaceChoice::SkipThis; Window->RequestDestroyWindow(); return FReply::Handled(); })]
					+ SHorizontalBox::Slot().AutoWidth()[
						SNew(SButton).Text(FText::FromString(TEXT("Cancel Import"))).OnClicked_Lambda([Window](){ Window->RequestDestroyWindow(); return FReply::Handled(); })]
				]
			]);

		FSlateApplication::Get().AddModalWindow(Window, IMainFrameModule::Get().GetParentWindow());
		return Choice;
	}
}

void FImportConflict::BeginBatch(const ECrimeForgeImportMode Mode) {
	if (GConflictState.BatchDepth == 0) {
		GConflictState.Reset(Mode);
		FCrimeForgeImportTransaction::BeginBatch();
	}
	++GConflictState.BatchDepth;
}

void FImportConflict::EndBatch() {
	if (GConflictState.BatchDepth <= 0) return;
	--GConflictState.BatchDepth;
	if (GConflictState.BatchDepth == 0) {
		FCrimeForgeImportTransaction::EndBatch();
		GConflictState.Reset(ECrimeForgeImportMode::Update);
	}
}

bool FImportConflict::IsCancelled() { return GConflictState.bCancelled; }
void FImportConflict::CancelBatch() { GConflictState.bCancelled = true; }
ECrimeForgeImportMode FImportConflict::GetMode() { return GConflictState.Mode; }
bool FImportConflict::IsReplacementApproved(const FString& P) { return GConflictState.ReplacementPaths.Contains(P); }
bool FImportConflict::WasSkipped(const FString& P) { return GConflictState.SkippedPaths.Contains(P); }
bool FImportConflict::WasUpToDate(const FString& P) { return GConflictState.UpToDatePaths.Contains(P); }

bool FImportConflict::ShouldImportAsset(const FString& ObjectPath, const FString& Type, FUObjectExport* IncomingExport, FUObjectExportContainer* Container, const FString& SourcePath) {
	if (GConflictState.bCancelled) return false;
	if (ObjectPath.IsEmpty()) return true;

	const bool bImplicit = GConflictState.BatchDepth == 0;
	if (bImplicit) GConflictState.Reset(ECrimeForgeImportMode::Update);
	if (GConflictState.SkippedPaths.Contains(ObjectPath) || GConflictState.UpToDatePaths.Contains(ObjectPath)) return false;
	if (GConflictState.EncounteredPaths.Contains(ObjectPath)) return true;
	GConflictState.EncounteredPaths.Add(ObjectPath);

	UObject* ExistingAsset = LoadObject<UObject>(nullptr, *ObjectPath);
	if (!ExistingAsset) return true;

	const FString DiagnosticPath = SourcePath.IsEmpty() ? FPackageName::ObjectPathToPackageName(ObjectPath) : SourcePath;

	if (GConflictState.Mode == ECrimeForgeImportMode::Reference) {
		GConflictState.SkippedPaths.Add(ObjectPath);
		FCrimeForgeImportDiagnostics::FinishAsset(DiagnosticPath, ECrimeForgeImportStatus::Skipped, TEXT("Reference mode: using existing project asset"));
		return false;
	}

	const FCrimeForgeImportDiffResult Diff = FCrimeForgeImportDiff::Compare(ObjectPath, Type, IncomingExport, Container);
	FCrimeForgeImportDiagnostics::SetDiff(DiagnosticPath, Diff.Summary);

	if (GConflictState.Mode == ECrimeForgeImportMode::Update && Diff.bSourceHashMatches && !Diff.bModifiedSinceLastImport) {
		GConflictState.UpToDatePaths.Add(ObjectPath);
		FCrimeForgeImportDiagnostics::FinishAsset(DiagnosticPath, ECrimeForgeImportStatus::UpToDate, TEXT("Source fingerprint matches the last CrimeForge import"));
		UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("CrimeForge: %s is already up to date; replacement skipped"), *ObjectPath);
		return false;
	}

	if (GConflictState.bReplaceAll) {
		GConflictState.ReplacementPaths.Add(ObjectPath);
		return true;
	}

	switch (PromptForReplacement(ObjectPath, Type, ExistingAsset, Diff.Summary)) {
	case EReplaceChoice::ReplaceThis:
		GConflictState.ReplacementPaths.Add(ObjectPath);
		UE_LOG(LogCrimeForgeJsonImporter, Log, TEXT("CrimeForge: replacing existing asset %s"), *ObjectPath);
		return true;
	case EReplaceChoice::ReplaceAll:
		GConflictState.bReplaceAll = true;
		GConflictState.ReplacementPaths.Add(ObjectPath);
		UE_LOG(LogCrimeForgeJsonImporter, Log, TEXT("CrimeForge: replacing %s and all remaining existing assets in this import"), *ObjectPath);
		return true;
	case EReplaceChoice::SkipThis:
		GConflictState.SkippedPaths.Add(ObjectPath);
		FCrimeForgeImportDiagnostics::FinishAsset(DiagnosticPath, ECrimeForgeImportStatus::Skipped, TEXT("Existing asset left untouched"));
		return false;
	default:
		GConflictState.bCancelled = true;
		FCrimeForgeImportDiagnostics::FinishAsset(DiagnosticPath, ECrimeForgeImportStatus::Cancelled, TEXT("Import cancelled at replacement prompt"));
		return false;
	}
}
