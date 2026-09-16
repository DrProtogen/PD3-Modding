#pragma once

#include "CoreMinimal.h"
#include "Importers/Constructor/ImportConflict.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SHeaderRow.h"
#include "Widgets/Views/SListView.h"

class SDockTab;
class SEditableTextBox;
class SSearchBox;
class STextBlock;
class SVerticalBox;
class FSpawnTabArgs;

enum class ECrimeForgeQueueStatus : uint8 {
	Queued,
	Importing,
	Imported,
	Warning,
	UpToDate,
	Skipped,
	Failed,
	Cancelled
};

struct FCrimeForgeImportQueueEntry {
	FString Path;
	FString Type;
	FString Group;
	FString FolderGroup;
	FString Message;
	FString DiffSummary;
	FString DetailsText;
	FString DetailsToolTip;
	ECrimeForgeQueueStatus Status = ECrimeForgeQueueStatus::Queued;
	bool bSelected = true;
	bool bExistingAsset = false;
	int32 UnsupportedCount = 0;
	int32 DependencyCount = 0;
};

class CRIMEFORGEJSONIMPORTER_API SImportPathsDialog : public SCompoundWidget {
public:
	SLATE_BEGIN_ARGS(SImportPathsDialog) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	virtual ~SImportPathsDialog() override;

	static const FName TabId;
	static void RegisterTabSpawner();
	static void UnregisterTabSpawner();
	static void Open();
	static void OpenAndAddCurrentGameFolder();

	static ECrimeForgeQueueStatus ConvertStatus(ECrimeForgeImportStatus Status);
	static FString QueueStatusToString(ECrimeForgeQueueStatus Status);

private:
	static TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& Args);

	FReply OnAddClicked();
	FReply OnImportClicked();
	FReply OnImportGameFolderClicked();
	FReply OnSelectAllClicked();
	FReply OnDeselectAllClicked();
	FReply OnRetryFailedClicked();
	FReply OnClearCompletedClicked();
	FReply OnCopyUnsupportedClicked();
	FReply OnClearDependencyCacheClicked();
	FReply OnRestoreLastImportClicked();

	void OnPathCommitted(const FText& NewText, ETextCommit::Type CommitType);
	void OnSearchChanged(const FText& NewText);
	void OnStatusFilterChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type);
	void OnTypeFilterChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type);
	void OnExistenceFilterChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type);
	void OnImportModeChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type);
	void OnSortChanged(EColumnSortPriority::Type Priority, const FName& ColumnId, EColumnSortMode::Type NewSortMode);
	void OnSelectionChanged(TSharedPtr<FCrimeForgeImportQueueEntry> Entry, ESelectInfo::Type);

	void AddFromBox();
	void AddPaths(const FString& Text, const FString& GroupRoot = FString());
	void AddPaths(const TArray<FString>& Paths, const FString& GroupRoot = FString());
	FReply RemoveEntry(TSharedPtr<FCrimeForgeImportQueueEntry> Entry);

	bool CanAdd() const;
	bool CanImport() const;
	int32 GetSelectedCount() const;
	int32 GetFailedCount() const;
	FText GetStatusText() const;
	FText GetImportText() const;
	FText GetUnsupportedText() const;
	FText GetStatusFilterText() const;
	FText GetTypeFilterText() const;
	FText GetExistenceFilterText() const;
	FText GetImportModeText() const;
	FText GetSelectedAssetDetailsText() const;

	TSharedRef<ITableRow> GenerateRow(TSharedPtr<FCrimeForgeImportQueueEntry> Entry, const TSharedRef<STableViewBase>& OwnerTable);
	TSharedPtr<SWidget> BuildRowContextMenu(TSharedPtr<FCrimeForgeImportQueueEntry> Entry);

	void RefreshFromDiagnostics();
	void RebuildFilteredRows();
	void RebuildGroupControls();
	void RebuildTypeFilterOptions();
	void SetGroupSelected(const FString& Group, bool bSelected);
	ECheckBoxState GetGroupCheckState(const FString& Group) const;
	FText GetGroupLabel(const FString& Group) const;
	FString DetermineFolderGroup(const FString& Path, const FString& GroupRoot) const;
	FString DetermineSelectionGroup(const FString& Type, const FString& FolderGroup) const;
	bool EntryPassesFilter(const FCrimeForgeImportQueueEntry& Entry) const;
	bool DoesExistingAsset(const FString& Path) const;
	void UpdateEntryDetails(const TSharedPtr<FCrimeForgeImportQueueEntry>& Entry);
	void RefreshAllEntryDetails();
	void SortRows();

	void SelectDependencies(TSharedPtr<FCrimeForgeImportQueueEntry> Entry, bool bDependents);
	void BrowseToExistingAsset(TSharedPtr<FCrimeForgeImportQueueEntry> Entry, bool bOpenEditor);

	void LoadQueue();
	void SaveQueue() const;
	static FString QueueStateFile();

	TSharedPtr<SEditableTextBox> PathBox;
	TSharedPtr<SSearchBox> SearchBox;
	TSharedPtr<SListView<TSharedPtr<FCrimeForgeImportQueueEntry>>> ListView;
	TSharedPtr<SVerticalBox> GroupControlsBox;
	TSharedPtr<STextBlock> SelectedAssetDetailsText;

	TArray<TSharedPtr<FCrimeForgeImportQueueEntry>> Rows;
	TArray<TSharedPtr<FCrimeForgeImportQueueEntry>> FilteredRows;
	TWeakPtr<FCrimeForgeImportQueueEntry> SelectedQueueEntry;

	TArray<TSharedPtr<FString>> StatusFilterOptions;
	TSharedPtr<FString> SelectedStatusFilter;
	TArray<TSharedPtr<FString>> TypeFilterOptions;
	TSharedPtr<FString> SelectedTypeFilter;
	TArray<TSharedPtr<FString>> ExistenceFilterOptions;
	TSharedPtr<FString> SelectedExistenceFilter;
	TArray<TSharedPtr<FString>> ImportModeOptions;
	TSharedPtr<FString> SelectedImportMode;
	FString SearchText;

	FName SortColumn = TEXT("Path");
	EColumnSortMode::Type SortMode = EColumnSortMode::Ascending;
	bool bImportReferencesRecursively = true;
};
