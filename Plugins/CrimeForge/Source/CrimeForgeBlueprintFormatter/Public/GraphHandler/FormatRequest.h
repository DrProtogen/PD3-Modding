

#pragma once

#include "CoreMinimal.h"
#include "Formatters/GraphFormatterTypes.h"
#include "UObject/WeakObjectPtr.h"

struct FCrimeForgeScopedGraphAction;
class FCrimeForgeGraphHandler;
class UEdGraphNode;

DECLARE_MULTICAST_DELEGATE(FOnPostFormatting);

class FCrimeForgeFormatRequest
{
public:
	FCrimeForgeFormatRequest(FCrimeForgeGraphHandler& InGH);

	FOnPostFormatting OnPostFormatting;

	FEdGraphFormatterParameters FormatterParameters;
	FCrimeForgeGraphHandler& GH;

	TArray<TArray<TWeakObjectPtr<UEdGraphNode>>> FormatAllColumns;

	TSharedPtr<FCrimeForgeScopedGraphAction> FormatAllTransaction;

	TMap<FGuid, FIntPoint> PreFormatNodePositions;



	void RequestFormatAll();

	void UpdateNodesRequiringFormatting();

	bool IsBlueprintRootNode(UEdGraphNode* Node, bool bOnlyOutputRoots);
	void Reset();

	UEdGraphNode* FindRootNode(UEdGraphNode* InitialNode);

	TSharedPtr<FFormatterInterface> MakeFormatter();

	bool HasActiveTransaction() const;

	TSharedPtr<FFormatterInterface> FormatNodes(UEdGraphNode* Node, bool bUsingFormatAll = false);

	void PreFormatting();

	void PostFormatting(const TArray<TSharedPtr<FFormatterInterface>>& Formatters);
	void PostFormatComments(const TArray<TSharedPtr<FFormatterInterface>>& Formatters);

	void RunFormatting();
	void FormatPendingColumns();

	void SimpleFormatAll();
	void SmartFormatAll();
	void FormatColumn(TArray<TSharedPtr<FFormatterInterface>>& CurrentColumn, float ColumnX);

	void ResetTransactions();

};
