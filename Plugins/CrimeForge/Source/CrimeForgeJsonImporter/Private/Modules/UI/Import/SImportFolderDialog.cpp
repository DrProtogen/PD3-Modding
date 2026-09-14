

#include "Modules/UI/Import/SImportFolderDialog.h"

#include "Engine/Compatibility.h"

#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Utilities/ContentBrowser.h"

#include "Interfaces/IMainFrameModule.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/CoreStyle.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Views/STableRow.h"

#define LOCTEXT_NAMESPACE "CrimeForgeJsonImporter.ImportFolder"

static TWeakPtr<SWindow> GCrimeForgeImportFolderWindow;
static TWeakPtr<SImportFolderDialog> GCrimeForgeImportFolderDialog;

void SImportFolderDialog::Open(TFunction<void(TArray<FString>)> OnImport) {
	/* Reuse the existing folder importer instead of stacking duplicate windows. */
	if (const TSharedPtr<SWindow> ExistingWindow = GCrimeForgeImportFolderWindow.Pin()) {
		if (const TSharedPtr<SImportFolderDialog> ExistingDialog = GCrimeForgeImportFolderDialog.Pin()) {
			ExistingDialog->ImportCallback = MoveTemp(OnImport);
		}
		ExistingWindow->BringToFront(true);
		return;
	}

	const TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("Title", "Import Game Folder"))
		.ClientSize(FVector2D(720.0f, 480.0f))
		.SupportsMinimize(true)
		.SupportsMaximize(true);

	TSharedPtr<SImportFolderDialog> Dialog;

	Window->SetContent(
		SAssignNew(Dialog, SImportFolderDialog)
		.ParentWindow(Window)
	);

	Dialog->ImportCallback = MoveTemp(OnImport);
	GCrimeForgeImportFolderWindow = Window;
	GCrimeForgeImportFolderDialog = Dialog;

	Window->SetOnWindowClosed(FOnWindowClosed::CreateLambda([](const TSharedRef<SWindow>&) {
		GCrimeForgeImportFolderWindow.Reset();
		GCrimeForgeImportFolderDialog.Reset();
	}));

	/* Non-modal by design. The user can keep this open, navigate the Content Browser, then use
	 * Use Selected or import other game folders without closing and reopening the window. */
	const TSharedPtr<SWindow> MainWindow = IMainFrameModule::Get().GetParentWindow();
	if (MainWindow.IsValid()) {
		FSlateApplication::Get().AddWindowAsNativeChild(Window, MainWindow.ToSharedRef());
	}
	else {
		FSlateApplication::Get().AddWindow(Window);
	}
}

void SImportFolderDialog::Construct(const FArguments& InArgs) {
	ParentWindow = InArgs._ParentWindow;

	ChildSlot
	[
		SNew(SVerticalBox)

		/* Folder ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBorder)
			.BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder"))
			.Padding(FMargin(8.0f, 6.0f))
			[
				SNew(SHorizontalBox)

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(FMargin(0.0f, 0.0f, 6.0f, 0.0f))
				[
					SNew(SButton)
					.Text(LOCTEXT("UseSelected", "Use Selected"))
					.ToolTipText(this, &SImportFolderDialog::GetSelectedFolderTooltip)
					.IsEnabled(this, &SImportFolderDialog::HasSelectedFolder)
					.OnClicked(this, &SImportFolderDialog::OnUseSelectedFolderClicked)
				]

				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				.VAlign(VAlign_Center)
				[
					SAssignNew(FolderBox, SEditableTextBox)
					.HintText(LOCTEXT("FolderHint", "/Game/Folder"))
					.ToolTipText(LOCTEXT("FolderTooltip", "A PAYDAY 3 game-content folder, for example /Game/UI."))
					.OnTextCommitted(this, &SImportFolderDialog::OnFolderCommitted)
				]

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(FMargin(6.0f, 0.0f, 0.0f, 0.0f))
				[
					SNew(SButton)
					.Text(LOCTEXT("ListAssets", "List Assets"))
					.ToolTipText(LOCTEXT("ListAssetsTooltip", "List all PAYDAY 3 assets under this folder using AssetReader."))
					.IsEnabled(this, &SImportFolderDialog::CanListAssets)
					.OnClicked(this, &SImportFolderDialog::OnListAssetsClicked)
				]
			]
		]

		/* What was found ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.FillHeight(1.0f)
		.Padding(FMargin(8.0f, 6.0f))
		[
			SNew(SBorder)
			.BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder"))
			.Padding(FMargin(2.0f))
			[
				SAssignNew(ListView, SListView<TSharedPtr<FString>>)
				.ListItemsSource(&Rows)
				.SelectionMode(ESelectionMode::None)
				.OnGenerateRow(this, &SImportFolderDialog::GenerateRow)
			]
		]

		/* Footer ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FMargin(8.0f, 0.0f, 8.0f, 8.0f))
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.FillWidth(1.0f)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(this, &SImportFolderDialog::GetStatusText)
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(FMargin(6.0f, 0.0f, 0.0f, 0.0f))
			[
				SNew(SButton)
				.Text(this, &SImportFolderDialog::GetImportText)
				.ToolTipText(LOCTEXT("ImportTooltip", "Import the assets currently listed above."))
				.IsEnabled(this, &SImportFolderDialog::CanImport)
				.OnClicked(this, &SImportFolderDialog::OnImportClicked)
			]
		]
	];

	/* Start on the folder the active Content Browser is currently displaying. This is more useful
	 * than requiring the user to explicitly select the folder in the path tree first. */
	FillFromCurrentContentBrowserFolder();
	FSlateApplication::Get().SetKeyboardFocus(FolderBox);
}

/* Actions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void SImportFolderDialog::OnFolderCommitted(const FText& NewText, const ETextCommit::Type CommitType) {
	/* Enter in the box is the same as pressing List Assets. */
	if (CommitType == ETextCommit::OnEnter) {
		ListAssets();
	}
}

FReply SImportFolderDialog::OnListAssetsClicked() {
	ListAssets();
	return FReply::Handled();
}

FReply SImportFolderDialog::OnUseSelectedFolderClicked() {
	const FString SelectedFolder = GetSelectedContentBrowserFolder();

	if (!SelectedFolder.IsEmpty()) {
		FolderBox->SetText(FText::FromString(SelectedFolder));

		/* The folder changed under the listing, so clear stale results until it is listed again. */
		Rows.Reset();
		Paths.Reset();
		bListed = false;
		ListView->RequestListRefresh();
	}

	return FReply::Handled();
}

FReply SImportFolderDialog::OnImportClicked() {
	if (ImportCallback && Paths.Num() > 0) {
		/* Keep the window open after the import. It is a working tool now, not a confirmation
		 * dialog, so another Content Browser folder can be selected and listed immediately. */
		ImportCallback(Paths);
	}

	return FReply::Handled();
}

void SImportFolderDialog::ListAssets() {
	const FString Folder = FolderBox->GetText().ToString().TrimStartAndEnd();

	Rows.Reset();
	Paths.Reset();
	bListed = false;

	if (!Folder.IsEmpty()) {
		{
			const FBlockingRequestScope BlockingScope(FText::Format(
				LOCTEXT("ListingFolder", "Listing {0} with AssetReader"),
				FText::FromString(Folder)
			));

			/* AssetBackend::Folder is the legacy compatibility facade, but the request is serviced entirely
			 * in-process by the embedded AssetReader. */
			Paths = AssetBackend::Folder::GetPathsBlocking(Folder);
		}

		for (const FString& Path : Paths) {
			Rows.Add(MakeShared<FString>(Path));
		}

		bListed = true;
	}

	ListView->RequestListRefresh();
}

void SImportFolderDialog::FillFromCurrentContentBrowserFolder() {
	const FString CurrentFolder = GetCurrentContentBrowserFolder();
	if (!CurrentFolder.IsEmpty()) {
		FolderBox->SetText(FText::FromString(CurrentFolder));
	}
}

/* State ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
bool SImportFolderDialog::CanListAssets() const {
	return FolderBox.IsValid() && !FolderBox->GetText().ToString().TrimStartAndEnd().IsEmpty();
}

bool SImportFolderDialog::CanImport() const {
	return Paths.Num() > 0;
}

bool SImportFolderDialog::HasSelectedFolder() const {
	return !GetSelectedContentBrowserFolder().IsEmpty();
}

FText SImportFolderDialog::GetSelectedFolderTooltip() const {
	const FString SelectedFolder = GetSelectedContentBrowserFolder();

	if (SelectedFolder.IsEmpty()) {
		return LOCTEXT("UseSelectedNone", "Select a folder in the Content Browser, then use it here without closing this window.");
	}

	return FText::Format(LOCTEXT("UseSelectedFmt", "Use the folder currently selected in the Content Browser ({0})."), FText::FromString(SelectedFolder));
}

FText SImportFolderDialog::GetStatusText() const {
	if (!bListed) {
		return LOCTEXT("StatusIdle", "List a folder to preview everything AssetReader can import beneath it, including subfolders.");
	}

	if (Paths.Num() == 0) {
		return LOCTEXT("StatusEmpty", "AssetReader found no assets under that folder.");
	}

	return FText::Format(LOCTEXT("StatusFoundFmt", "{0} asset(s) found"), FText::AsNumber(Paths.Num()));
}

FText SImportFolderDialog::GetImportText() const {
	if (Paths.Num() == 0) {
		return LOCTEXT("Import", "Import");
	}

	return FText::Format(LOCTEXT("ImportCountFmt", "Import {0}"), FText::AsNumber(Paths.Num()));
}

TSharedRef<ITableRow> SImportFolderDialog::GenerateRow(TSharedPtr<FString> Path, const TSharedRef<STableViewBase>& OwnerTable) const {
	return SNew(STableRow<TSharedPtr<FString>>, OwnerTable)
		[
			SNew(SBox)
			.Padding(FMargin(8.0f, 2.0f))
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(FText::FromString(Path.IsValid() ? *Path : FString()))
			]
		];
}

#undef LOCTEXT_NAMESPACE
