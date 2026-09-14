

#include "Modules/UI/Import/SImportPathsDialog.h"

#include "Engine/Compatibility.h"

#include "Containers/Export.h"
#include "Algo/Sort.h"
#include "Importers/Constructor/ImportJob.h"
#include "Modules/Toolbar/Tools/ImportFolder.h"
#include "Modules/Toolbar/Tools/ImportFromPath.h"
#include "Modules/Toolbar/Tools/ClearImportData.h"
#include "Modules/Toolbar/Tools/FixUpAssetData.h"
#include "Modules/Tools/SelectedAssetsBase.h"
#include "Modules/Tools/ToolRegistry.h"
#include "Settings/SettingsAccess.h"

/* Including the selected-asset tool headers registers their singleton instances. */
#include "Modules/AssetBackend/Tools/AnimationData.h"
#include "Modules/AssetBackend/Tools/ConvexCollision.h"
#include "Modules/AssetBackend/Tools/CurveLinearColorData.h"
#include "Modules/AssetBackend/Tools/FontData.h"
#include "Modules/AssetBackend/Tools/SkeletalMeshData.h"
#include "Modules/AssetBackend/Tools/WidgetAnimations.h"
#include "Utilities/Dialog.h"

#include "Interfaces/IMainFrameModule.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SWrapBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Views/STableRow.h"

#define LOCTEXT_NAMESPACE "CrimeForgeJsonImporter.ImportPaths"

static TWeakPtr<SWindow> GCrimeForgeImporterWindow;

/* Whether one line could be an asset path.
 *
 * Deliberately shallow: only the asset backend can say whether a path leads anywhere, and this runs against
 * whatever happened to be copied last. It is here to tell a path from a sentence, not to validate. */
static bool IsPath(const FString& Line) {
	/* A copied reference arrives as Type'/Game/Path/Asset.Asset' */
	FString Path = StripObjectOuter(Line.TrimStartAndEnd());
	Path.ReplaceInline(TEXT("\\"), TEXT("/"));

	if (Path.IsEmpty()) {
		return false;
	}

	/* Every form of these has a root and something under it */
	int32 Slash;
	if (!Path.FindChar(TEXT('/'), Slash) || Path.Len() < 3) {
		return false;
	}

	/* Prose is what this is mostly guarding against, and prose has spaces in it. Package paths
	 * are allowed them in principle, but nothing that ships in a game uses them. */
	for (const TCHAR Character : Path) {
		if (FChar::IsWhitespace(Character)) {
			return false;
		}

		/* Illegal in a package path either way */
		if (FCString::Strchr(TEXT("?*:\"<>|"), Character) != nullptr) {
			return false;
		}
	}

	return true;
}

/* Whether the whole of Text is paths, one per line.
 *
 * All of it or none: a clipboard holding a path and a line of something else is not a list that
 * was copied to be imported, and queueing the half that parses would be putting words in the
 * user's mouth. */
static bool IsPathList(const FString& Text) {
	TArray<FString> Lines;
	Text.ParseIntoArrayLines(Lines);

	int32 Paths = 0;

	for (const FString& Line : Lines) {
		if (Line.TrimStartAndEnd().IsEmpty()) continue;

		if (!IsPath(Line)) {
			return false;
		}

		Paths++;
	}

	return Paths > 0;
}


static FReply ImportGameFolder() {
	TToolImportFolder Tool;
	Tool.Execute();
	return FReply::Handled();
}

static FReply ImportJsonFolder() {
	TArray<FString> JsonFiles;

	for (const FString& Folder : OpenFolderDialog("Folder of JSON files")) {
		IFileManager::Get().FindFilesRecursive(
			JsonFiles,
			*Folder,
			TEXT("*.json"),
			true,
			true,
			false
		);
	}

	if (JsonFiles.Num() > 0) {
		FImportJob::Enqueue(JsonFiles);
	}

	return FReply::Handled();
}

static FReply ClearSelectedImportData() {
	TToolClearImportData Tool;
	Tool.Execute();
	return FReply::Handled();
}

static FReply FixSelectedAssetData() {
	TToolFixUpAssetData Tool;
	Tool.Execute();
	return FReply::Handled();
}

static FReply OpenCrimeForgeImporterSettings() {
	OpenPluginSettings();
	return FReply::Handled();
}

static TSharedRef<SWrapBox> BuildSelectedAssetToolButtons() {
	TSharedRef<SWrapBox> Wrap = SNew(SWrapBox)
		.UseAllottedSize(true);

	TArray<TSelectedAssetsBase*> Tools;
	for (const TPair<FName, FToolInstanceDelegate>& Registration : GetToolRegistry()) {
		TSelectedAssetsBase* Tool = Registration.Value();
		if (Tool == nullptr || Tool->GetDisplayName().IsEmpty()) continue;
		Tools.AddUnique(Tool);
	}

	Algo::Sort(Tools, [](const TSelectedAssetsBase* A, const TSelectedAssetsBase* B) {
		return A->GetDisplayName().CompareTo(B->GetDisplayName()) < 0;
	});

	for (TSelectedAssetsBase* Tool : Tools) {
		Wrap->AddSlot()
		.Padding(FMargin(0.0f, 0.0f, 6.0f, 6.0f))
		[
			SNew(SButton)
			.Text(Tool->GetDisplayName())
			.ToolTipText(Tool->GetTooltip())
			.IsEnabled_Lambda([Tool]() { return !Tool->IsRunning(); })
			.OnClicked_Lambda([Tool]() {
				Tool->Execute();
				return FReply::Handled();
			})
		];
	}

	if (Tools.Num() == 0) {
		Wrap->AddSlot()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("NoSelectedAssetTools", "No selected-asset tools are registered."))
		];
	}

	return Wrap;
}

void SImportPathsDialog::Open() {
	/* Reuse the existing window instead of creating duplicate importer hubs. */
	if (const TSharedPtr<SWindow> ExistingWindow = GCrimeForgeImporterWindow.Pin()) {
		ExistingWindow->BringToFront(true);
		return;
	}

	const TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("Title", "CrimeForge JSON Importer"))
		.ClientSize(FVector2D(820.0f, 680.0f))
		.SupportsMinimize(true)
		.SupportsMaximize(true);

	TSharedPtr<SImportPathsDialog> Dialog;

	Window->SetContent(
		SAssignNew(Dialog, SImportPathsDialog)
		.ParentWindow(Window)
	);

	GCrimeForgeImporterWindow = Window;
	Window->SetOnWindowClosed(FOnWindowClosed::CreateLambda([](const TSharedRef<SWindow>&) {
		GCrimeForgeImporterWindow.Reset();
	}));

	/* Non-modal by design. Selected-asset tools below query the Content Browser at the moment
	 * they are clicked, so the user must be able to change selection while this stays open. */
	const TSharedPtr<SWindow> MainWindow = IMainFrameModule::Get().GetParentWindow();
	if (MainWindow.IsValid()) {
		FSlateApplication::Get().AddWindowAsNativeChild(Window, MainWindow.ToSharedRef());
	}
	else {
		FSlateApplication::Get().AddWindow(Window);
	}
}

void SImportPathsDialog::Construct(const FArguments& InArgs) {
	ParentWindow = InArgs._ParentWindow;

	ChildSlot
	[
		SNew(SVerticalBox)

		/* Entry ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBorder)
			.BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder"))
			.Padding(FMargin(8.0f, 6.0f))
			[
				SNew(SHorizontalBox)

				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				.VAlign(VAlign_Center)
				[
					SAssignNew(PathBox, SEditableTextBox)
					.HintText(LOCTEXT("PathHint", "/Game/Asset"))
					.ToolTipText(LOCTEXT("PathTooltip", "An asset path, in either form. A copied reference or several paths at once are fine."))
					.OnTextCommitted(this, &SImportPathsDialog::OnPathCommitted)
				]

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(FMargin(6.0f, 0.0f, 0.0f, 0.0f))
				[
					SNew(SButton)
					.Text(LOCTEXT("Add", "Add"))
					.ToolTipText(LOCTEXT("AddTooltip", "Queue this path. Several pasted at once are queued one per line."))
					.IsEnabled(this, &SImportPathsDialog::CanAdd)
					.OnClicked(this, &SImportPathsDialog::OnAddClicked)
				]
			]
		]

		/* Queue ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FMargin(8.0f, 6.0f, 8.0f, 0.0f))
		[
			SNew(STextBlock)
			.Text(this, &SImportPathsDialog::GetStatusText)
		]

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
				.OnGenerateRow(this, &SImportPathsDialog::GenerateRow)
			]
		]


		/* Tools ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(FMargin(8.0f, 0.0f, 8.0f, 8.0f))
		[
			SNew(SBorder)
			.BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder"))
			.Padding(FMargin(8.0f))
			[
				SNew(SVerticalBox)

				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(FMargin(0.0f, 0.0f, 0.0f, 6.0f))
				[
					SNew(STextBlock)
					.Text(LOCTEXT("AssetToolsHeading", "Asset Tools"))
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SWrapBox)
					.UseAllottedSize(true)

					+ SWrapBox::Slot()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 6.0f))
					[
						SNew(SButton)
						.Text(LOCTEXT("ImportGameFolder", "Import Game Folder"))
						.ToolTipText(LOCTEXT("ImportGameFolderTooltip", "Choose a folder from PAYDAY 3 game data and import assets under it."))
						.OnClicked_Static(&ImportGameFolder)
					]

					+ SWrapBox::Slot()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 6.0f))
					[
						SNew(SButton)
						.Text(LOCTEXT("ImportJsonFolder", "Import JSON Folder"))
						.ToolTipText(LOCTEXT("ImportJsonFolderTooltip", "Import FModel/CUE4Parse JSON exports from a local folder."))
						.OnClicked_Static(&ImportJsonFolder)
					]

					+ SWrapBox::Slot()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 6.0f))
					[
						SNew(SButton)
						.Text(LOCTEXT("ClearImportData", "Clear Import Data"))
						.ToolTipText(LOCTEXT("ClearImportDataTooltip", "Clear source import metadata from assets in the selected Content Browser folder."))
						.OnClicked_Static(&ClearSelectedImportData)
					]

					+ SWrapBox::Slot()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 6.0f))
					[
						SNew(SButton)
						.Text(LOCTEXT("FixAssetData", "Fix Up Asset Data"))
						.ToolTipText(LOCTEXT("FixAssetDataTooltip", "Apply CrimeForge's post-import cleanup to supported assets in the selected Content Browser folder."))
						.OnClicked_Static(&FixSelectedAssetData)
					]

					+ SWrapBox::Slot()
					.Padding(FMargin(0.0f, 0.0f, 6.0f, 6.0f))
					[
						SNew(SButton)
						.Text(LOCTEXT("Settings", "Settings"))
						.ToolTipText(LOCTEXT("SettingsTooltip", "Open the unified CrimeForge Project Settings page."))
						.OnClicked_Static(&OpenCrimeForgeImporterSettings)
					]
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(FMargin(0.0f, 4.0f, 0.0f, 6.0f))
				[
					SNew(STextBlock)
					.Text(LOCTEXT("SelectedAssetToolsHeading", "Selected Asset Tools"))
					.ToolTipText(LOCTEXT("SelectedAssetToolsTooltip", "These tools operate on the asset or folder currently selected in the Content Browser."))
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					BuildSelectedAssetToolButtons()
				]
			]
		]

		/* Footer ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Right)
		.Padding(FMargin(8.0f, 0.0f, 8.0f, 8.0f))
		[
			SNew(SButton)
			.Text(this, &SImportPathsDialog::GetImportText)
			.IsEnabled(this, &SImportPathsDialog::CanImport)
			.OnClicked(this, &SImportPathsDialog::OnImportClicked)
		]
	];

	/* The path is usually already on the clipboard, straight out of the asset it was copied from.
	 * Whatever else was copied since is not, so nothing goes in unless all of it is paths. */
	const FString Clipboard = GetClipboard();

	if (IsPathList(Clipboard)) {
		AddPaths(Clipboard);
	}

	FSlateApplication::Get().SetKeyboardFocus(PathBox);
}

/* Actions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void SImportPathsDialog::OnPathCommitted(const FText& NewText, const ETextCommit::Type CommitType) {
	/* Enter queues what was typed, so paths can be pasted one after another without the mouse */
	if (CommitType == ETextCommit::OnEnter) {
		AddFromBox();
	}
}

FReply SImportPathsDialog::OnAddClicked() {
	AddFromBox();

	return FReply::Handled();
}

FReply SImportPathsDialog::OnImportClicked() {
	/* Include anything still typed in the entry field, then import without closing the hub. */
	AddFromBox();

	TArray<FString> Paths;
	Paths.Reserve(Rows.Num());
	for (const TSharedPtr<FString>& Row : Rows) {
		if (Row.IsValid()) {
			Paths.Add(*Row);
		}
	}

	TToolImportFromPath::ImportPaths(Paths);
	return FReply::Handled();
}

void SImportPathsDialog::AddFromBox() {
	AddPaths(PathBox->GetText().ToString());

	PathBox->SetText(FText::GetEmpty());

	FSlateApplication::Get().SetKeyboardFocus(PathBox);
}

void SImportPathsDialog::AddPaths(const FString& Text) {
	TArray<FString> Lines;
	Text.ParseIntoArrayLines(Lines);

	for (const FString& Line : Lines) {
		const FString Path = Line.TrimStartAndEnd();
		if (Path.IsEmpty()) continue;

		/* Importing the same path twice is just a wasted request */
		const bool Queued = Rows.ContainsByPredicate([&Path](const TSharedPtr<FString>& Row) {
			return Row.IsValid() && Row->Equals(Path, ESearchCase::IgnoreCase);
		});

		if (Queued) continue;

		Rows.Add(MakeShared<FString>(Path));
	}

	if (ListView.IsValid()) {
		ListView->RequestListRefresh();
	}
}

FReply SImportPathsDialog::RemovePath(TSharedPtr<FString> Path) {
	Rows.Remove(Path);

	if (ListView.IsValid()) {
		ListView->RequestListRefresh();
	}

	return FReply::Handled();
}

/* State ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
bool SImportPathsDialog::CanAdd() const {
	return PathBox.IsValid() && !PathBox->GetText().ToString().TrimStartAndEnd().IsEmpty();
}

bool SImportPathsDialog::CanImport() const {
	return Rows.Num() > 0;
}

FText SImportPathsDialog::GetStatusText() const {
	if (Rows.Num() == 0) {
		return LOCTEXT("StatusEmpty", "Nothing queued. Paths can be added one at a time, or pasted several at once.");
	}

	return FText::Format(LOCTEXT("StatusQueuedFmt", "{0} queued"), FText::AsNumber(Rows.Num()));
}

FText SImportPathsDialog::GetImportText() const {
	if (Rows.Num() == 0) {
		return LOCTEXT("Import", "Import");
	}

	return FText::Format(LOCTEXT("ImportCountFmt", "Import {0}"), FText::AsNumber(Rows.Num()));
}

TSharedRef<ITableRow> SImportPathsDialog::GenerateRow(TSharedPtr<FString> Path, const TSharedRef<STableViewBase>& OwnerTable) {
	return SNew(STableRow<TSharedPtr<FString>>, OwnerTable)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.FillWidth(1.0f)
			.VAlign(VAlign_Center)
			.Padding(FMargin(8.0f, 2.0f))
			[
				SNew(STextBlock)
				.Text(FText::FromString(Path.IsValid() ? *Path : FString()))
			]

			/* The only way back out of the queue, so it sits on the entry it removes */
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(FMargin(4.0f, 2.0f, 4.0f, 2.0f))
			[
				SNew(SButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.ContentPadding(FMargin(2.0f))
				.ToolTipText(LOCTEXT("RemoveTooltip", "Take this path back out of the queue"))
				.OnClicked(this, &SImportPathsDialog::RemovePath, Path)
				[
					SNew(SImage)
					.Image(FAppStyle::Get().GetBrush("Icons.X"))
					.ColorAndOpacity(FSlateColor::UseForeground())
				]
			]
		];
}

#undef LOCTEXT_NAMESPACE
