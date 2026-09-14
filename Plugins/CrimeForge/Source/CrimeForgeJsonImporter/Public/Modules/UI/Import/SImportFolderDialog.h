

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

class SEditableTextBox;
class SWindow;

/* Lists the PAYDAY 3 assets beneath a game-content folder before importing them.
 *
 * The window is deliberately non-modal so the Content Browser remains usable while it is open.
 * The current Content Browser folder is filled in when the window opens, and Use Selected can
 * pull a newly selected folder at any time. */
class CRIMEFORGEJSONIMPORTER_API SImportFolderDialog : public SCompoundWidget {
public:
	SLATE_BEGIN_ARGS(SImportFolderDialog) {}
		SLATE_ARGUMENT(TSharedPtr<SWindow>, ParentWindow)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	/* Opens (or focuses) the non-modal folder importer. OnImport is called when the user presses
	 * Import, with the paths most recently listed by AssetReader. */
	static void Open(TFunction<void(TArray<FString>)> OnImport);

private:
	FReply OnListAssetsClicked();
	FReply OnUseSelectedFolderClicked();
	FReply OnImportClicked();

	void OnFolderCommitted(const FText& NewText, ETextCommit::Type CommitType);

	/* Lists what AssetReader knows about beneath the folder currently in the box. */
	void ListAssets();

	/* Uses the active Content Browser's displayed folder when available. */
	void FillFromCurrentContentBrowserFolder();

	bool CanListAssets() const;
	bool CanImport() const;

	/* Whether the Content Browser has an explicitly selected folder to borrow. */
	bool HasSelectedFolder() const;
	FText GetSelectedFolderTooltip() const;

	FText GetStatusText() const;
	FText GetImportText() const;

	TSharedRef<ITableRow> GenerateRow(TSharedPtr<FString> Path, const TSharedRef<STableViewBase>& OwnerTable) const;

	TSharedPtr<SWindow> ParentWindow;
	TSharedPtr<SEditableTextBox> FolderBox;
	TSharedPtr<SListView<TSharedPtr<FString>>> ListView;

	/* The last AssetReader listing, as rows and in the form the importer takes. */
	TArray<TSharedPtr<FString>> Rows;
	TArray<FString> Paths;

	/* Lets the status line tell "nothing listed yet" apart from "nothing there". */
	bool bListed = false;

	TFunction<void(TArray<FString>)> ImportCallback;
};
