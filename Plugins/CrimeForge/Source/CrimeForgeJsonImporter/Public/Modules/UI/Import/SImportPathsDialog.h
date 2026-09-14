

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

class SEditableTextBox;
class SWindow;

/* Builds up a list of asset paths to import, one the asset backend knows about rather than one in this
 * project.
 *
 * Nothing here can be checked without asking the asset backend for the asset itself, so the dialog is about
 * getting the list right: what is queued stays visible, and anything wrong can be taken back out
 * before the run starts. */
class CRIMEFORGEJSONIMPORTER_API SImportPathsDialog : public SCompoundWidget {
public:
	SLATE_BEGIN_ARGS(SImportPathsDialog) {}
		SLATE_ARGUMENT(TSharedPtr<SWindow>, ParentWindow)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	/* Opens (or focuses) the non-modal importer window. The editor remains interactive so
	 * selected-asset tools can use the Content Browser while this window is open. */
	static void Open();

private:
	FReply OnAddClicked();
	FReply OnImportClicked();

	void OnPathCommitted(const FText& NewText, ETextCommit::Type CommitType);

	/* Queues whatever is in the box, which may be several paths pasted at once */
	void AddFromBox();

	/* One entry per path, ignoring blanks and anything already queued */
	void AddPaths(const FString& Text);

	/* Takes one entry back out, from the cross on its own row */
	FReply RemovePath(TSharedPtr<FString> Path);

	bool CanAdd() const;
	bool CanImport() const;

	FText GetStatusText() const;
	FText GetImportText() const;

	TSharedRef<ITableRow> GenerateRow(TSharedPtr<FString> Path, const TSharedRef<STableViewBase>& OwnerTable);

	TSharedPtr<SWindow> ParentWindow;
	TSharedPtr<SEditableTextBox> PathBox;
	TSharedPtr<SListView<TSharedPtr<FString>>> ListView;

	TArray<TSharedPtr<FString>> Rows;

};
