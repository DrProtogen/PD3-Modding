

#pragma once

#include "CoreMinimal.h"
#include "Layout/SlateRect.h"

class UEdGraphNode;
class FCrimeForgeGraphHandler;
class UEdGraphNode_Comment;

struct CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeCommentContainsNode : public TSharedFromThis<FCrimeForgeCommentContainsNode>
{
	UEdGraphNode_Comment* Comment = nullptr;
	TArray<TSharedPtr<FCrimeForgeCommentContainsNode>> Parents;
	TArray<TSharedPtr<FCrimeForgeCommentContainsNode>> Children;
	TArray<UEdGraphNode*> AllContainedNodesWithComments;
	TArray<UEdGraphNode*> AllContainedNodes;
	TArray<UEdGraphNode*> OwnedNodes;
	int Height = -1;

	TArray<UEdGraphNode*> GetAllOwnedNodesWithoutComments();

	void GetSubTree(TSet<UEdGraphNode*>& OutNodes, const bool bIncludeSelf = true);
	FString ToString();

	bool Traverse_DepthFirst(const TFunctionRef<bool(FCrimeForgeCommentContainsNode*)>& Predicate)
	{
		if (!Predicate(this))
		{
			return false;
		}

		for (const TSharedPtr<FCrimeForgeCommentContainsNode>& Child : Children)
		{
			Child->Traverse_DepthFirst(Predicate);
		}

		return true;
	}
};

struct CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeCommentContainsGraph
	: public TSharedFromThis<FCrimeForgeCommentContainsGraph>
{
	using FContainsNodeSet = TSet<TSharedPtr<FCrimeForgeCommentContainsNode>>;
	using FContainsNodeArray = TArray<TSharedPtr<FCrimeForgeCommentContainsNode>>;

	TSharedPtr<FCrimeForgeGraphHandler> GraphHandler;
	FIntPoint Padding;

	TSet<UEdGraphNode_Comment*> Comments;
	FContainsNodeArray SortedCommentNodes;
	FContainsNodeSet RootNodes;

	TMap<UEdGraphNode_Comment*, TSharedPtr<FCrimeForgeCommentContainsNode>> ContainsGraph;
	TMap<UEdGraphNode*, FContainsNodeArray> NodeContainingMap;

	void Init(TSharedPtr<FCrimeForgeGraphHandler> InGraphHandler);
	void BuildCommentTree();

	TSharedPtr<FCrimeForgeCommentContainsNode> GetNode(const UEdGraphNode_Comment* Comment) { return ContainsGraph.FindRef(Comment); }
	TOptional<FSlateRect> GetCommentBounds(UEdGraphNode_Comment* CommentNode, TSet<UEdGraphNode_Comment*>& IgnoredComments, UEdGraphNode* NodeAsking, TSet<UEdGraphNode*>& VisitedNodes);
	void DrawBounds();

	void AddNodeIntoComment(UEdGraphNode_Comment* Comment, UEdGraphNode* Node);
	void DeleteNode(UEdGraphNode* Node);

	TSharedPtr<FCrimeForgeCommentContainsGraph> BuildSubsetGraph(const TSet<UEdGraphNode_Comment*>& CommentSubset);

	TSet<UEdGraphNode_Comment*> GetContainingCommentsForNode(UEdGraphNode* Node);

	void LogGraph();

protected:
	void AssignParentsAndChildren(TSharedPtr<FCrimeForgeCommentContainsNode> CurrentNode, TSet<TSharedPtr<FCrimeForgeCommentContainsNode>>& PendingNodes);
	void AssignOwnedNodes(TSharedPtr<FCrimeForgeCommentContainsNode> CurrentNode, TSet<TSharedPtr<FCrimeForgeCommentContainsNode>>& PendingNodes, TSet<UEdGraphNode*>& VisitedNodes);
	void SetHeight();
	int SetHeight(TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode, FContainsNodeSet& Visited);

	void AssignSubsetParentsAndChildren(
		TSharedPtr<FCrimeForgeCommentContainsNode> CurrentNode, 
		TSharedPtr<FCrimeForgeCommentContainsNode> LastValidParent,
		TArray<TSharedPtr<FCrimeForgeCommentContainsNode>>& PendingNodes,
		TSharedPtr<FCrimeForgeCommentContainsGraph> SubsetGraph,
		FContainsNodeSet& VisitedNodes);
};
