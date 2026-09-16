#include "Modules/UI/Import/SImportPathsDialog.h"

#include "Algo/Sort.h"
#include "Containers/Export.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/PackageName.h"
#include "Styling/AppStyle.h"
#include "Widgets/Layout/SBox.h"
#include "CrimeForgeSettings.h"
#include "Editor.h"
#include "Engine/Compatibility.h"
#include "Engine/EngineUtilities.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Docking/TabManager.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Importers/Cache/ImportDependencyCache.h"
#include "Importers/Constructor/ImportJob.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"
#include "Importers/Transaction/ImportTransaction.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Modules/AssetBackend/Tools/AnimationData.h"
#include "Modules/AssetBackend/Tools/ConvexCollision.h"
#include "Modules/AssetBackend/Tools/CurveLinearColorData.h"
#include "Modules/AssetBackend/Tools/FontData.h"
#include "Modules/AssetBackend/Tools/SkeletalMeshData.h"
#include "Modules/AssetBackend/Tools/WidgetAnimations.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Modules/Toolbar/Tools/ClearImportData.h"
#include "Modules/Toolbar/Tools/FixUpAssetData.h"
#include "Modules/Toolbar/Tools/ImportFromPath.h"
#include "Modules/Tools/SelectedAssetsBase.h"
#include "Modules/Tools/ToolRegistry.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Settings/Runtime.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "Utilities/ContentBrowser.h"
#include "Utilities/Dialog.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SWrapBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Views/STableRow.h"

#define LOCTEXT_NAMESPACE "CrimeForgeJsonImporter.ImportPaths"

const FName SImportPathsDialog::TabId(TEXT("CrimeForgeJsonImporterImport"));
static TWeakPtr<SImportPathsDialog> GCrimeForgeImportPathsDialog;

namespace {
	bool IsPath(const FString& Line) {
		FString Path = StripObjectOuter(Line.TrimStartAndEnd());
		Path.ReplaceInline(TEXT("\\"), TEXT("/"));
		if (Path.IsEmpty()) return false;
		int32 Slash = INDEX_NONE;
		if (!Path.FindChar(TEXT('/'), Slash) || Path.Len() < 3) return false;
		for (const TCHAR Character : Path) {
			if (FChar::IsWhitespace(Character) || FCString::Strchr(TEXT("?*:\"<>|"), Character) != nullptr) return false;
		}
		return true;
	}

	bool IsPathList(const FString& Text) {
		TArray<FString> Lines;
		Text.ParseIntoArrayLines(Lines);
		int32 Paths = 0;
		for (const FString& Line : Lines) {
			if (Line.TrimStartAndEnd().IsEmpty()) continue;
			if (!IsPath(Line)) return false;
			++Paths;
		}
		return Paths > 0;
	}

	FReply ImportJsonFolder() {
		TArray<FString> JsonFiles;
		for (const FString& Folder : OpenFolderDialog("Folder of JSON files")) {
			IFileManager::Get().FindFilesRecursive(JsonFiles, *Folder, TEXT("*.json"), true, true, false);
		}
		if (JsonFiles.Num() > 0) FImportJob::Enqueue(JsonFiles);
		return FReply::Handled();
	}

	FReply ClearSelectedImportData() { TToolClearImportData Tool; Tool.Execute(); return FReply::Handled(); }
	FReply FixSelectedAssetData() { TToolFixUpAssetData Tool; Tool.Execute(); return FReply::Handled(); }

	TSharedRef<SWrapBox> BuildSelectedAssetToolButtons() {
		TSharedRef<SWrapBox> Wrap = SNew(SWrapBox).UseAllottedSize(true);
		TArray<TSelectedAssetsBase*> Tools;
		for (const TPair<FName, FToolInstanceDelegate>& Registration : GetToolRegistry()) {
			TSelectedAssetsBase* Tool = Registration.Value();
			if (Tool && !Tool->GetDisplayName().IsEmpty()) Tools.AddUnique(Tool);
		}
		Algo::Sort(Tools, [](const TSelectedAssetsBase* A, const TSelectedAssetsBase* B) { return A->GetDisplayName().CompareTo(B->GetDisplayName()) < 0; });
		for (TSelectedAssetsBase* Tool : Tools) {
			Wrap->AddSlot().Padding(FMargin(0,0,6,6))[
				SNew(SButton).Text(Tool->GetDisplayName()).ToolTipText(Tool->GetTooltip())
				.IsEnabled_Lambda([Tool](){ return !Tool->IsRunning(); })
				.OnClicked_Lambda([Tool](){ Tool->Execute(); return FReply::Handled(); })];
		}
		return Wrap;
	}

	FString NormalizePackagePath(FString Path) {
		Path = StripObjectOuter(Path.TrimStartAndEnd());
		Path.ReplaceInline(TEXT("\\"), TEXT("/"));
		int32 Dot = INDEX_NONE;
		if (Path.FindChar(TEXT('.'), Dot)) Path.LeftInline(Dot);
		return Path;
	}

	FString ToCanonicalEditorPackagePath(FString PackagePath) {
		PackagePath = NormalizePackagePath(PackagePath);
		const FString ProjectName = GCrimeForgeJsonImporterRuntime.Profile.ProjectName.IsEmpty() ? TEXT("PAYDAY3") : GCrimeForgeJsonImporterRuntime.Profile.ProjectName;
		const FString ProjectPrefix = ProjectName + TEXT("/Content");
		if (PackagePath.StartsWith(ProjectPrefix, ESearchCase::IgnoreCase)) {
			PackagePath = TEXT("/Game") + PackagePath.Mid(ProjectPrefix.Len());
		}
		else if (PackagePath.StartsWith(TEXT("Engine/Content"), ESearchCase::IgnoreCase)) {
			PackagePath = TEXT("/Engine") + PackagePath.Mid(FCString::Strlen(TEXT("Engine/Content")));
		}
		else if (!PackagePath.StartsWith(TEXT("/"))) {
			PackagePath = TEXT("/") + PackagePath;
		}
		return PackagePath;
	}

	class SImportQueueTableRow final : public SMultiColumnTableRow<TSharedPtr<FCrimeForgeImportQueueEntry>> {
	public:
		SLATE_BEGIN_ARGS(SImportQueueTableRow) {}
			SLATE_ARGUMENT(TSharedPtr<FCrimeForgeImportQueueEntry>, Entry)
			SLATE_EVENT(FSimpleDelegate, OnChanged)
			SLATE_EVENT(FOnClicked, OnRemove)
		SLATE_END_ARGS()

		void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& OwnerTable) {
			Entry = InArgs._Entry;
			OnChanged = InArgs._OnChanged;
			OnRemove = InArgs._OnRemove;
			SMultiColumnTableRow::Construct(FSuperRowType::FArguments().Padding(FMargin(1)), OwnerTable);
		}

		virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnName) override {
			if (ColumnName == TEXT("Include")) {
				return SNew(SCheckBox)
					.IsChecked_Lambda([this](){ return Entry.IsValid() && Entry->bSelected ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState State){ if (Entry) Entry->bSelected = State == ECheckBoxState::Checked; OnChanged.ExecuteIfBound(); });
			}
			if (ColumnName == TEXT("Path")) return SNew(STextBlock).Text_Lambda([this](){ return FText::FromString(Entry ? Entry->Path : FString()); }).ToolTipText_Lambda([this](){ return FText::FromString(Entry ? Entry->Path : FString()); });
			if (ColumnName == TEXT("Type")) return SNew(STextBlock).Text_Lambda([this](){ return FText::FromString(Entry && !Entry->Type.IsEmpty() ? Entry->Type : TEXT("Unknown")); });
			if (ColumnName == TEXT("Group")) return SNew(STextBlock).Text_Lambda([this](){ return FText::FromString(Entry ? Entry->Group : FString()); });
			if (ColumnName == TEXT("Status")) return SNew(STextBlock).Text_Lambda([this](){ return FText::FromString(Entry ? SImportPathsDialog::QueueStatusToString(Entry->Status) : FString()); });
			if (ColumnName == TEXT("Details")) {
				return SNew(STextBlock)
					.Text_Lambda([this](){ return FText::FromString(Entry ? Entry->DetailsText : FString()); })
					.ToolTipText_Lambda([this](){ return FText::FromString(Entry ? Entry->DetailsToolTip : FString()); });
			}
			if (ColumnName == TEXT("Remove")) {
				return SNew(SButton).ButtonStyle(FAppStyle::Get(), "SimpleButton").ContentPadding(FMargin(2)).OnClicked(OnRemove)[
					SNew(SImage).Image(FAppStyle::Get().GetBrush("Icons.X")).ColorAndOpacity(FSlateColor::UseForeground())];
			}
			return SNew(STextBlock);
		}

	private:
		TSharedPtr<FCrimeForgeImportQueueEntry> Entry;
		FSimpleDelegate OnChanged;
		FOnClicked OnRemove;
	};
}

void SImportPathsDialog::RegisterTabSpawner() {
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(TabId, FOnSpawnTab::CreateStatic(&SImportPathsDialog::SpawnTab))
		.SetDisplayName(LOCTEXT("Title", "CrimeForge JSON Importer"))
		.SetTooltipText(LOCTEXT("TabTooltip", "Import PAYDAY 3 assets and use CrimeForge asset tools."))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}
void SImportPathsDialog::UnregisterTabSpawner() { FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabId); }
void SImportPathsDialog::Open() { FGlobalTabmanager::Get()->TryInvokeTab(TabId); }
void SImportPathsDialog::OpenAndAddCurrentGameFolder() { Open(); if (const TSharedPtr<SImportPathsDialog> D = GCrimeForgeImportPathsDialog.Pin()) D->OnImportGameFolderClicked(); }
TSharedRef<SDockTab> SImportPathsDialog::SpawnTab(const FSpawnTabArgs&) {
	const TSharedRef<SImportPathsDialog> Dialog = SNew(SImportPathsDialog);
	GCrimeForgeImportPathsDialog = Dialog;
	return SNew(SDockTab).TabRole(ETabRole::NomadTab)[Dialog];
}

SImportPathsDialog::~SImportPathsDialog() { SaveQueue(); }

void SImportPathsDialog::Construct(const FArguments&) {
	StatusFilterOptions = { MakeShared<FString>(TEXT("All")), MakeShared<FString>(TEXT("Pending")), MakeShared<FString>(TEXT("Imported")), MakeShared<FString>(TEXT("Warnings")), MakeShared<FString>(TEXT("Failed")), MakeShared<FString>(TEXT("Skipped")) };
	SelectedStatusFilter = StatusFilterOptions[0];
	ExistenceFilterOptions = { MakeShared<FString>(TEXT("All Assets")), MakeShared<FString>(TEXT("Missing Only")), MakeShared<FString>(TEXT("Existing Only")) };
	SelectedExistenceFilter = ExistenceFilterOptions[0];
	ImportModeOptions = { MakeShared<FString>(TEXT("Update")), MakeShared<FString>(TEXT("Reference")), MakeShared<FString>(TEXT("Force Rebuild")) };
	SelectedImportMode = ImportModeOptions[0];
	LoadQueue();
	RefreshAllEntryDetails();
	RebuildTypeFilterOptions();

	ChildSlot[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight()[
			SNew(SBorder).BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder")).Padding(FMargin(8,6))[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot().FillWidth(1).VAlign(VAlign_Center)[
					SAssignNew(PathBox, SEditableTextBox).HintText(LOCTEXT("PathHint", "/Game/Asset")).OnTextCommitted(this, &SImportPathsDialog::OnPathCommitted)]
				+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[
					SNew(SButton).Text(LOCTEXT("Add", "Add")).IsEnabled(this, &SImportPathsDialog::CanAdd).OnClicked(this, &SImportPathsDialog::OnAddClicked)]
			]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,6,8,0))[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1)[SAssignNew(SearchBox, SSearchBox).HintText(LOCTEXT("SearchQueue", "Search path, type, group, status or details...")).OnTextChanged(this, &SImportPathsDialog::OnSearchChanged)]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[
				SNew(SComboBox<TSharedPtr<FString>>).OptionsSource(&TypeFilterOptions).InitiallySelectedItem(SelectedTypeFilter)
				.OnGenerateWidget_Lambda([](TSharedPtr<FString> V){ return SNew(STextBlock).Text(FText::FromString(V.IsValid()?*V:FString())); })
				.OnSelectionChanged(this, &SImportPathsDialog::OnTypeFilterChanged)[SNew(STextBlock).Text(this, &SImportPathsDialog::GetTypeFilterText)]]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[
				SNew(SComboBox<TSharedPtr<FString>>).OptionsSource(&StatusFilterOptions).InitiallySelectedItem(SelectedStatusFilter)
				.OnGenerateWidget_Lambda([](TSharedPtr<FString> V){ return SNew(STextBlock).Text(FText::FromString(V.IsValid()?*V:FString())); })
				.OnSelectionChanged(this, &SImportPathsDialog::OnStatusFilterChanged)[SNew(STextBlock).Text(this, &SImportPathsDialog::GetStatusFilterText)]]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[
				SNew(SComboBox<TSharedPtr<FString>>).OptionsSource(&ExistenceFilterOptions).InitiallySelectedItem(SelectedExistenceFilter)
				.OnGenerateWidget_Lambda([](TSharedPtr<FString> V){ return SNew(STextBlock).Text(FText::FromString(V.IsValid()?*V:FString())); })
				.OnSelectionChanged(this, &SImportPathsDialog::OnExistenceFilterChanged)[SNew(STextBlock).Text(this, &SImportPathsDialog::GetExistenceFilterText)]]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[
				SNew(SComboBox<TSharedPtr<FString>>).OptionsSource(&ImportModeOptions).InitiallySelectedItem(SelectedImportMode)
				.OnGenerateWidget_Lambda([](TSharedPtr<FString> V){ return SNew(STextBlock).Text(FText::FromString(V.IsValid()?*V:FString())); })
				.OnSelectionChanged(this, &SImportPathsDialog::OnImportModeChanged)[SNew(STextBlock).Text(this, &SImportPathsDialog::GetImportModeText)]]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,6,8,0))[
			SNew(SBorder).BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder")).Padding(FMargin(8,6))[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(0,0,0,4))[SNew(STextBlock).Text(LOCTEXT("GroupsHeading", "Selection Groups"))]
				+ SVerticalBox::Slot().AutoHeight()[SAssignNew(GroupControlsBox, SVerticalBox)]
			]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,6,8,0))[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1).VAlign(VAlign_Center)[SNew(STextBlock).Text(this, &SImportPathsDialog::GetStatusText)]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[SNew(SButton).Text(LOCTEXT("SelectAll", "Select All")).OnClicked(this, &SImportPathsDialog::OnSelectAllClicked)]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[SNew(SButton).Text(LOCTEXT("DeselectAll", "Deselect All")).OnClicked(this, &SImportPathsDialog::OnDeselectAllClicked)]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[SNew(SButton).Text_Lambda([this](){ return FText::FromString(FString::Printf(TEXT("Retry Failed (%d)"), GetFailedCount())); }).IsEnabled_Lambda([this](){ return GetFailedCount()>0; }).OnClicked(this, &SImportPathsDialog::OnRetryFailedClicked)]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(6,0,0,0))[SNew(SButton).Text(LOCTEXT("ClearCompleted", "Clear Completed")).OnClicked(this, &SImportPathsDialog::OnClearCompletedClicked)]
		]
		+ SVerticalBox::Slot().FillHeight(1).Padding(FMargin(8,6))[
			SNew(SBorder).BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder")).Padding(FMargin(2))[
				SAssignNew(ListView, SListView<TSharedPtr<FCrimeForgeImportQueueEntry>>)
				.ListItemsSource(&FilteredRows).SelectionMode(ESelectionMode::Single)
				.OnGenerateRow(this, &SImportPathsDialog::GenerateRow)
				.OnSelectionChanged(this, &SImportPathsDialog::OnSelectionChanged)
				.OnContextMenuOpening_Lambda([this](){ const TArray<TSharedPtr<FCrimeForgeImportQueueEntry>> Selected=ListView->GetSelectedItems(); return Selected.Num()>0 ? BuildRowContextMenu(Selected[0]) : TSharedPtr<SWidget>(); })
				.HeaderRow(SNew(SHeaderRow)
					+ SHeaderRow::Column(TEXT("Include")).DefaultLabel(LOCTEXT("IncludeCol", "✓")).FixedWidth(28)
					+ SHeaderRow::Column(TEXT("Path")).DefaultLabel(LOCTEXT("PathCol", "Asset Path")).FillWidth(0.52f).SortMode_Lambda([this](){return SortColumn==TEXT("Path")?SortMode:EColumnSortMode::None;}).OnSort(this,&SImportPathsDialog::OnSortChanged)
					+ SHeaderRow::Column(TEXT("Type")).DefaultLabel(LOCTEXT("TypeCol", "Type")).FillWidth(0.13f).SortMode_Lambda([this](){return SortColumn==TEXT("Type")?SortMode:EColumnSortMode::None;}).OnSort(this,&SImportPathsDialog::OnSortChanged)
					+ SHeaderRow::Column(TEXT("Group")).DefaultLabel(LOCTEXT("GroupCol", "Group")).FillWidth(0.10f).SortMode_Lambda([this](){return SortColumn==TEXT("Group")?SortMode:EColumnSortMode::None;}).OnSort(this,&SImportPathsDialog::OnSortChanged)
					+ SHeaderRow::Column(TEXT("Status")).DefaultLabel(LOCTEXT("StatusCol", "Status")).FillWidth(0.10f).SortMode_Lambda([this](){return SortColumn==TEXT("Status")?SortMode:EColumnSortMode::None;}).OnSort(this,&SImportPathsDialog::OnSortChanged)
					+ SHeaderRow::Column(TEXT("Details")).DefaultLabel(LOCTEXT("DetailsCol", "Details")).FillWidth(0.15f)
					+ SHeaderRow::Column(TEXT("Remove")).DefaultLabel(FText::GetEmpty()).FixedWidth(28))
			]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,0,8,8))[
			SNew(SExpandableArea).InitiallyCollapsed(true).HeaderContent()[SNew(STextBlock).Text(LOCTEXT("SelectedDetailsHeading", "Selected Asset Details / Cached Dependencies"))]
			.BodyContent()[
				SNew(SBox).MaxDesiredHeight(180)[
					SNew(SScrollBox)
					+ SScrollBox::Slot()[SAssignNew(SelectedAssetDetailsText, STextBlock).Text(this, &SImportPathsDialog::GetSelectedAssetDetailsText).AutoWrapText(true)]
				]
			]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,0,8,8))[
			SNew(SExpandableArea).InitiallyCollapsed(true).HeaderContent()[SNew(STextBlock).Text(LOCTEXT("UnsupportedHeading", "Unsupported Data / Reconstruction Warnings"))]
			.BodyContent()[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Right).Padding(FMargin(0,0,0,4))[SNew(SButton).Text(LOCTEXT("CopyUnsupported", "Copy Unsupported Data")).OnClicked(this,&SImportPathsDialog::OnCopyUnsupportedClicked)]
				+ SVerticalBox::Slot().AutoHeight()[SNew(SBox).MaxDesiredHeight(160)[SNew(SScrollBox)+SScrollBox::Slot()[SNew(STextBlock).Text(this,&SImportPathsDialog::GetUnsupportedText).AutoWrapText(true)]]]
			]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,0,8,8))[
			SNew(SBorder).BorderImage(FAppStyle::Get().GetBrush("ToolPanel.GroupBorder")).Padding(FMargin(8))[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(0,0,0,6))[SNew(STextBlock).Text(LOCTEXT("AssetToolsHeading", "Asset Tools"))]
				+ SVerticalBox::Slot().AutoHeight()[SNew(SWrapBox).UseAllottedSize(true)
					+ SWrapBox::Slot().Padding(FMargin(0,0,6,6))[SNew(SButton).Text(LOCTEXT("ImportGameFolder", "Import Game Folder")).OnClicked(this,&SImportPathsDialog::OnImportGameFolderClicked)]
					+ SWrapBox::Slot().Padding(FMargin(0,0,6,6))[SNew(SButton).Text(LOCTEXT("ImportJsonFolder", "Import JSON Folder")).OnClicked_Static(&ImportJsonFolder)]
					+ SWrapBox::Slot().Padding(FMargin(0,0,6,6))[SNew(SButton).Text(LOCTEXT("ClearImportData", "Clear Import Data")).OnClicked_Static(&ClearSelectedImportData)]
					+ SWrapBox::Slot().Padding(FMargin(0,0,6,6))[SNew(SButton).Text(LOCTEXT("FixAssetData", "Fix Up Asset Data")).OnClicked_Static(&FixSelectedAssetData)]
					+ SWrapBox::Slot().Padding(FMargin(0,0,6,6))[SNew(SButton).Text(LOCTEXT("ClearDependencyCache", "Clear Dependency Cache")).ToolTipText(LOCTEXT("ClearDependencyCacheTip", "Clear CrimeForge's persisted JSON dependency/type cache. Raw payloads are only cached for this editor session.")).OnClicked(this,&SImportPathsDialog::OnClearDependencyCacheClicked)]
					+ SWrapBox::Slot().Padding(FMargin(0,0,6,6))[SNew(SButton).Text(LOCTEXT("RestoreLastImport", "Restore Last Import")).ToolTipText(LOCTEXT("RestoreLastImportTip", "Restore all package files backed up before the most recent replacement batch.")).OnClicked(this,&SImportPathsDialog::OnRestoreLastImportClicked)]]
				+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(0,4,0,6))[SNew(STextBlock).Text(LOCTEXT("SelectedAssetToolsHeading", "Selected Asset Tools"))]
				+ SVerticalBox::Slot().AutoHeight()[BuildSelectedAssetToolButtons()]
			]
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(FMargin(8,0,8,8))[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1).VAlign(VAlign_Center)[
				SNew(SCheckBox).IsChecked_Lambda([this](){return bImportReferencesRecursively?ECheckBoxState::Checked:ECheckBoxState::Unchecked;})
				.OnCheckStateChanged_Lambda([this](ECheckBoxState S){bImportReferencesRecursively=S==ECheckBoxState::Checked;})[
					SNew(STextBlock).Text(LOCTEXT("RecursiveReferences", "Import referenced assets recursively"))]]
			+ SHorizontalBox::Slot().AutoWidth().Padding(FMargin(12,0,0,0))[SNew(SButton).Text(this,&SImportPathsDialog::GetImportText).IsEnabled(this,&SImportPathsDialog::CanImport).OnClicked(this,&SImportPathsDialog::OnImportClicked)]
		]
	];

	RebuildGroupControls();
	RebuildFilteredRows();
	const FString Clipboard = GetClipboard();
	if (IsPathList(Clipboard)) AddPaths(Clipboard);
	FSlateApplication::Get().SetKeyboardFocus(PathBox);
}

void SImportPathsDialog::OnPathCommitted(const FText&, const ETextCommit::Type CommitType) { if (CommitType == ETextCommit::OnEnter) AddFromBox(); }
FReply SImportPathsDialog::OnAddClicked() { AddFromBox(); return FReply::Handled(); }

FReply SImportPathsDialog::OnImportGameFolderClicked() {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) { SpawnPrompt("CrimeForge Experimental Features", "Asset reading and importing are experimental and currently disabled."); return FReply::Handled(); }
	const FString CurrentFolder = GetCurrentContentBrowserFolder();
	if (CurrentFolder.IsEmpty()) { SpawnPrompt("Import Game Folder", "No active Content Browser folder could be found."); return FReply::Handled(); }
	FString BackendError;
	if (!FCrimeForgeAssetReader::Get().EnsureInitialized(&BackendError)) { SpawnPrompt("Import Game Folder", BackendError); return FReply::Handled(); }
	if (!AssetBackend::EnsureMetadataBlocking()) { SpawnPrompt("Import Game Folder", "PAYDAY 3 data could not be initialized."); return FReply::Handled(); }
	TArray<FCrimeForgeFolderAssetEntry> FolderAssets;
	{ const FBlockingRequestScope Scope(FText::Format(LOCTEXT("ListingCurrentGameFolder", "Listing {0} with AssetReader"), FText::FromString(CurrentFolder))); FolderAssets = AssetBackend::Folder::GetAssetsBlocking(CurrentFolder); }
	if (FolderAssets.Num()==0) { SpawnPrompt("Import Game Folder", FString::Printf(TEXT("No PAYDAY 3 assets were found under %s."), *CurrentFolder)); return FReply::Handled(); }

	TArray<FString> FolderPaths;
	TMap<FString, FString> TypesByCanonicalPath;
	FolderPaths.Reserve(FolderAssets.Num());
	for (const FCrimeForgeFolderAssetEntry& Asset : FolderAssets) {
		if (Asset.Path.IsEmpty()) continue;
		FolderPaths.Add(Asset.Path);
		if (!Asset.Type.IsEmpty()) {
			const FString Canonical = ToCanonicalEditorPackagePath(Asset.Path).ToLower();
			TypesByCanonicalPath.Add(Canonical, Asset.Type);
			FCrimeForgeImportDependencyCache::StoreType(Asset.Path, Asset.Type);
		}
	}

	AddPaths(FolderPaths, CurrentFolder);

	/* AddPaths deliberately deduplicates the queue. Apply the freshly listed type metadata afterward so entries that
	 * were already present from an older queue file stop displaying Unknown/Unresolved as well. */
	for (const TSharedPtr<FCrimeForgeImportQueueEntry>& Entry : Rows) {
		if (!Entry) continue;
		const FString Canonical = ToCanonicalEditorPackagePath(Entry->Path).ToLower();
		if (const FString* Type = TypesByCanonicalPath.Find(Canonical)) {
			Entry->Type = *Type;
			Entry->Group = DetermineSelectionGroup(Entry->Type, Entry->FolderGroup);
		}
		UpdateEntryDetails(Entry);
	}
	FCrimeForgeImportDependencyCache::Flush();
	RebuildTypeFilterOptions();
	SaveQueue();
	RebuildGroupControls();
	RebuildFilteredRows();
	return FReply::Handled();
}

FReply SImportPathsDialog::OnSelectAllClicked() { for (const auto& E:Rows) if(E) E->bSelected=true; SaveQueue(); RebuildGroupControls(); if(ListView)ListView->RequestListRefresh(); return FReply::Handled(); }
FReply SImportPathsDialog::OnDeselectAllClicked() { for (const auto& E:Rows) if(E) E->bSelected=false; SaveQueue(); RebuildGroupControls(); if(ListView)ListView->RequestListRefresh(); return FReply::Handled(); }

FReply SImportPathsDialog::OnImportClicked() {
	AddFromBox();
	TArray<FString> Paths;
	for (const auto& E:Rows) if(E && E->bSelected) { Paths.Add(E->Path); E->Status=ECrimeForgeQueueStatus::Importing; E->Message.Reset(); UpdateEntryDetails(E); }
	ECrimeForgeImportMode Mode = ECrimeForgeImportMode::Update;
	if (SelectedImportMode.IsValid() && *SelectedImportMode == TEXT("Reference")) Mode = ECrimeForgeImportMode::Reference;
	else if (SelectedImportMode.IsValid() && *SelectedImportMode == TEXT("Force Rebuild")) Mode = ECrimeForgeImportMode::ForceRebuild;
	TToolImportFromPath::ImportPaths(Paths, bImportReferencesRecursively, Mode, true);
	RefreshFromDiagnostics();
	return FReply::Handled();
}

FReply SImportPathsDialog::OnRetryFailedClicked() {
	TArray<FString> Paths;
	for (const auto& E:Rows) if(E && (E->Status==ECrimeForgeQueueStatus::Failed || E->Status==ECrimeForgeQueueStatus::Cancelled)) { Paths.Add(E->Path); E->bSelected=true; E->Status=ECrimeForgeQueueStatus::Importing; E->Message.Reset(); UpdateEntryDetails(E); }
	if (Paths.Num()==0) return FReply::Handled();
	ECrimeForgeImportMode Mode = SelectedImportMode.IsValid() && *SelectedImportMode==TEXT("Reference") ? ECrimeForgeImportMode::Reference : (SelectedImportMode.IsValid() && *SelectedImportMode==TEXT("Force Rebuild") ? ECrimeForgeImportMode::ForceRebuild : ECrimeForgeImportMode::Update);
	TToolImportFromPath::ImportPaths(Paths, bImportReferencesRecursively, Mode, true);
	RefreshFromDiagnostics();
	return FReply::Handled();
}

FReply SImportPathsDialog::OnClearCompletedClicked() {
	Rows.RemoveAll([](const TSharedPtr<FCrimeForgeImportQueueEntry>& E){ return E && (E->Status==ECrimeForgeQueueStatus::Imported || E->Status==ECrimeForgeQueueStatus::Warning || E->Status==ECrimeForgeQueueStatus::UpToDate || E->Status==ECrimeForgeQueueStatus::Skipped); });
	SaveQueue(); RebuildGroupControls(); RebuildFilteredRows(); return FReply::Handled();
}

FReply SImportPathsDialog::OnCopyUnsupportedClicked() { const FString T=GetUnsupportedText().ToString(); FPlatformApplicationMisc::ClipboardCopy(*T); return FReply::Handled(); }
FReply SImportPathsDialog::OnClearDependencyCacheClicked() {
	FCrimeForgeImportDependencyCache::Clear();
	for (const TSharedPtr<FCrimeForgeImportQueueEntry>& Entry : Rows) {
		if (!Entry) continue;
		/* Type is queue metadata as well as cache metadata. Clearing dependency/hash state should not throw away an
		 * already resolved class name and turn the visible queue back into Unknown. */
		Entry->DependencyCount = 0;
		Entry->Group = DetermineSelectionGroup(Entry->Type, Entry->FolderGroup);
		UpdateEntryDetails(Entry);
	}
	RebuildTypeFilterOptions();
	RebuildGroupControls();
	RebuildFilteredRows();
	return FReply::Handled();
}

FReply SImportPathsDialog::OnRestoreLastImportClicked() {
	FString Message;
	const bool bRestored = FCrimeForgeImportTransaction::RestoreLastBatch(Message);
	RefreshAllEntryDetails();
	if (ListView) ListView->RequestListRefresh();
	SpawnPrompt(bRestored ? "Restore Last Import" : "Restore Last Import Failed", Message);
	return FReply::Handled();
}

void SImportPathsDialog::AddFromBox() { if(!PathBox)return; AddPaths(PathBox->GetText().ToString()); PathBox->SetText(FText::GetEmpty()); FSlateApplication::Get().SetKeyboardFocus(PathBox); }
void SImportPathsDialog::AddPaths(const FString& Text,const FString& GroupRoot){TArray<FString>L;Text.ParseIntoArrayLines(L);AddPaths(L,GroupRoot);}
void SImportPathsDialog::AddPaths(const TArray<FString>& Paths,const FString& GroupRoot){
	for(const FString& Raw:Paths){
		const FString P=Raw.TrimStartAndEnd();
		if(P.IsEmpty())continue;
		const FString CanonicalCandidate=ToCanonicalEditorPackagePath(P);
		if(Rows.ContainsByPredicate([&](const auto&E){return E&&ToCanonicalEditorPackagePath(E->Path).Equals(CanonicalCandidate,ESearchCase::IgnoreCase);}))continue;
		auto E=MakeShared<FCrimeForgeImportQueueEntry>();
		E->Path=P;
		E->FolderGroup=DetermineFolderGroup(P,GroupRoot);
		E->Type=FCrimeForgeImportDependencyCache::GetType(P);
		E->Group=DetermineSelectionGroup(E->Type,E->FolderGroup);
		UpdateEntryDetails(E);
		Rows.Add(E);
	}
	RebuildTypeFilterOptions();SaveQueue();RebuildGroupControls();RebuildFilteredRows();
}
FReply SImportPathsDialog::RemoveEntry(TSharedPtr<FCrimeForgeImportQueueEntry> Entry){Rows.Remove(Entry);SaveQueue();RebuildGroupControls();RebuildFilteredRows();return FReply::Handled();}

bool SImportPathsDialog::CanAdd() const{return PathBox&& !PathBox->GetText().ToString().TrimStartAndEnd().IsEmpty();}
bool SImportPathsDialog::CanImport() const{return GetSelectedCount()>0;}
int32 SImportPathsDialog::GetSelectedCount() const{int32 C=0;for(const auto&E:Rows)if(E&&E->bSelected)++C;return C;}
int32 SImportPathsDialog::GetFailedCount() const{int32 C=0;for(const auto&E:Rows)if(E&&(E->Status==ECrimeForgeQueueStatus::Failed||E->Status==ECrimeForgeQueueStatus::Cancelled))++C;return C;}

FText SImportPathsDialog::GetStatusText() const {
	if(Rows.Num()==0)return LOCTEXT("StatusEmpty","Nothing queued. Add paths or use Import Game Folder from the current Content Browser folder.");
	int32 Imported=0,Warnings=0,Failed=0,Skipped=0;
	for(const auto&E:Rows)if(E){switch(E->Status){case ECrimeForgeQueueStatus::Imported:case ECrimeForgeQueueStatus::UpToDate:++Imported;break;case ECrimeForgeQueueStatus::Warning:++Warnings;break;case ECrimeForgeQueueStatus::Failed:case ECrimeForgeQueueStatus::Cancelled:++Failed;break;case ECrimeForgeQueueStatus::Skipped:++Skipped;break;default:break;}}
	return FText::FromString(FString::Printf(TEXT("%d queued, %d selected | %d complete, %d warnings, %d skipped, %d failed"),Rows.Num(),GetSelectedCount(),Imported,Warnings,Skipped,Failed));
}
FText SImportPathsDialog::GetImportText() const{const int32 C=GetSelectedCount();return C>0?FText::FromString(FString::Printf(TEXT("Import %d"),C)):LOCTEXT("Import","Import");}
FText SImportPathsDialog::GetStatusFilterText() const{return FText::FromString(SelectedStatusFilter.IsValid()?*SelectedStatusFilter:TEXT("All"));}
FText SImportPathsDialog::GetTypeFilterText() const{return FText::FromString(SelectedTypeFilter.IsValid()?*SelectedTypeFilter:TEXT("All Types"));}
FText SImportPathsDialog::GetExistenceFilterText() const{return FText::FromString(SelectedExistenceFilter.IsValid()?*SelectedExistenceFilter:TEXT("All Assets"));}
FText SImportPathsDialog::GetImportModeText() const{return FText::FromString(SelectedImportMode.IsValid()?*SelectedImportMode:TEXT("Update"));}

FText SImportPathsDialog::GetUnsupportedText() const {
	const TArray<FCrimeForgeUnsupportedRecord> Records=FCrimeForgeImportDiagnostics::GetUnsupported();
	if(Records.Num()==0)return LOCTEXT("NoUnsupported","No unsupported data has been recorded in the current import run.");
	TArray<FString> Lines;
	for(const auto&R:Records){FString L=FString::Printf(TEXT("[%s] %s: %s"),*R.AssetPath,*R.Category,*R.Detail);if(!R.RawData.IsEmpty())L+=TEXT("\n    Raw: ")+R.RawData;Lines.Add(L);}return FText::FromString(FString::Join(Lines,TEXT("\n\n")));
}

FText SImportPathsDialog::GetSelectedAssetDetailsText() const {
	const TSharedPtr<FCrimeForgeImportQueueEntry> Entry=SelectedQueueEntry.Pin();
	if(!Entry)return LOCTEXT("NoSelectedAssetDetails","Select a queued asset to inspect its diff, cache state and dependencies.");
	TArray<FString>Lines;Lines.Add(Entry->Path);
	Lines.Add(FString::Printf(TEXT("Type: %s | Group: %s | Status: %s | Existing: %s"),Entry->Type.IsEmpty()?TEXT("Unknown"):*Entry->Type,*Entry->Group,*QueueStatusToString(Entry->Status),DoesExistingAsset(Entry->Path)?TEXT("Yes"):TEXT("No")));
	if(!Entry->DiffSummary.IsEmpty())Lines.Add(TEXT("Diff: ")+Entry->DiffSummary);
	if(!Entry->Message.IsEmpty())Lines.Add(TEXT("Result: ")+Entry->Message);
	FCrimeForgeDependencyCacheEntry CacheEntry;
	if(FCrimeForgeImportDependencyCache::GetEntry(Entry->Path,CacheEntry)){
		if(!CacheEntry.SourceHash.IsEmpty())Lines.Add(TEXT("Cached source hash: ")+CacheEntry.SourceHash);
		Lines.Add(FString::Printf(TEXT("Cached dependencies: %d"),CacheEntry.Dependencies.Num()));
		for(const FString&D:CacheEntry.Dependencies)Lines.Add(TEXT("  • ")+D);
	}else Lines.Add(TEXT("No dependency cache entry yet. It will be populated when AssetReader exports this asset."));
	FCrimeForgeImportResult DiagnosticResult;
	if(FCrimeForgeImportDiagnostics::GetResult(Entry->Path,DiagnosticResult)&&DiagnosticResult.ReconstructionPhases.Num()>0){
		Lines.Add(TEXT("Reconstruction phases:"));for(const FString&Phase:DiagnosticResult.ReconstructionPhases)Lines.Add(TEXT("  • ")+Phase);
	}
	const TArray<FCrimeForgeUnsupportedRecord>Unsupported=FCrimeForgeImportDiagnostics::GetUnsupported(Entry->Path);
	if(Unsupported.Num()>0){Lines.Add(FString::Printf(TEXT("Unsupported/reconstruction warnings: %d"),Unsupported.Num()));for(const auto&R:Unsupported)Lines.Add(FString::Printf(TEXT("  [%s] %s"),*R.Category,*R.Detail));}
	return FText::FromString(FString::Join(Lines,TEXT("\n")));
}

TSharedRef<ITableRow> SImportPathsDialog::GenerateRow(TSharedPtr<FCrimeForgeImportQueueEntry> Entry,const TSharedRef<STableViewBase>& OwnerTable){
	return SNew(SImportQueueTableRow,OwnerTable).Entry(Entry)
		.OnChanged(FSimpleDelegate::CreateLambda([this](){SaveQueue();RebuildGroupControls();}))
		.OnRemove(FOnClicked::CreateSP(this,&SImportPathsDialog::RemoveEntry,Entry));
}

TSharedPtr<SWidget> SImportPathsDialog::BuildRowContextMenu(TSharedPtr<FCrimeForgeImportQueueEntry> Entry){
	if(!Entry)return nullptr;FMenuBuilder Menu(true,nullptr);
	Menu.AddMenuEntry(LOCTEXT("CopyPath","Copy Asset Path"),FText::GetEmpty(),FSlateIcon(),FUIAction(FExecuteAction::CreateLambda([Entry](){FPlatformApplicationMisc::ClipboardCopy(*Entry->Path);}))); 
	Menu.AddMenuEntry(LOCTEXT("SelectDeps","Select Cached Dependencies"),FText::GetEmpty(),FSlateIcon(),FUIAction(FExecuteAction::CreateSP(this,&SImportPathsDialog::SelectDependencies,Entry,false)));
	Menu.AddMenuEntry(LOCTEXT("SelectDependents","Select Cached Dependents"),FText::GetEmpty(),FSlateIcon(),FUIAction(FExecuteAction::CreateSP(this,&SImportPathsDialog::SelectDependencies,Entry,true)));
	Menu.AddMenuEntry(LOCTEXT("CopyDeps","Copy Cached Dependencies"),FText::GetEmpty(),FSlateIcon(),FUIAction(FExecuteAction::CreateLambda([Entry](){const TArray<FString>D=FCrimeForgeImportDependencyCache::GetDependencies(Entry->Path);FPlatformApplicationMisc::ClipboardCopy(*FString::Join(D,TEXT("\n")));})));
	Menu.AddMenuSeparator();
	Menu.AddMenuEntry(LOCTEXT("BrowseExisting","Browse to Existing Asset"),FText::GetEmpty(),FSlateIcon(),FUIAction(FExecuteAction::CreateSP(this,&SImportPathsDialog::BrowseToExistingAsset,Entry,false)));
	Menu.AddMenuEntry(LOCTEXT("OpenExisting","Open Existing Asset"),FText::GetEmpty(),FSlateIcon(),FUIAction(FExecuteAction::CreateSP(this,&SImportPathsDialog::BrowseToExistingAsset,Entry,true)));
	return Menu.MakeWidget();
}

void SImportPathsDialog::OnSearchChanged(const FText& T){SearchText=T.ToString();RebuildFilteredRows();}
void SImportPathsDialog::OnStatusFilterChanged(TSharedPtr<FString> V,ESelectInfo::Type){SelectedStatusFilter=V;RebuildFilteredRows();}
void SImportPathsDialog::OnTypeFilterChanged(TSharedPtr<FString> V,ESelectInfo::Type){SelectedTypeFilter=V;RebuildFilteredRows();}
void SImportPathsDialog::OnExistenceFilterChanged(TSharedPtr<FString> V,ESelectInfo::Type){SelectedExistenceFilter=V;RebuildFilteredRows();}
void SImportPathsDialog::OnImportModeChanged(TSharedPtr<FString> V,ESelectInfo::Type){SelectedImportMode=V;}
void SImportPathsDialog::OnSelectionChanged(TSharedPtr<FCrimeForgeImportQueueEntry> Entry,ESelectInfo::Type){SelectedQueueEntry=Entry;if(SelectedAssetDetailsText)SelectedAssetDetailsText->SetText(GetSelectedAssetDetailsText());}
void SImportPathsDialog::OnSortChanged(EColumnSortPriority::Type,const FName& ColumnId,EColumnSortMode::Type NewSortMode){SortColumn=ColumnId;SortMode=NewSortMode==EColumnSortMode::None?EColumnSortMode::Ascending:NewSortMode;SortRows();if(ListView)ListView->RequestListRefresh();}

void SImportPathsDialog::RefreshFromDiagnostics(){
	/* If the user cancels at a replacement prompt, the import loop intentionally stops before the
	 * remaining selected rows are attempted. Do not misreport those rows as failures simply because
	 * they have no completion record. */
	bool bImportWasCancelled=false;
	for(const FCrimeForgeImportResult& Result:FCrimeForgeImportDiagnostics::GetResults()){
		if(Result.Status==ECrimeForgeImportStatus::Cancelled){bImportWasCancelled=true;break;}
	}

	for(const auto&E:Rows){
		if(!E)continue;
		FCrimeForgeImportResult R;
		if(FCrimeForgeImportDiagnostics::GetResult(E->Path,R)){
			E->Type=R.Type.IsEmpty()?FCrimeForgeImportDependencyCache::GetType(E->Path):R.Type;
			E->Status=ConvertStatus(R.Status);E->Message=R.Message;E->DiffSummary=R.DiffSummary;E->UnsupportedCount=R.UnsupportedCount;E->DependencyCount=R.DependencyCount;
			E->Group=DetermineSelectionGroup(E->Type,E->FolderGroup);
		}else if(E->Status==ECrimeForgeQueueStatus::Importing){
			E->Status=bImportWasCancelled?ECrimeForgeQueueStatus::Cancelled:ECrimeForgeQueueStatus::Failed;
			E->Message=bImportWasCancelled?TEXT("Not attempted because the import was cancelled"):TEXT("No completion result was reported");
		}
		UpdateEntryDetails(E);
	}
	RebuildTypeFilterOptions();SaveQueue();RebuildGroupControls();RebuildFilteredRows();
	if(SelectedAssetDetailsText)SelectedAssetDetailsText->SetText(GetSelectedAssetDetailsText());
}

bool SImportPathsDialog::EntryPassesFilter(const FCrimeForgeImportQueueEntry& E) const{
	if(!SearchText.IsEmpty()&&!E.Path.Contains(SearchText,ESearchCase::IgnoreCase)&&!E.Type.Contains(SearchText,ESearchCase::IgnoreCase)&&!E.Group.Contains(SearchText,ESearchCase::IgnoreCase)&&!E.Message.Contains(SearchText,ESearchCase::IgnoreCase)&&!E.DiffSummary.Contains(SearchText,ESearchCase::IgnoreCase)&&!E.DetailsText.Contains(SearchText,ESearchCase::IgnoreCase))return false;
	const FString TypeFilter=SelectedTypeFilter.IsValid()?*SelectedTypeFilter:TEXT("All Types");
	if(TypeFilter!=TEXT("All Types")&&!E.Group.Equals(TypeFilter,ESearchCase::IgnoreCase))return false;
	const FString Existence=SelectedExistenceFilter.IsValid()?*SelectedExistenceFilter:TEXT("All Assets");
	if(Existence==TEXT("Missing Only")&&E.bExistingAsset)return false;
	if(Existence==TEXT("Existing Only")&&!E.bExistingAsset)return false;
	const FString Filter=SelectedStatusFilter.IsValid()?*SelectedStatusFilter:TEXT("All");if(Filter==TEXT("All"))return true;
	if(Filter==TEXT("Pending"))return E.Status==ECrimeForgeQueueStatus::Queued||E.Status==ECrimeForgeQueueStatus::Importing;
	if(Filter==TEXT("Imported"))return E.Status==ECrimeForgeQueueStatus::Imported||E.Status==ECrimeForgeQueueStatus::UpToDate;
	if(Filter==TEXT("Warnings"))return E.Status==ECrimeForgeQueueStatus::Warning;
	if(Filter==TEXT("Failed"))return E.Status==ECrimeForgeQueueStatus::Failed||E.Status==ECrimeForgeQueueStatus::Cancelled;
	if(Filter==TEXT("Skipped"))return E.Status==ECrimeForgeQueueStatus::Skipped;
	return true;
}
void SImportPathsDialog::RebuildFilteredRows(){FilteredRows.Reset();for(const auto&E:Rows)if(E&&EntryPassesFilter(*E))FilteredRows.Add(E);SortRows();if(ListView)ListView->RequestListRefresh();}
void SImportPathsDialog::SortRows(){
	FilteredRows.Sort([this](const auto&A,const auto&B){if(!A||!B)return A.IsValid();int32 C=0;if(SortColumn==TEXT("Type"))C=A->Type.Compare(B->Type,ESearchCase::IgnoreCase);else if(SortColumn==TEXT("Group"))C=A->Group.Compare(B->Group,ESearchCase::IgnoreCase);else if(SortColumn==TEXT("Status"))C=QueueStatusToString(A->Status).Compare(QueueStatusToString(B->Status),ESearchCase::IgnoreCase);else C=A->Path.Compare(B->Path,ESearchCase::IgnoreCase);return SortMode==EColumnSortMode::Descending?C>0:C<0;});
}

void SImportPathsDialog::RebuildGroupControls(){
	if(!GroupControlsBox)return;
	GroupControlsBox->ClearChildren();
	TSet<FString>Unique;for(const auto&E:Rows)if(E)Unique.Add(E->Group);
	TArray<FString>Groups=Unique.Array();Groups.Sort();
	for(const FString&G:Groups){
		GroupControlsBox->AddSlot().AutoHeight().Padding(FMargin(0,1))[
			SNew(SCheckBox).IsChecked_Lambda([this,G](){return GetGroupCheckState(G);}).OnCheckStateChanged_Lambda([this,G](ECheckBoxState St){SetGroupSelected(G,St==ECheckBoxState::Checked);})
			[SNew(STextBlock).Text_Lambda([this,G](){return GetGroupLabel(G);})]
		];
	}
}
void SImportPathsDialog::RebuildTypeFilterOptions(){
	const FString Previous=SelectedTypeFilter.IsValid()?*SelectedTypeFilter:TEXT("All Types");
	const TCHAR* Categories[] = { TEXT("All Types"), TEXT("Unresolved"), TEXT("Blueprints"), TEXT("Materials (stubs)"), TEXT("Static Meshes"), TEXT("Skeletal Meshes"), TEXT("Textures"), TEXT("Animations"), TEXT("Data Assets"), TEXT("Fonts"), TEXT("Audio"), TEXT("Curves"), TEXT("Other") };
	TypeFilterOptions.Reset();for(const TCHAR* Category:Categories)TypeFilterOptions.Add(MakeShared<FString>(Category));
	SelectedTypeFilter=TypeFilterOptions[0];
	for(const auto&V:TypeFilterOptions)if(V.IsValid()&&V->Equals(Previous,ESearchCase::IgnoreCase)){SelectedTypeFilter=V;break;}
}
void SImportPathsDialog::SetGroupSelected(const FString&G,bool b){for(const auto&E:Rows)if(E&&E->Group==G)E->bSelected=b;SaveQueue();if(ListView)ListView->RequestListRefresh();RebuildGroupControls();}
ECheckBoxState SImportPathsDialog::GetGroupCheckState(const FString&G) const{int32 T=0,S=0;for(const auto&E:Rows)if(E&&E->Group==G){++T;if(E->bSelected)++S;}return S==0?ECheckBoxState::Unchecked:(S==T?ECheckBoxState::Checked:ECheckBoxState::Undetermined);}
FText SImportPathsDialog::GetGroupLabel(const FString&G) const{int32 T=0,S=0;for(const auto&E:Rows)if(E&&E->Group==G){++T;if(E->bSelected)++S;}return FText::FromString(FString::Printf(TEXT("%s (%d/%d)"),*G,S,T));}
FString SImportPathsDialog::DetermineFolderGroup(const FString& Path,const FString& Root) const{
	FString P=NormalizePackagePath(Path),R=NormalizePackagePath(Root);
	while(P.StartsWith(TEXT("/")))P.RightChopInline(1,EAllowShrinking::No);while(P.EndsWith(TEXT("/")))P.LeftChopInline(1,EAllowShrinking::No);
	while(R.StartsWith(TEXT("/")))R.RightChopInline(1,EAllowShrinking::No);while(R.EndsWith(TEXT("/")))R.LeftChopInline(1,EAllowShrinking::No);
	if(!R.IsEmpty()&&P.StartsWith(R,ESearchCase::IgnoreCase)){FString Rest=P.Mid(R.Len());while(Rest.StartsWith(TEXT("/")))Rest.RightChopInline(1,EAllowShrinking::No);FString First;if(Rest.Split(TEXT("/"),&First,nullptr))return First.IsEmpty()?TEXT("Root"):First;return Rest.IsEmpty()?TEXT("Root"):Rest;}
	TArray<FString>Parts;P.ParseIntoArray(Parts,TEXT("/"),true);if(Parts.Num()>=3&&Parts[0].Equals(TEXT("Game"),ESearchCase::IgnoreCase))return Parts[1];if(Parts.Num()>=3&&Parts[1].Equals(TEXT("Content"),ESearchCase::IgnoreCase))return Parts[2];return Parts.Num()>0?Parts[0]:TEXT("Manual");
}
FString SImportPathsDialog::DetermineSelectionGroup(const FString& Type,const FString& FolderGroup) const{
	if(Type.IsEmpty())return TEXT("Unresolved");
	if(Type.Contains(TEXT("Blueprint"),ESearchCase::IgnoreCase)||Type.Contains(TEXT("GeneratedClass"),ESearchCase::IgnoreCase))return TEXT("Blueprints");
	if(Type.Contains(TEXT("Material"),ESearchCase::IgnoreCase))return TEXT("Materials (stubs)");
	if(Type.Contains(TEXT("StaticMesh"),ESearchCase::IgnoreCase))return TEXT("Static Meshes");
	if(Type.Contains(TEXT("SkeletalMesh"),ESearchCase::IgnoreCase))return TEXT("Skeletal Meshes");
	if(Type.Contains(TEXT("Texture"),ESearchCase::IgnoreCase))return TEXT("Textures");
	if(Type.Contains(TEXT("Anim"),ESearchCase::IgnoreCase)||Type.Contains(TEXT("Sequence"),ESearchCase::IgnoreCase))return TEXT("Animations");
	if(Type.Contains(TEXT("DataAsset"),ESearchCase::IgnoreCase))return TEXT("Data Assets");
	if(Type.Contains(TEXT("Font"),ESearchCase::IgnoreCase))return TEXT("Fonts");
	if(Type.Contains(TEXT("Sound"),ESearchCase::IgnoreCase)||Type.Contains(TEXT("Audio"),ESearchCase::IgnoreCase))return TEXT("Audio");
	if(Type.Contains(TEXT("Curve"),ESearchCase::IgnoreCase))return TEXT("Curves");
	return TEXT("Other");
}
void SImportPathsDialog::UpdateEntryDetails(const TSharedPtr<FCrimeForgeImportQueueEntry>& Entry){
	if(!Entry)return;
	Entry->bExistingAsset=DoesExistingAsset(Entry->Path);

	FCrimeForgeDependencyCacheEntry CacheEntry;
	const bool bHasCache=FCrimeForgeImportDependencyCache::GetEntry(Entry->Path,CacheEntry);
	if(bHasCache&&Entry->DependencyCount==0)Entry->DependencyCount=CacheEntry.Dependencies.Num();

	auto Condense=[](FString Text){
		Text.ReplaceInline(TEXT("\r"),TEXT(" "));
		Text.ReplaceInline(TEXT("\n"),TEXT(" "));
		Text=Text.TrimStartAndEnd();
		while(Text.Contains(TEXT("  ")))Text.ReplaceInline(TEXT("  "),TEXT(" "));
		constexpr int32 MaxLen=110;
		if(Text.Len()>MaxLen)Text=Text.Left(MaxLen-3)+TEXT("...");
		return Text;
	};

	TArray<FString> Parts;
	switch(Entry->Status){
	case ECrimeForgeQueueStatus::Queued:
		Parts.Add(Entry->bExistingAsset?TEXT("Existing"):TEXT("Missing"));
		if(Entry->DiffSummary.Contains(TEXT("modified after its last CrimeForge import"),ESearchCase::IgnoreCase))Parts.Add(TEXT("Modified"));
		if(bHasCache){
			if(CacheEntry.Dependencies.Num()>0)Parts.Add(FString::Printf(TEXT("Cached: %d deps"),CacheEntry.Dependencies.Num()));
			else if(!CacheEntry.SourceHash.IsEmpty())Parts.Add(TEXT("Cached"));
		}
		break;
	case ECrimeForgeQueueStatus::Importing: Parts.Add(TEXT("Importing...")); break;
	case ECrimeForgeQueueStatus::Imported: Parts.Add(TEXT("Imported")); break;
	case ECrimeForgeQueueStatus::Warning: Parts.Add(TEXT("Warning")); break;
	case ECrimeForgeQueueStatus::UpToDate: Parts.Add(TEXT("Up to date")); break;
	case ECrimeForgeQueueStatus::Skipped: Parts.Add(TEXT("Skipped")); break;
	case ECrimeForgeQueueStatus::Failed: Parts.Add(TEXT("Failed")); break;
	case ECrimeForgeQueueStatus::Cancelled: Parts.Add(TEXT("Cancelled")); break;
	default: break;
	}

	if(Entry->Status!=ECrimeForgeQueueStatus::Queued&&Entry->Status!=ECrimeForgeQueueStatus::Importing){
		if(Entry->UnsupportedCount>0)Parts.Add(FString::Printf(TEXT("Unsupported: %d"),Entry->UnsupportedCount));
		if(Entry->DependencyCount>0)Parts.Add(FString::Printf(TEXT("Deps: %d"),Entry->DependencyCount));
		const bool bShowMessage=Entry->Status==ECrimeForgeQueueStatus::Warning||Entry->Status==ECrimeForgeQueueStatus::Skipped||Entry->Status==ECrimeForgeQueueStatus::Failed||Entry->Status==ECrimeForgeQueueStatus::Cancelled;
		if(bShowMessage&&!Entry->Message.IsEmpty())Parts.Add(Condense(Entry->Message));
	}
	Entry->DetailsText=FString::Join(Parts,TEXT(" | "));

	TArray<FString> ToolTipLines;
	ToolTipLines.Add(Entry->Path);
	ToolTipLines.Add(TEXT("Status: ")+QueueStatusToString(Entry->Status));
	ToolTipLines.Add(FString::Printf(TEXT("Existing asset: %s"),Entry->bExistingAsset?TEXT("Yes"):TEXT("No")));
	if(bHasCache){
		ToolTipLines.Add(FString::Printf(TEXT("Cached dependencies: %d"),CacheEntry.Dependencies.Num()));
		if(!CacheEntry.SourceHash.IsEmpty())ToolTipLines.Add(TEXT("Cached source hash: ")+CacheEntry.SourceHash);
	}else ToolTipLines.Add(TEXT("Dependency cache: Not populated"));
	if(Entry->UnsupportedCount>0)ToolTipLines.Add(FString::Printf(TEXT("Unsupported/reconstruction warnings: %d"),Entry->UnsupportedCount));
	if(!Entry->DiffSummary.IsEmpty())ToolTipLines.Add(TEXT("Diff: ")+Entry->DiffSummary);
	if(!Entry->Message.IsEmpty())ToolTipLines.Add(TEXT("Result: ")+Entry->Message);
	Entry->DetailsToolTip=FString::Join(ToolTipLines,TEXT("\n"));
}

void SImportPathsDialog::RefreshAllEntryDetails(){for(const auto& Entry:Rows)UpdateEntryDetails(Entry);}

bool SImportPathsDialog::DoesExistingAsset(const FString& Path) const{const FString Package=ToCanonicalEditorPackagePath(Path);return !Package.IsEmpty()&&FPackageName::DoesPackageExist(Package);}

void SImportPathsDialog::SelectDependencies(TSharedPtr<FCrimeForgeImportQueueEntry> Entry,const bool bDependents){if(!Entry)return;const TArray<FString>Paths=bDependents?FCrimeForgeImportDependencyCache::GetDependents(Entry->Path):FCrimeForgeImportDependencyCache::GetDependencies(Entry->Path);for(const FString&P:Paths){auto Found=Rows.FindByPredicate([&](const auto&E){return E&&NormalizePackagePath(E->Path).Equals(NormalizePackagePath(P),ESearchCase::IgnoreCase);});if(Found)(*Found)->bSelected=true;else AddPaths(TArray<FString>{P});}SaveQueue();RebuildGroupControls();if(ListView)ListView->RequestListRefresh();}
void SImportPathsDialog::BrowseToExistingAsset(TSharedPtr<FCrimeForgeImportQueueEntry> Entry,const bool bOpenEditor){if(!Entry||!GEditor)return;const FString Package=ToCanonicalEditorPackagePath(Entry->Path);FString Name;Package.Split(TEXT("/"),nullptr,&Name,ESearchCase::IgnoreCase,ESearchDir::FromEnd);UObject* Asset=LoadObject<UObject>(nullptr,*(Package+TEXT(".")+Name));if(!Asset)return;TArray<UObject*>Objects{Asset};GEditor->SyncBrowserToObjects(Objects);if(bOpenEditor)if(UAssetEditorSubsystem* S=GEditor->GetEditorSubsystem<UAssetEditorSubsystem>())S->OpenEditorForAsset(Asset);}

FString SImportPathsDialog::QueueStateFile(){return FPaths::Combine(FPaths::ProjectSavedDir(),TEXT("CrimeForge"),TEXT("JsonImporterQueue.json"));}
void SImportPathsDialog::LoadQueue(){
	FString T;if(!FFileHelper::LoadFileToString(T,*QueueStateFile()))return;
	TSharedPtr<FJsonObject>R;auto Reader=TJsonReaderFactory<>::Create(T);if(!FJsonSerializer::Deserialize(Reader,R)||!R)return;
	const TArray<TSharedPtr<FJsonValue>>*A=nullptr;if(!R->TryGetArrayField(TEXT("rows"),A)||!A)return;
	for(const auto&V:*A){
		if(!V||V->Type!=EJson::Object)continue;auto O=V->AsObject();auto E=MakeShared<FCrimeForgeImportQueueEntry>();
		O->TryGetStringField(TEXT("path"),E->Path);O->TryGetStringField(TEXT("folderGroup"),E->FolderGroup);O->TryGetStringField(TEXT("type"),E->Type);O->TryGetBoolField(TEXT("selected"),E->bSelected);
		if(E->FolderGroup.IsEmpty())E->FolderGroup=DetermineFolderGroup(E->Path,FString());
		if(E->Type.IsEmpty())E->Type=FCrimeForgeImportDependencyCache::GetType(E->Path);E->Group=DetermineSelectionGroup(E->Type,E->FolderGroup);
		if(!E->Path.IsEmpty()){UpdateEntryDetails(E);Rows.Add(E);}
	}
}
void SImportPathsDialog::SaveQueue() const{
	IFileManager::Get().MakeDirectory(*FPaths::GetPath(QueueStateFile()),true);TArray<TSharedPtr<FJsonValue>>A;
	for(const auto&E:Rows)if(E){auto O=MakeShared<FJsonObject>();O->SetStringField(TEXT("path"),E->Path);O->SetStringField(TEXT("folderGroup"),E->FolderGroup);O->SetStringField(TEXT("type"),E->Type);O->SetBoolField(TEXT("selected"),E->bSelected);A.Add(MakeShared<FJsonValueObject>(O));}
	auto R=MakeShared<FJsonObject>();R->SetNumberField(TEXT("version"),3);R->SetArrayField(TEXT("rows"),A);FString T;auto W=TJsonWriterFactory<TCHAR,TPrettyJsonPrintPolicy<TCHAR>>::Create(&T);FJsonSerializer::Serialize(R,W);FFileHelper::SaveStringToFile(T,*QueueStateFile());
}

ECrimeForgeQueueStatus SImportPathsDialog::ConvertStatus(const ECrimeForgeImportStatus S){switch(S){case ECrimeForgeImportStatus::Importing:return ECrimeForgeQueueStatus::Importing;case ECrimeForgeImportStatus::Imported:return ECrimeForgeQueueStatus::Imported;case ECrimeForgeImportStatus::ImportedWithWarnings:return ECrimeForgeQueueStatus::Warning;case ECrimeForgeImportStatus::UpToDate:return ECrimeForgeQueueStatus::UpToDate;case ECrimeForgeImportStatus::Skipped:return ECrimeForgeQueueStatus::Skipped;case ECrimeForgeImportStatus::Failed:return ECrimeForgeQueueStatus::Failed;case ECrimeForgeImportStatus::Cancelled:return ECrimeForgeQueueStatus::Cancelled;default:return ECrimeForgeQueueStatus::Queued;}}
FString SImportPathsDialog::QueueStatusToString(const ECrimeForgeQueueStatus S){switch(S){case ECrimeForgeQueueStatus::Queued:return TEXT("Queued");case ECrimeForgeQueueStatus::Importing:return TEXT("Importing");case ECrimeForgeQueueStatus::Imported:return TEXT("Imported");case ECrimeForgeQueueStatus::Warning:return TEXT("Warning");case ECrimeForgeQueueStatus::UpToDate:return TEXT("Up to date");case ECrimeForgeQueueStatus::Skipped:return TEXT("Skipped");case ECrimeForgeQueueStatus::Failed:return TEXT("Failed");case ECrimeForgeQueueStatus::Cancelled:return TEXT("Cancelled");default:return TEXT("Unknown");}}

#undef LOCTEXT_NAMESPACE
