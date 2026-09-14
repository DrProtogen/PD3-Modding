

#include "Importers/Constructor/ImportConflict.h"

#include "Engine/Package.h"
#include "Engine/Log.h"
#include "Interfaces/IMainFrameModule.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"

namespace {
	enum class EReplaceChoice : uint8 {
		ReplaceThis,
		ReplaceAll,
		Cancel
	};

	struct FConflictState {
		int32 BatchDepth = 0;
		bool bReplaceAll = false;
		bool bCancelled = false;

		/* A path can be encountered repeatedly through dependency cycles. Once the user has approved
		 * it, or once a new asset has started being built there, it belongs to this import and must not
		 * prompt again merely because the object now exists in memory. */
		TSet<FString> EncounteredPaths;

		void Reset() {
			bReplaceAll = false;
			bCancelled = false;
			EncounteredPaths.Reset();
		}
	};

	FConflictState GConflictState;

	EReplaceChoice PromptForReplacement(const FString& ObjectPath, const FString& Type, const UObject* ExistingAsset) {
		EReplaceChoice Choice = EReplaceChoice::Cancel;

		const FString ExistingType = ExistingAsset && ExistingAsset->GetClass()
			? ExistingAsset->GetClass()->GetName()
			: FString(TEXT("asset"));

		const FString Message = FString::Printf(
			TEXT("CrimeForge is about to import:\n\n%s\n\n")
			TEXT("Incoming type: %s\nExisting type: %s\n\n")
			TEXT("An asset already occupies this path. Replacing it will rebuild/overwrite the asset with imported PAYDAY 3 data.\n\n")
			TEXT("This can overwrite manual edits and may break assets or references that depend on the current version.\n\n")
			TEXT("Replace This Asset affects only this asset. Replace All applies to every remaining conflict in this import."),
			*ObjectPath,
			*Type,
			*ExistingType
		);

		const TSharedRef<SWindow> Window = SNew(SWindow)
			.Title(FText::FromString(TEXT("Replace Existing Asset?")))
			.ClientSize(FVector2D(620.0f, 260.0f))
			.SupportsMinimize(false)
			.SupportsMaximize(false);

		Window->SetContent(
			SNew(SBorder)
			.Padding(14.0f)
			[
				SNew(SVerticalBox)

				+ SVerticalBox::Slot()
				.FillHeight(1.0f)
				[
					SNew(STextBlock)
					.Text(FText::FromString(Message))
					.AutoWrapText(true)
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				.HAlign(HAlign_Right)
				.Padding(FMargin(0.0f, 14.0f, 0.0f, 0.0f))
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 0.0f))
					[
						SNew(SButton)
						.Text(FText::FromString(TEXT("Replace This Asset")))
						.ToolTipText(FText::FromString(TEXT("Replace this asset, then ask again if another existing asset is encountered.")))
						.OnClicked_Lambda([&Choice, Window]() {
							Choice = EReplaceChoice::ReplaceThis;
							Window->RequestDestroyWindow();
							return FReply::Handled();
						})
					]

					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 0.0f))
					[
						SNew(SButton)
						.Text(FText::FromString(TEXT("Replace All")))
						.ToolTipText(FText::FromString(TEXT("Replace this asset and every remaining existing asset encountered by this import without asking again.")))
						.OnClicked_Lambda([&Choice, Window]() {
							Choice = EReplaceChoice::ReplaceAll;
							Window->RequestDestroyWindow();
							return FReply::Handled();
						})
					]

					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						SNew(SButton)
						.Text(FText::FromString(TEXT("Cancel Import")))
						.ToolTipText(FText::FromString(TEXT("Stop the current import operation.")))
						.OnClicked_Lambda([Window]() {
							Window->RequestDestroyWindow();
							return FReply::Handled();
						})
					]
				]
			]
		);

		const TSharedPtr<SWindow> ParentWindow = IMainFrameModule::Get().GetParentWindow();
		FSlateApplication::Get().AddModalWindow(Window, ParentWindow);

		return Choice;
	}
}

void FImportConflict::BeginBatch() {
	if (GConflictState.BatchDepth == 0) {
		GConflictState.Reset();
	}

	++GConflictState.BatchDepth;
}

void FImportConflict::EndBatch() {
	if (GConflictState.BatchDepth <= 0) {
		return;
	}

	--GConflictState.BatchDepth;
	if (GConflictState.BatchDepth == 0) {
		GConflictState.Reset();
	}
}

bool FImportConflict::IsCancelled() {
	return GConflictState.bCancelled;
}

void FImportConflict::CancelBatch() {
	GConflictState.bCancelled = true;
}

bool FImportConflict::ShouldImportAsset(const FString& ObjectPath, const FString& Type) {
	if (GConflictState.bCancelled) {
		return false;
	}

	if (ObjectPath.IsEmpty()) {
		return true;
	}

	/* If nobody opened an explicit batch, this is still a safe one-off conflict check. Do not let
	 * Replace All leak into some unrelated import later in the editor session. */
	const bool bImplicitSingleAsset = GConflictState.BatchDepth == 0;
	if (bImplicitSingleAsset) {
		GConflictState.Reset();
	}

	if (GConflictState.EncounteredPaths.Contains(ObjectPath)) {
		return true;
	}
	GConflictState.EncounteredPaths.Add(ObjectPath);

	UObject* ExistingAsset = LoadObjectByPath<UObject>(ObjectPath);
	if (ExistingAsset == nullptr) {
		return true;
	}

	if (GConflictState.bReplaceAll) {
		return true;
	}

	const EReplaceChoice Choice = PromptForReplacement(ObjectPath, Type, ExistingAsset);
	switch (Choice) {
	case EReplaceChoice::ReplaceThis:
		UE_LOG(LogCrimeForgeJsonImporter, Log, TEXT("CrimeForge: replacing existing asset %s"), *ObjectPath);
		return true;

	case EReplaceChoice::ReplaceAll:
		GConflictState.bReplaceAll = true;
		UE_LOG(LogCrimeForgeJsonImporter, Log, TEXT("CrimeForge: replacing %s and all remaining existing assets in this import"), *ObjectPath);
		return true;

	case EReplaceChoice::Cancel:
	default:
		GConflictState.bCancelled = true;
		UE_LOG(LogCrimeForgeJsonImporter, Log, TEXT("CrimeForge: import cancelled at existing asset %s"), *ObjectPath);
		return false;
	}
}
