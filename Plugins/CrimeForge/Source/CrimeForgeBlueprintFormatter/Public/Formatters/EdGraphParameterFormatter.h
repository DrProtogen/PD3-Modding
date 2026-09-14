

#pragma once

#include "CoreMinimal.h"
#include "CrimeForgeCommentHandler.h"
#include "FormatterInterface.h"
#include "Formatters/GraphFormatterTypes.h"
#include "EdGraph/EdGraphNode.h"

struct ChildBranch;
class FEdGraphFormatter;
class FCrimeForgeGraphHandler;
struct FNodeEdge;
struct FNodeArray;
class FSlateRect;
class UEdGraphNode;

class CRIMEFORGEBLUEPRINTFORMATTER_API FEdGraphParameterFormatter final
	: public FFormatterInterface
{
	TSharedPtr<FCrimeForgeGraphHandler> GraphHandler;
	UEdGraphNode* RootNode;
	TSharedPtr<FEdGraphFormatter> GraphFormatter;

public:
	TSet<UEdGraphNode*> IgnoredNodes;
	TSet<UEdGraphNode*> FormattedInputNodes;
	TSet<UEdGraphNode*> FormattedOutputNodes;
	TSet<UEdGraphNode*> AllFormattedNodes;

	bool bInitialized = false;

	bool bCenterBranches;
	int NumRequiredBranches;

	FNodeRelativeMapping NodeRelativeMapping;

	FCommentHandler CommentHandler;

	virtual FCommentHandler* GetCommentHandler() override { return &CommentHandler; }

	virtual FEdGraphFormatterParameters& GetFormatterParameters() override;

	virtual UEdGraphNode* GetRootNode() override { return RootNode; }

	FEdGraphParameterFormatter(
		TSharedPtr<FCrimeForgeGraphHandler> InGraphHandler,
		UEdGraphNode* InRootNode,
		TSharedPtr<FEdGraphFormatter> InGraphFormatter = nullptr,
		UEdGraphNode* InNodeToKeepStill = nullptr);

	virtual ~FEdGraphParameterFormatter() override { }

	virtual void FormatNode(UEdGraphNode* Node) override;

	virtual TSet<UEdGraphNode*> GetFormattedNodes() override;

	void SetIgnoredNodes(TSet<UEdGraphNode*> InIgnoredNodes)
	{
		IgnoredNodes = MoveTemp(InIgnoredNodes);
	}

	FSlateRect GetBounds();

	FSlateRect GetParameterBounds();

	void ExpandByHeight();

	void SaveRelativePositions();

	bool IsUsingHelixing() const { return bFormatWithHelixing; }

	virtual void SetNodeY_KeepingSpacingVisited(UEdGraphNode* Node, float NewPosY, TSet<UEdGraphNode*>& VisitedNodes) override;

	virtual TSet<UEdGraphNode*> GetRowAndChildren(UEdGraphNode* Node) override;

	bool IsSameRow(const FPinLink& PinLink) const { return SameRowMapping.Contains(PinLink); }

	TArray<UEdGraphNode*> GetSameRowNodes(UEdGraphNode* Node);

	TMap<FPinLink, bool> SameRowMapping;

	virtual bool ShouldIgnoreComment(TSharedPtr<FCrimeForgeCommentContainsNode> Comment) override;

private:
	bool bFormatWithHelixing;

	TMap<UEdGraphNode*, TSharedPtr<FNodeInfo>> NodeInfoMap;

	bool DoesHelixingApply();

	UEdGraphNode* NodeToKeepStill;

	FIntPoint Padding;

	TMap<FCrimeForgeGraphPinHandle, FCrimeForgeGraphPinHandle> SameRowMappingDirect;

	TMap<UEdGraphNode*, FVector2D> NodeOffsets;

	TArray<FPinLink> Path;

	void ProcessSameRowMapping(UEdGraphNode* CurrentNode,
								UEdGraphPin* CurrentPin,
								UEdGraphPin* ParentPin,
								TSet<UEdGraphNode*>& VisitedNodes);

	void FormatX();

	void FormatY(
		const FPinLink& CurrentLink,
		TSet<UEdGraphNode*>& VisitedNodes,
		bool bSameRow,
		TSet<UEdGraphNode*>& Children);

	void CenterBranches(UEdGraphNode* CurrentNode, const TArray<ChildBranch>& ChildBranches, const TSet<UEdGraphNode*>& NodesToCollisionCheck);

	int32 GetChildX(const FPinLink& Link,
					const EEdGraphPinDirection Direction) const;

	bool AnyLinkedImpureNodes() const;

	void MoveBelowBaseline(TSet<UEdGraphNode*> Nodes, int Baseline);

	void DebugPrintFormatted();

	void SimpleRelativeFormatting();

	FSlateRect GetNodeBounds(UEdGraphNode* Node);

	void ApplyCommentPaddingX();
	void ApplyCommentPaddingX_Recursive(TArray<UEdGraphNode*> NodeSet, TArray<TSharedPtr<FCrimeForgeCommentContainsNode>> ContainsNodes, TArray<FPinLink>& OutLeafLinks);

	void ApplyCommentPaddingY();
	void ApplyCommentPaddingY_Recursive(TArray<UEdGraphNode*> NodeSet, TArray<TSharedPtr<FCrimeForgeCommentContainsNode>> ContainsNodes);

	bool ShouldFormatNode(UEdGraphNode* Node);
	bool ShouldFormatLink(const FPinLink& Link);
};
