

#include "Formatters/CrimeForgeCommentContainsGraph.h"
#include "CrimeForgeFormatterGlobals.h"

#include "Formatters/CrimeForgeCommentHandler.h"
#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeFormatterStats.h"
#include "CrimeForgeFormatterUtils.h"
#include "EdGraphNode_Comment.h"
#include "Formatters/FormatterInterface.h"
#include "Widgets/CrimeForgeGraphOverlay.h"

struct FCrimeForgeCompareHighestNodeHeight
{
	FORCEINLINE bool operator()(TSharedPtr<FCrimeForgeCommentContainsNode> A, TSharedPtr<FCrimeForgeCommentContainsNode> B) const
	{
		return A->Height > B->Height;
	}
};

TArray<UEdGraphNode*> FCrimeForgeCommentContainsNode::GetAllOwnedNodesWithoutComments()
{
	return AllContainedNodes.FilterByPredicate([](UEdGraphNode* Node)
	{
		return Node && !Node->IsA(UEdGraphNode_Comment::StaticClass());
	});
}

void FCrimeForgeCommentContainsNode::GetSubTree(TSet<UEdGraphNode*>& OutNodes, const bool bIncludeSelf)
{
	if (bIncludeSelf)
	{
		OutNodes.Add(Comment);
	}

	OutNodes.Append(AllContainedNodes);
	// OutNodes.Append(Nodes);

	for (TSharedPtr<FCrimeForgeCommentContainsNode> Child : Children)
	{
		Child->GetSubTree(OutNodes);
	}
}

FString FCrimeForgeCommentContainsNode::ToString()
{
	return FString::Printf(TEXT("%s P:%d C:%d H:%d"), *FCrimeForgeFormatterUtils::GetNodeName(Comment), Parents.Num(), Children.Num(), Height);
}

void FCrimeForgeCommentContainsGraph::Init(TSharedPtr<FCrimeForgeGraphHandler> InGraphHandler)
{
	GraphHandler = InGraphHandler;
	ContainsGraph.Reset();
	Padding = UCrimeForgeFormatterSettings::Get().CommentNodePadding;

	// SortedCommentNodes.Sort([&](const UEdGraphNode_Comment& A, const UEdGraphNode_Comment& B)
	// {
	// 	return A.GetNodesUnderComment().Num() > B.GetNodesUnderComment().Num();
	// });
}

void FCrimeForgeCommentContainsGraph::BuildCommentTree()
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("FCrimeForgeCommentContainsGraph::BuildCommentTree"), STAT_CommentContainsGraph_BuildCommentTree, STATGROUP_BA_EdGraphFormatter);

	// UE_LOG(LogTemp, Warning, TEXT("BUILD COMMENT TREE!"));

	if (ContainsGraph.Num() > 0)
	{
		return;
	}

	TArray<UEdGraphNode_Comment*> AllCommentNodes = FCrimeForgeFormatterUtils::GetCommentNodesFromGraph(GraphHandler->GetFocusedEdGraph());
	ContainsGraph.Reserve(AllCommentNodes.Num());

	for (UEdGraphNode_Comment* Comment : AllCommentNodes)
	{
		TSharedRef<FCrimeForgeCommentContainsNode> NewNode = MakeShared<FCrimeForgeCommentContainsNode>();
		NewNode->Comment = Comment;
		ContainsGraph.Add(Comment, NewNode);
	}

	SetHeight();

	SortedCommentNodes.Reserve(AllCommentNodes.Num());
	for (auto Kvp : ContainsGraph)
	{
		SortedCommentNodes.Add(Kvp.Value);
	}

	SortedCommentNodes.Sort(FCrimeForgeCompareHighestNodeHeight());

	// save raw comments too
	Comments.Reserve(AllCommentNodes.Num());
	for (TSharedPtr<FCrimeForgeCommentContainsNode> SortedNode : SortedCommentNodes)
	{
		Comments.Add(SortedNode->Comment);
	}

	for (UEdGraphNode_Comment* Comment : AllCommentNodes)
	{
		if (!ContainsGraph.Contains(Comment))
		{
			// UE_LOG(LogTemp, Warning, TEXT("MISSING COMMENT %s"), *Comment->GetName());
			continue;
		}
		TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode = ContainsGraph[Comment];

		TArray<UEdGraphNode*> NodesUnderComment = FCrimeForgeFormatterUtils::GetNodesUnderComment(Comment);

		// TODO useful feature at times but it's currently buggy and can be misleading to know what is actually in the comment
		if (false)
		{
			const TArray<UEdGraphNode*> MissingNodes = FCommentHandler::GetMissingNodes(NodesUnderComment).Array();
			NodesUnderComment.Append(MissingNodes);
		}

		for (UEdGraphNode* UnderComment : NodesUnderComment)
		{
			ContainsNode->AllContainedNodesWithComments.Add(UnderComment);
			NodeContainingMap.FindOrAdd(UnderComment).Add(ContainsNode);

			if (!UnderComment->IsA(UEdGraphNode_Comment::StaticClass()))
			{
				ContainsNode->AllContainedNodes.Add(UnderComment);
			}
		}
	}

	{
		TSet<TSharedPtr<FCrimeForgeCommentContainsNode>> PendingNodes(SortedCommentNodes);
		while (PendingNodes.Num())
		{
			AssignParentsAndChildren(PendingNodes.Array()[0], PendingNodes);
		}
	}

	{
		TSet<TSharedPtr<FCrimeForgeCommentContainsNode>> PendingNodes(SortedCommentNodes);
		while (PendingNodes.Num())
		{
			TSet<UEdGraphNode*> Visited;
			AssignOwnedNodes(PendingNodes.Array()[0], PendingNodes, Visited);
		}
	}

	RootNodes = FContainsNodeSet(SortedCommentNodes.FilterByPredicate([](TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode)
	{
		return ContainsNode->Parents.Num() == 0;
	}));
}

void FCrimeForgeCommentContainsGraph::AssignParentsAndChildren(TSharedPtr<FCrimeForgeCommentContainsNode> CurrentNode, TSet<TSharedPtr<FCrimeForgeCommentContainsNode>>& PendingNodes)
{
	if (!PendingNodes.Contains(CurrentNode))
	{
		return;
	}

	PendingNodes.Remove(CurrentNode);

	// UE_LOG(LogTemp, Warning, TEXT("BUILDING RELATION %s"), *CurrentNode->ToString());

	// get child nodes from all contained nodes
	TArray<TSharedPtr<FCrimeForgeCommentContainsNode>> ChildNodes;
	for (UEdGraphNode* Node : CurrentNode->AllContainedNodesWithComments)
	{
		if (UEdGraphNode_Comment* Comment = Cast<UEdGraphNode_Comment>(Node))
		{
			if (!ContainsGraph.Contains(Comment))
			{
				// UE_LOG(LogTemp, Warning, TEXT("MISSING COMMENT %s > %s"), *CurrentNode->ToString(), *Comment->GetName());
				continue;
			}
			ChildNodes.Add(ContainsGraph[Comment]);
		}
	}

	// sort by highest height
	ChildNodes.Sort(FCrimeForgeCompareHighestNodeHeight());

	for (TSharedPtr<FCrimeForgeCommentContainsNode> Child : ChildNodes)
	{
		if (Child->Parents.Num() == 0 || (CurrentNode->Height - Child->Height == 1))
		{
			// take as child
			CurrentNode->Children.Add(Child);
			Child->Parents.Add(CurrentNode);
			// UE_LOG(LogTemp, Warning, TEXT("TAKE AS CHILD %s > %s"), *CurrentNode->ToString(), *Child->ToString());
		}

		AssignParentsAndChildren(Child, PendingNodes);
	}
}

void FCrimeForgeCommentContainsGraph::AssignOwnedNodes(TSharedPtr<FCrimeForgeCommentContainsNode> CurrentNode, TSet<TSharedPtr<FCrimeForgeCommentContainsNode>>& PendingNodes, TSet<UEdGraphNode*>& VisitedNodes)
{
	if (!PendingNodes.Contains(CurrentNode))
	{
		return;
	}

	PendingNodes.Remove(CurrentNode);

	VisitedNodes.Add(CurrentNode->Comment);

	for (TSharedPtr<FCrimeForgeCommentContainsNode> Child : CurrentNode->Children)
	{
		AssignOwnedNodes(Child, PendingNodes, VisitedNodes);
	}

	// our children have taken the other nodes, so the 'owned nodes' are the leftovers
	for (UEdGraphNode* ContainedNode : CurrentNode->AllContainedNodes)
	{
		if (VisitedNodes.Contains(ContainedNode))
		{
			continue;
		}

		VisitedNodes.Add(ContainedNode);

		CurrentNode->OwnedNodes.Add(ContainedNode);
	}
}

void FCrimeForgeCommentContainsGraph::SetHeight()
{
	FContainsNodeSet Visited;
	for (auto& Kvp : ContainsGraph)
	{
		SetHeight(Kvp.Value, Visited);
	}
}

int FCrimeForgeCommentContainsGraph::SetHeight(TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode, FContainsNodeSet& Visited)
{
	if (Visited.Contains(ContainsNode))
	{
		return ContainsNode->Height;
	}

	Visited.Add(ContainsNode);

	if (ContainsNode->Height >= 0)
	{
		return ContainsNode->Height;
	}

	int MyHeight = 0;

	for (UObject* NodeUnder : ContainsNode->Comment->GetNodesUnderComment())
	{
		if (UEdGraphNode_Comment* CommentUnder = Cast<UEdGraphNode_Comment>(NodeUnder))
		{
			if (TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNodeUnder = ContainsGraph.FindRef(CommentUnder))
			{
				MyHeight = FMath::Max(MyHeight, 1 + SetHeight(ContainsNodeUnder, Visited));
			}
		}
	}

	ContainsNode->Height = MyHeight;

	return MyHeight;
}

TOptional<FSlateRect> FCrimeForgeCommentContainsGraph::GetCommentBounds(UEdGraphNode_Comment* CommentNode, TSet<UEdGraphNode_Comment*>& IgnoredComments, UEdGraphNode* NodeAsking, TSet<UEdGraphNode*>& VisitedNodes)
{
	if (VisitedNodes.Contains(CommentNode))
	{
		return TOptional<FSlateRect>();
	}

	VisitedNodes.Add(CommentNode);

	TSharedPtr<FCrimeForgeCommentContainsNode> TreeNode = GetNode(CommentNode);

	TOptional<FSlateRect> ContainedNodesBounds;

	// UE_LOG(LogTemp, Warning, TEXT("Getting bounds for %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode));

	// expand bounds for our child comments
	for (TSharedPtr<FCrimeForgeCommentContainsNode> ChildNode : TreeNode->Children)
	{
		if (IgnoredComments.Contains(ChildNode->Comment))
		{
			VisitedNodes.Add(ChildNode->Comment);
			// UE_LOG(LogTemp, Warning, TEXT("SKIP IGNORED %s > %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode), *FCrimeForgeFormatterUtils::GetNodeName(ChildNode->Comment));
			continue;
		}

		if (ChildNode->Comment->GetNodesUnderComment().Num() == 0)
		{
			// UE_LOG(LogTemp, Warning, TEXT("SKIP EMPTY %s > %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode), *FCrimeForgeFormatterUtils::GetNodeName(ChildNode->Comment));
			continue;
		}

		// skip if this comment contains node asking
		if (ChildNode->AllContainedNodes.Contains(NodeAsking))
		{
			// UE_LOG(LogTemp, Warning, TEXT("SKIP NODEASKING %s > %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode), *FCrimeForgeFormatterUtils::GetNodeName(ChildNode->Comment));
			continue;
		}

		if (TOptional<FSlateRect> CommentBounds = GetCommentBounds(ChildNode->Comment, IgnoredComments, NodeAsking, VisitedNodes))
		{
			ContainedNodesBounds = ContainedNodesBounds ? ContainedNodesBounds->Expand(CommentBounds.GetValue()) : CommentBounds;
			// UE_LOG(LogTemp, Warning, TEXT("Added child bounds %s > %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode), *FCrimeForgeFormatterUtils::GetNodeName(ChildNode->Comment));
		}
		else
		{
			// UE_LOG(LogTemp, Warning, TEXT("Skipped child bounds %s > %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode), *FCrimeForgeFormatterUtils::GetNodeName(ChildNode->Comment));
		}
	}

	// expand bounds for our contained nodes
	for (UEdGraphNode* Node : TreeNode->AllContainedNodes)
	{
		if (VisitedNodes.Contains(Node))
		{
			continue;
		}

		VisitedNodes.Add(Node);

		if (FCrimeForgeFormatterUtils::IsNodeDeleted(Node))
		{
			continue;
		}

		// UE_LOG(LogTemp, Warning, TEXT("Expanding regular node bounds for %s > %s"), *FCrimeForgeFormatterUtils::GetNodeName(CommentNode), *FCrimeForgeFormatterUtils::GetNodeName(Node));
		const FSlateRect NodeBounds = FCrimeForgeFormatterUtils::GetCachedNodeBounds(GraphHandler, Node);
		ContainedNodesBounds = ContainedNodesBounds ? ContainedNodesBounds->Expand(NodeBounds) : NodeBounds;
	}

	// UE_LOG(LogCrimeForgeBlueprintFormatter, Warning, TEXT("\t\tContainedNodeBounds %s | Padding %s"), *ContainedNodesBounds.ToString(), *CommentPadding.GetDesiredSize().ToString());

	if (ContainedNodesBounds)
	{
		const float TitlebarHeight = FCrimeForgeFormatterUtils::GetCachedNodeBounds(GraphHandler, CommentNode, true).GetSize().Y;
		const FMargin CommentPadding(Padding.X, Padding.Y + TitlebarHeight, Padding.X, Padding.Y);
		ContainedNodesBounds = ContainedNodesBounds->ExtendBy(CommentPadding);
	}

	return ContainedNodesBounds;
}

void FCrimeForgeCommentContainsGraph::DrawBounds()
{
	TSet<UEdGraphNode_Comment*> Ignored;
	TSet<UEdGraphNode*> Visited;

	for (TSharedPtr<FCrimeForgeCommentContainsNode> Node : SortedCommentNodes)
	{
		Visited.Reset();
		if (auto CommentBounds = GetCommentBounds(Node->Comment, Ignored, nullptr, Visited))
		{
			FCrimeForgeGraphOverlayBounds Param;
			Ignored.Reset();
			Param.Bounds = CommentBounds.GetValue();
			Param.Color = FLinearColor::MakeRandomColor();
			GraphHandler->GetGraphOverlay()->DrawBounds(Param);
		}
	}
}

void FCrimeForgeCommentContainsGraph::AddNodeIntoComment(UEdGraphNode_Comment* Comment, UEdGraphNode* Node)
{
	TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode = GetNode(Comment);

	// update all contained map
	ContainsNode->AllContainedNodes.Add(Node);
	ContainsNode->AllContainedNodesWithComments.Add(Node);

	// update node containing map
	NodeContainingMap.FindOrAdd(Node).Add(ContainsNode);

	// find our owning node
	TSharedPtr<FCrimeForgeCommentContainsNode> NewOwnedNode = nullptr;
	if (TArray<TSharedPtr<FCrimeForgeCommentContainsNode>>* ContainNodes = NodeContainingMap.Find(Node))
	{
		int SmallestHeight = 999;

		for (TSharedPtr<FCrimeForgeCommentContainsNode> ContainNode : *ContainNodes)
		{
			// first remove from our old owned
			ContainNode->OwnedNodes.Remove(Node);

			if (SmallestHeight > ContainNode->Height)
			{
				SmallestHeight = ContainNode->Height;
				NewOwnedNode = ContainNode;
			}
		}

		NewOwnedNode->OwnedNodes.Add(Node);
	}
}

void FCrimeForgeCommentContainsGraph::DeleteNode(UEdGraphNode* Node)
{
	if (TArray<TSharedPtr<FCrimeForgeCommentContainsNode>>* ContainNodes = NodeContainingMap.Find(Node))
	{
		for (auto ContainNode : *ContainNodes)
		{
			ContainNode->OwnedNodes.Remove(Node);
			ContainNode->AllContainedNodes.Remove(Node);
			ContainNode->AllContainedNodesWithComments.Remove(Node);
		}

		NodeContainingMap.Remove(Node);
	}
}

TSharedPtr<FCrimeForgeCommentContainsGraph> FCrimeForgeCommentContainsGraph::BuildSubsetGraph(const TSet<UEdGraphNode_Comment*>& CommentSubset)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("FCrimeForgeCommentContainsGraph::BuildSubsetGraph"), STAT_CommentContainsGraph_BuildSubsetGraph, STATGROUP_BA_EdGraphFormatter);

	TSharedPtr<FCrimeForgeCommentContainsGraph> SubsetGraph = MakeShared<FCrimeForgeCommentContainsGraph>();
	SubsetGraph->Init(GraphHandler);

	for (TSharedPtr<FCrimeForgeCommentContainsNode> SortedNode : SortedCommentNodes)
	{
		// initialize contains nodes for new graph
		if (CommentSubset.Contains(SortedNode->Comment))
		{
			TSharedRef<FCrimeForgeCommentContainsNode> SubsetNode = MakeShared<FCrimeForgeCommentContainsNode>();
			SubsetNode->Comment = SortedNode->Comment;
			SubsetNode->Height = SortedNode->Height; // TODO this height is not correct!
			SubsetGraph->ContainsGraph.Add(SortedNode->Comment, SubsetNode);
			SubsetGraph->SortedCommentNodes.Add(SubsetNode);
			SubsetGraph->Comments.Add(SortedNode->Comment);
		}
	}

	// assign parents and children for new graph
	TArray<TSharedPtr<FCrimeForgeCommentContainsNode>> PendingNodes = SortedCommentNodes;
	while (PendingNodes.Num())
	{
		FContainsNodeSet Visited;
		AssignSubsetParentsAndChildren(PendingNodes[0], nullptr, PendingNodes, SubsetGraph, Visited);
	}

	// init node containing map
	for (TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode : SubsetGraph->SortedCommentNodes)
	{
		for (UEdGraphNode* UnderComment : ContainsNode->AllContainedNodes)
		{
			SubsetGraph->NodeContainingMap.FindOrAdd(UnderComment).Add(ContainsNode);
		}
	}

	// init root nodes
	SubsetGraph->RootNodes = FContainsNodeSet(SubsetGraph->SortedCommentNodes.FilterByPredicate([](TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode)
	{
		return ContainsNode->Parents.Num() == 0;
	}));

	return SubsetGraph;
}

TSet<UEdGraphNode_Comment*> FCrimeForgeCommentContainsGraph::GetContainingCommentsForNode(UEdGraphNode* Node)
{
	TSet<UEdGraphNode_Comment*> OutComments;
	for (TSharedPtr<FCrimeForgeCommentContainsNode> ContainsNode : NodeContainingMap.FindRef(Node))
	{
		OutComments.Add(ContainsNode->Comment);
	}

	return OutComments;
}

void FCrimeForgeCommentContainsGraph::AssignSubsetParentsAndChildren(
	TSharedPtr<FCrimeForgeCommentContainsNode> CurrentNode,
	TSharedPtr<FCrimeForgeCommentContainsNode> LastValidParent,
	TArray<TSharedPtr<FCrimeForgeCommentContainsNode>>& PendingNodes,
	TSharedPtr<FCrimeForgeCommentContainsGraph> SubsetGraph,
	FContainsNodeSet& VisitedNodes)
{
	// UE_LOG(LogTemp, Warning, TEXT("Iterating %s"), *CurrentNode->ToString());
	if (VisitedNodes.Contains(CurrentNode))
	{
		return;
	}

	VisitedNodes.Add(CurrentNode);

	PendingNodes.Remove(CurrentNode);

	const bool bIsValidNode = SubsetGraph->Comments.Contains(CurrentNode->Comment);

	// this node is valid, copy nodes and assign relationship
	if (bIsValidNode)
	{
		TSharedPtr<FCrimeForgeCommentContainsNode> SubsetNode = SubsetGraph->GetNode(CurrentNode->Comment);
		SubsetNode->OwnedNodes = CurrentNode->OwnedNodes;
		SubsetNode->AllContainedNodes = CurrentNode->AllContainedNodes;
		SubsetNode->AllContainedNodesWithComments = CurrentNode->AllContainedNodesWithComments.FilterByPredicate([&SubsetGraph = SubsetGraph](UEdGraphNode* Node)
		{
			if (UEdGraphNode_Comment* Comment = Cast<UEdGraphNode_Comment>(Node))
			{
				return SubsetGraph->Comments.Contains(Comment);
			}

			return true;
		});

		// assign relationship to last valid parent
		if (LastValidParent)
		{
			LastValidParent->Children.Add(SubsetNode);
			SubsetNode->Parents.Add(LastValidParent);
		}

		LastValidParent = SubsetNode;
	}
	// this node is invalid, give our owned nodes to the last valid parent
	else if (LastValidParent)
	{
		LastValidParent->OwnedNodes.Append(CurrentNode->OwnedNodes);
	}

	for (TSharedPtr<FCrimeForgeCommentContainsNode> Child : CurrentNode->Children)
	{
		AssignSubsetParentsAndChildren(Child, LastValidParent, PendingNodes, SubsetGraph, VisitedNodes);
	}
}

void FCrimeForgeCommentContainsGraph::LogGraph()
{
	UE_LOG(LogTemp, Error, TEXT("~~~LOG GRAPH~~~"));
	for (auto Node : RootNodes)
	{
		UE_LOG(LogTemp, Warning, TEXT("Contains graph root node %s"), *Node->ToString());
	}

	for (auto& Kvp : ContainsGraph)
	{
		TSharedPtr<FCrimeForgeCommentContainsNode> Node = Kvp.Value;
		UE_LOG(LogTemp, Warning, TEXT("Comment tree node %s %d"), *Node->ToString(), Node->Height);

		for (auto& Child : Node->Parents)
		{
			UE_LOG(LogTemp, Warning, TEXT("\tParent Comments %s"), *FCrimeForgeFormatterUtils::GetNodeName(Child->Comment));
		}

		for (auto& Child : Node->Children)
		{
			UE_LOG(LogTemp, Warning, TEXT("\tChild Comments %s"), *FCrimeForgeFormatterUtils::GetNodeName(Child->Comment));
		}

		for (auto& Child : Node->AllContainedNodes)
		{
			UE_LOG(LogTemp, Warning, TEXT("\tAll contained Nodes %s"), *FCrimeForgeFormatterUtils::GetNodeName(Child));
		}

		for (auto& Child : Node->OwnedNodes)
		{
			UE_LOG(LogTemp, Warning, TEXT("\tOwned Nodes %s"), *FCrimeForgeFormatterUtils::GetNodeName(Child));
		}
	}

	for (auto ContainsNode : SortedCommentNodes)
	{
		FCrimeForgeFormatterUtils::PrintNodeArray(ContainsNode->AllContainedNodes, FString::Printf(TEXT("Under %s"), *ContainsNode->ToString()));
	}
	UE_LOG(LogTemp, Error, TEXT("~~~END LOG GRAPH~~~"));
}
