


#include "GraphHandler/FormatRequest.h"
#include "CrimeForgeFormatterGlobals.h"

#include "CrimeForgeFormatterCache.h"
#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeFormatterUtils.h"
#include "BlueprintEditor.h"
#include "K2Node_ComponentBoundEvent.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_FunctionEntry.h"
#include "K2Node_FunctionResult.h"
#include "K2Node_Knot.h"
#include "K2Node_Tunnel.h"
#include "SGraphPanel.h"
#include "Formatters/FormatterLayoutUtils.h"
#include "Formatters/EdGraphFormatter.h"
#include "Formatters/FormatterInterface.h"
#include "Misc/CrimeForgeGraphSchema.h"
#include "Widgets/CrimeForgeGraphOverlay.h"
#include "EdGraph/EdGraph.h"
#include "Kismet2/BlueprintEditorUtils.h"

FCrimeForgeFormatRequest::FCrimeForgeFormatRequest(FCrimeForgeGraphHandler& InGH)
	: GH(InGH)
{
	
}

void FCrimeForgeFormatRequest::RequestFormatAll()
{
	UEdGraph* EdGraph = GH.GetFocusedEdGraph();
	if (EdGraph == nullptr)
	{
		return;
	}

	FormatterParameters.Reset();
	FormatterParameters.InitIgnoredPins(GH.AsShared());

	const UCrimeForgeFormatterSettings& FormatterSettings = UCrimeForgeFormatterSettings::GetFormatterSettings(EdGraph);
	bool bIsBlueprintFormatting = FormatterSettings.FormatterType == ECrimeForgeFormatterType::Blueprint;

	const ECrimeForgeFormatAllStyle FormatAllStyle = UCrimeForgeFormatterSettings::Get().FormatAllStyle;

	TArray<TWeakObjectPtr<UEdGraphNode>> ExtraNodes;
	TArray<TWeakObjectPtr<UEdGraphNode>> CustomEvents;
	TArray<TWeakObjectPtr<UEdGraphNode>> InputEvents;
	TArray<TWeakObjectPtr<UEdGraphNode>> ActorEvents;
	TArray<TWeakObjectPtr<UEdGraphNode>> ComponentEvents;
	TArray<TWeakObjectPtr<UEdGraphNode>> OtherEvents;

	for (UEdGraphNode* Node : EdGraph->Nodes)
	{
		if (GH.GetNodeData(Node).bLocked)
		{
			continue;
		}

		if (UCrimeForgeFormatterSettings::Get().FormatAllStyle == ECrimeForgeFormatAllStyle::NodeType)
		{
			if (FCrimeForgeFormatterUtils::IsExtraRootNode(Node))
			{
				ExtraNodes.Add(Node);
			}
			else if (Node->IsA(UK2Node_CustomEvent::StaticClass()))
			{
				CustomEvents.Add(Node);
			}
			else if (FCrimeForgeFormatterUtils::IsInputNode(Node))
			{
				InputEvents.Add(Node);
			}
			else if (Node->IsA(UK2Node_ComponentBoundEvent::StaticClass()))
			{
				ComponentEvents.Add(Node);
			}
			else if (Node->IsA(UK2Node_Event::StaticClass()))  
			{
				ActorEvents.Add(Node);
			}
			else if (FCrimeForgeFormatterUtils::IsEventNode(Node) || (bIsBlueprintFormatting && IsBlueprintRootNode(Node, false)))
			{
				OtherEvents.Add(Node);
			}
		}
		else
		{
			if (FCrimeForgeFormatterUtils::IsEventNode(Node) || FCrimeForgeFormatterUtils::IsExtraRootNode(Node) || (bIsBlueprintFormatting && IsBlueprintRootNode(Node, false)))
			{
				OtherEvents.Add(Node);
			}
		}
	}

	if (FormatAllStyle == ECrimeForgeFormatAllStyle::NodeType)
	{
		// TODO: Add setting to allow for user-defined columns
		FormatAllColumns = {
			ExtraNodes,
			ActorEvents,
			CustomEvents,
			InputEvents,
			ComponentEvents,
			OtherEvents
		};
	}
	else
	{
		FormatAllColumns = { OtherEvents };
	}

	const auto ExtraRootNodeSorter = [](TWeakObjectPtr<UEdGraphNode> NodeA, TWeakObjectPtr<UEdGraphNode> NodeB)
	{
		return FCrimeForgeFormatterUtils::GetPinsByDirection(NodeA.Get(), EGPD_Input).Num() < FCrimeForgeFormatterUtils::GetPinsByDirection(NodeB.Get(), EGPD_Input).Num();
	};

	const auto TopMostSorter = [](const TWeakObjectPtr<UEdGraphNode>& NodeA, const TWeakObjectPtr<UEdGraphNode>& NodeB)
	{
		if (!NodeA.IsValid())
		{
			return false;
		}

		if (!NodeB.IsValid())
		{
			return true;
		}

		return NodeA.Get()->NodePosY < NodeB.Get()->NodePosY;
	};

	bool bHasNodeToFormat = false;

	for (int i = 0; i < FormatAllColumns.Num(); ++i)
	{
		TArray<TWeakObjectPtr<UEdGraphNode>>& Column = FormatAllColumns[i];
		Column.RemoveAll([](TWeakObjectPtr<UEdGraphNode>& Node)
		{
			return !Node.IsValid();
		});

		for (TWeakObjectPtr<UEdGraphNode> WeakPtr : Column)
		{
			if (WeakPtr.IsValid())
			{
				UEdGraphNode* Node = WeakPtr.Get();

				TSet<UEdGraphNode*> NodeTree = FCrimeForgeFormatterUtils::GetNodeTree(Node);
				GH.UpdateNodeSizesChanges(NodeTree.Array());
			}
		}

		if (!bHasNodeToFormat && Column.Num() > 0)
		{
			bHasNodeToFormat = true;
		}

		// TODO: Handle extra root nodes properly
		if ((i == 0) && (FormatAllStyle == ECrimeForgeFormatAllStyle::NodeType))
		{
			ExtraNodes.StableSort(ExtraRootNodeSorter);
		}
		else
		{
			Column.Sort(TopMostSorter);
		}
	}

	if (bHasNodeToFormat)
	{
		FormatAllTransaction = MakeShared<FCrimeForgeScopedGraphAction>(GH.GetFocusedEdGraph(), "Format All Nodes");
	}
}

void FCrimeForgeFormatRequest::UpdateNodesRequiringFormatting()
{
	if (GH.HasPendingNodeSizeWork())
	{
		return;
	}

	RunFormatting();
}


bool FCrimeForgeFormatRequest::IsBlueprintRootNode(UEdGraphNode* Node, bool bOnlyOutputRoots)
{
	// blueprint nodes
	{
		if (Node->IsA(UK2Node_Event::StaticClass()))
		{
			return true;
		}

		if (FCrimeForgeFormatterUtils::IsInputNode(Node))
		{
			return true;
		}
	}

	// function entry / result
	{
		if (Node->IsA(UK2Node_FunctionEntry::StaticClass()))
		{
			return true;
		}

		if (!bOnlyOutputRoots && Node->IsA(UK2Node_FunctionResult::StaticClass()))
		{
			return true;
		}
	}

	// macros
	if (Node->GetClass() == UK2Node_Tunnel::StaticClass())
	{
		// tunnel node could be instance of a macro, to find the "root" node of a macro check if it can't be removed from the graph
		if (!Node->CanUserDeleteNode()) 
		{
			if (!bOnlyOutputRoots)
			{
				return true;
			}

			return FCrimeForgeFormatterUtils::GetLinkedPins(Node, EGPD_Output).Num() > 0;
		}
	}

	return false;
}

void FCrimeForgeFormatRequest::Reset()
{
	FormatAllColumns.Reset();
	FormatterParameters.Reset();


	ResetTransactions();
}

UEdGraphNode* FCrimeForgeFormatRequest::FindRootNode(UEdGraphNode* InitialNode)
{
	TSharedPtr<FFormatterInterface> Formatter = MakeFormatter();
	if (!Formatter.IsValid())
	{
		return nullptr;
	}

	const UCrimeForgeFormatterSettings& FormatterSettings = Formatter->GetFormatterSettings();
	EEdGraphPinDirection FormatterDirection = FormatterSettings.FormatterDirection;

	const auto OppositeDirection = UEdGraphPin::GetComplementaryDirection(FormatterDirection);

	const auto NodeTreeFilter = [&](const FPinLink& Link)
	{
		return FormatterParameters.IsValidNode(Link.GetToNodeUnsafe())
			&& FCrimeForgeFormatterLayoutUtils::FilterDelegateLink(Link)
			&& FormatterParameters.IsValidLink(Link);
	};

	TSet<UEdGraphNode*> NodeTree = FCrimeForgeFormatterUtils::GetNodeTreeWithFilter(InitialNode, NodeTreeFilter);

	const bool bIsParameterTree = !NodeTree.Array().ContainsByPredicate(FCrimeForgeFormatterUtils::IsNodeImpure);
	if (bIsParameterTree)
	{
		const auto Filter = [&](const FPinLink& Link)
		{
			UEdGraphNode* Node = Link.GetToNodeUnsafe();
			return FCrimeForgeFormatterUtils::IsNodePure(Node)
				&& !FCrimeForgeFormatterUtils::IsKnotNode(Node)
				&& FormatterParameters.IsValidNode(Node)
				&& FormatterParameters.IsValidLink(Link);
		};

		// get the right-most pure node
		return FCrimeForgeFormatterUtils::GetTopMostWithFilter(InitialNode, EGPD_Output, Filter);
	}

	/* TODO consider if BlueprintInputRoots are needed, it seems to cause issues to select an
	  * Input root node for BP (which is not a parameter tree) */
	// TArray<UEdGraphNode*> BlueprintInputRoots;

	TArray<UEdGraphNode*> InputTunnel;
	TArray<UEdGraphNode*> BlueprintOutputRoots;
	TArray<UEdGraphNode*> EventNodes;
	TArray<UEdGraphNode*> UnlinkedNodes;
	TArray<UEdGraphNode*> RootNodes;
	TArray<UEdGraphNode*> ImpureNodes;

	for (UEdGraphNode* Node : NodeTree)
	{
		// UE_LOG(LogTemp, Warning, TEXT("Checking Node %s"), *FCrimeForgeFormatterUtils::GetNodeName(Node));
		if (FCrimeForgeFormatterUtils::IsKnotNode(Node))
		{
			continue;
		}

		if (FormatterSettings.FormatterType == ECrimeForgeFormatterType::Blueprint)
		{
			if (IsBlueprintRootNode(Node, true))
			{
				// prioritize input tunnel nodes (for macros / collapsed graphs)
				EGraphType GraphType = FCrimeForgeFormatterUtils::GetGraphType(Node->GetGraph());
				if (GraphType == GT_Ubergraph || GraphType == GT_Macro)
				{
					if (Node->GetClass() == UK2Node_Tunnel::StaticClass())
					{
						return Node;
					}
				}

				BlueprintOutputRoots.Add(Node);
			}
		}

		if (FCrimeForgeFormatterUtils::IsExtraRootNode(Node) && FCrimeForgeFormatterUtils::DoesNodeHaveExecutionTo(InitialNode, Node))
		{
			// UE_LOG(LogTemp, Warning, TEXT("\tRoot node EXTRA %s"), *FCrimeForgeFormatterUtils::GetNodeName(Node));
			RootNodes.Add(Node);
			continue;
		}

		if (FCrimeForgeFormatterUtils::IsNodeImpure(Node))
		{
			ImpureNodes.Add(Node);

			if (FCrimeForgeFormatterUtils::IsEventNode(Node, FormatterDirection) && FCrimeForgeFormatterUtils::DoesNodeHaveExecutionTo(InitialNode, Node))
			{
				// UE_LOG(LogTemp, Warning, TEXT("\tRoot node EVENT %s"), *FCrimeForgeFormatterUtils::GetNodeName(Node));
				EventNodes.Add(Node);
				continue;
			}

			TArray<UEdGraphPin*> LinkedInputPins = FCrimeForgeFormatterUtils::GetLinkedPins(Node, OppositeDirection).FilterByPredicate(FCrimeForgeFormatterUtils::IsExecPin);

			if ((LinkedInputPins.Num() == 0) && FCrimeForgeFormatterUtils::DoesNodeHaveExecutionTo(InitialNode, Node))
			{
				// UE_LOG(LogTemp, Warning, TEXT("\tRoot node UNLINKED %s"), *FCrimeForgeFormatterUtils::GetNodeName(Node));
				UnlinkedNodes.Emplace(Node);
			}
		}
	}

	const auto& IsNotLinkedToStart = [&InitialNode](UEdGraphNode* A)
	{
		return !FCrimeForgeFormatterUtils::DoesNodeHaveExecutionTo(InitialNode, A);
	};

	BlueprintOutputRoots.RemoveAll(IsNotLinkedToStart);

	// UE_LOG(LogCrimeForgeBlueprintFormatter, Log, TEXT("BP Out %d Events %d Unlinked %d Root %d"), BlueprintOutputRoots.Num(), EventNodes.Num(), UnlinkedNodes.Num(), RootNodes.Num());
	if (EventNodes.IsEmpty() && UnlinkedNodes.IsEmpty() && RootNodes.IsEmpty() && BlueprintOutputRoots.IsEmpty())
	{
		// prefer executable / impure nodes 
		UEdGraphNode* StartNode = InitialNode; 
		if (ImpureNodes.Num() > 0)
		{
			StartNode = ImpureNodes[0];
		}

		const auto Filter = [&](UEdGraphNode* Node)
		{
			return FormatterParameters.IsValidNode(Node) && FCrimeForgeFormatterUtils::IsNodeImpure(Node);
		};

		UEdGraphNode* NodeInDirection = FCrimeForgeFormatterUtils::GetTopMostWithFilter(StartNode, OppositeDirection, Filter);

		// UE_LOG(LogCrimeForgeBlueprintFormatter, Warning, TEXT("Node in dir %s (Orig %s) (Dir %d)"), *FCrimeForgeFormatterUtils::GetNodeName(NodeInDirection), *FCrimeForgeFormatterUtils::GetNodeName(StartNode), OppositeDirection);

		const TArray<UEdGraphNode*> Visited = { NodeInDirection };
		while (UK2Node_Knot* Knot = Cast<UK2Node_Knot>(NodeInDirection))
		{
			const auto& LinkedOut = Knot->GetOutputPin()->LinkedTo;
			if (LinkedOut.Num() > 0)
			{
				auto NextNode = LinkedOut[0]->GetOwningNode();
				if (Visited.Contains(NextNode))
				{
					break;
				}

				NodeInDirection = NextNode;
			}
		}

		return NodeInDirection;
	}

	const auto& SortByDirection = [&FormatterDirection](const UEdGraphNode& A, const UEdGraphNode& B)
	{
		if (FormatterDirection == EGPD_Output) // sort left to right
		{
			if (A.NodePosX != B.NodePosX)
			{
				return A.NodePosX < B.NodePosX;
			}
		}
		else // sort right to left
		{
			if (A.NodePosX != B.NodePosX)
			{
				return A.NodePosX > B.NodePosX;
			}
		}

		// sort top to bottom
		return A.NodePosY < B.NodePosY;
	};

	if (BlueprintOutputRoots.Num() > 0) // use the top left most blueprint root node
	{
		FormatterDirection = EGPD_Output;
		BlueprintOutputRoots.Sort(SortByDirection);
		return BlueprintOutputRoots[0];
	}

	if (RootNodes.Num() > 0)
	{
		RootNodes.StableSort(SortByDirection);
		return RootNodes[0];
	}

	if (EventNodes.Num() > 0) // use the top left most event node
	{
		EventNodes.Sort(SortByDirection);
		return EventNodes[0];
	}

	if (UnlinkedNodes.Contains(InitialNode))
	{
		return InitialNode;
	}

	if (UnlinkedNodes.Num() > 0)
	{
		// use the top left most unlinked node
		UnlinkedNodes.Sort(SortByDirection);
		return UnlinkedNodes[0];
	}

	UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("[%hs] No root node found"), __FUNCTION__);
	return nullptr;
}

TSharedPtr<FFormatterInterface> FCrimeForgeFormatRequest::MakeFormatter()
{
	UEdGraph* EdGraph = GH.GetFocusedEdGraph();
	if (!EdGraph || !FCrimeForgeFormatterUtils::IsBlueprintGraph(EdGraph, false))
	{
		return nullptr;
	}

	return MakeShared<FEdGraphFormatter>(GH.AsShared(), FormatterParameters);
}


bool FCrimeForgeFormatRequest::HasActiveTransaction() const
{
	return FormatAllTransaction.IsValid() && FormatAllTransaction->IsOutstanding();
}

TSharedPtr<FFormatterInterface> FCrimeForgeFormatRequest::FormatNodes(UEdGraphNode* Node, bool bUsingFormatAll)
{
	if (!GH.GetGraphPanel().IsValid() || !FCrimeForgeFormatterUtils::IsGraphNode(Node))
	{
		return nullptr;
	}

	UEdGraph* EdGraph = GH.GetFocusedEdGraph();
	if (!EdGraph || FBlueprintEditorUtils::IsGraphReadOnly(EdGraph))
	{
		return nullptr;
	}

	for (UEdGraphNode* EdNode : EdGraph->Nodes)
	{
		if (EdNode && GH.GetNodeData(EdNode).bLocked)
		{
			FormatterParameters.IgnoredNodes.Add(EdNode);
		}
	}

	FormatterParameters.InitIgnoredPins(GH.AsShared());
	UEdGraphNode* NodeToFormat = FindRootNode(Node);
	if (!NodeToFormat)
	{
		UE_LOG(LogCrimeForgeBlueprintFormatter, Warning, TEXT("Unable to format Blueprint graph: no root node found."));
		return nullptr;
	}

	if (!FormatterParameters.MasterContainsGraph)
	{
		FormatterParameters.MasterContainsGraph = MakeShared<FCrimeForgeCommentContainsGraph>();
		FormatterParameters.MasterContainsGraph->Init(GH.AsShared());
		FormatterParameters.MasterContainsGraph->BuildCommentTree();
	}

	TSharedPtr<FFormatterInterface> Formatter = MakeShared<FEdGraphFormatter>(GH.AsShared(), FormatterParameters);
	if (!Formatter.IsValid())
	{
		return nullptr;
	}

	if (!bUsingFormatAll)
	{
		PreFormatting();
	}

	Formatter->PreFormatting();
	Formatter->FormatNode(NodeToFormat);
	Formatter->PostFormatting();

	if (!bUsingFormatAll)
	{
		PostFormatting({ Formatter });
	}

	return Formatter;
}


void FCrimeForgeFormatRequest::PreFormatting()
{
	PreFormatNodePositions.Reset();
	if (UEdGraph* Graph = GH.GetFocusedEdGraph())
	{
		for (UEdGraphNode* Node : Graph->Nodes)
		{
			if (Node) PreFormatNodePositions.Add(Node->NodeGuid, FIntPoint(Node->NodePosX, Node->NodePosY));
		}
	}
}


void FCrimeForgeFormatRequest::PostFormatting(const TArray<TSharedPtr<FFormatterInterface>>& Formatters)
{
	PostFormatComments(Formatters);

	TSet<UEdGraphNode*> FormattedNodeSet;

	// update change data
	for (TSharedPtr<FFormatterInterface> FormatterInterface : Formatters)
	{
		for (UEdGraphNode* FormattedNode : FormatterInterface->GetFormattedNodes())
		{
			if (FormattedNode)
			{
				// update gh change data
				GH.UpdateNodeChangeData(FormattedNode);

				// update cache last formatted location
				auto& NodeData = GH.GetNodeData(FormattedNode);
				NodeData.SetLastFormatted(FormattedNode);

				FormattedNodeSet.Add(FormattedNode);

				if (UEdGraphNode* Root = FormatterInterface->GetRootNode())
				{
					NodeData.LastRoot = Root->NodeGuid;
				}
			}
		}
	}

	for (UEdGraphNode* FormattedNode : FormattedNodeSet)
	{
		// the Metasound Graph requires you to move nodes via GraphNode::MoveTo, so it's easier to do it once here
		// certain graph types require you to update node positions via their schema or GraphNode::MoveTo
		if (FIntPoint* PrePosition = PreFormatNodePositions.Find(FormattedNode->NodeGuid))
		{
			int32 NewX = FormattedNode->NodePosX;
			int32 NewY = FormattedNode->NodePosY;

			if (NewX != PrePosition->X || NewY != PrePosition->Y)
			{
				// for undo on control rig to work correctly, reset the position back to what it was pre-formatting then move it again 
				FormattedNode->NodePosX = PrePosition->X;
				FormattedNode->NodePosY = PrePosition->Y;

				GH.GetSchema().SetNodePosition(FormattedNode, NewX, NewY, GH.GetGraphPanel());
			}
		}
		else
		{
			GH.GetSchema().SetNodePosition(FormattedNode, FormattedNode->NodePosX, FormattedNode->NodePosY, GH.GetGraphPanel());
		}
	}

	PreFormatNodePositions.Empty();
	FormatterParameters.Reset();
	GH.ResetTransactions();


	OnPostFormatting.Broadcast();

#if 0
	for (TSharedPtr<FFormatterInterface> Formatter : Formatters)
	{
		TSet<UEdGraphNode*> Nodes = Formatter->GetFormattedNodes();
		if (Nodes.Num())
		{
			GraphOverlay->DrawBounds(FCrimeForgeFormatterUtils::GetNodeArrayBounds(Nodes.Array()));
		}
	}
#endif
}

void FCrimeForgeFormatRequest::PostFormatComments(const TArray<TSharedPtr<FFormatterInterface>>& Formatters) 
{
	if (!FormatterParameters.MasterContainsGraph)
	{
		return;
	}

	TSet<UEdGraphNode_Comment*> AllRelatedComments;
	TSet<UEdGraphNode_Comment*> RelatedComments;
	for (TSharedPtr<FFormatterInterface> FormatterInterface : Formatters)
	{
		if (FCommentHandler* MainCH = FormatterInterface->GetCommentHandler())
		{
			if (MainCH->IsValid())
			{
				AllRelatedComments.Append(MainCH->IgnoredRelatedComments);
				AllRelatedComments.Append(MainCH->GetComments());

				RelatedComments.Append(MainCH->IgnoredRelatedComments);
			}
		}

		for (TSharedPtr<FFormatterInterface> ChildFormatter : FormatterInterface->GetChildFormatters())
		{
			if (FCommentHandler* ChildCH = FormatterInterface->GetCommentHandler())
			{
				if (ChildCH->IsValid())
				{
					AllRelatedComments.Append(ChildCH->IgnoredRelatedComments);
					AllRelatedComments.Append(ChildCH->GetComments());

					RelatedComments.Append(ChildCH->IgnoredRelatedComments);
					for (UEdGraphNode_Comment* Comment : ChildCH->GetComments())
					{
						RelatedComments.Remove(Comment);
					}
				}
			}
		}
	}

	for (UEdGraphNode_Comment* Comment : AllRelatedComments)
	{
		TSet<UEdGraphNode*> Visited;
		TSet<UEdGraphNode_Comment*> Ignored;
		if (TOptional<FSlateRect> Bounds = FormatterParameters.MasterContainsGraph->GetCommentBounds(Comment, Ignored, nullptr, Visited))
		{
			Comment->Modify();
			Comment->SetBounds(*Bounds);
		}
	}

	for (UEdGraphNode_Comment* Comment : RelatedComments)
	{
		TSet<UEdGraphNode*> Visited;
		TSet<UEdGraphNode_Comment*> Ignored;
		if (TOptional<FSlateRect> Bounds = FormatterParameters.MasterContainsGraph->GetCommentBounds(Comment, Ignored, nullptr, Visited))
		{
			Comment->Modify();
			Comment->SetBounds(*Bounds);

		}
	}

}

void FCrimeForgeFormatRequest::RunFormatting()
{
	FormatPendingColumns();
}

void FCrimeForgeFormatRequest::FormatPendingColumns()
{
	if (FormatAllColumns.Num() == 0)
	{
		return;
	}

	// handle format all nodes
	FormatterParameters.MasterContainsGraph = MakeShared<FCrimeForgeCommentContainsGraph>();
	FormatterParameters.MasterContainsGraph->Init(GH.AsShared());
	FormatterParameters.MasterContainsGraph->BuildCommentTree();

	PreFormatting();

	if (UCrimeForgeFormatterSettings::Get().FormatAllStyle == ECrimeForgeFormatAllStyle::Smart)
	{
		SmartFormatAll();
	}
	else
	{
		// this also handles ECrimeForgeFormatAllStyle::NodeType, should separate into another function
		SimpleFormatAll();
	}

	FormatAllColumns.Reset();
	FormatterParameters.Reset();
}

void FCrimeForgeFormatRequest::SimpleFormatAll()
{
	TSharedPtr<FCrimeForgeCommentContainsGraph> MasterContainsGraph = MakeShared<FCrimeForgeCommentContainsGraph>();
	MasterContainsGraph->Init(GH.AsShared());
	MasterContainsGraph->BuildCommentTree();

	TArray<TSharedPtr<FFormatterInterface>> AllFormatterSaved;
	TArray<TSharedPtr<FFormatterInterface>> AllFormatters;

	// format all the nodes
	TSet<UEdGraphNode*> PreviouslyFormattedNodes;

	for (TWeakObjectPtr<UEdGraphNode> WeakPtr : FormatAllColumns[0])
	{
		UEdGraphNode* Node = WeakPtr.Get();
		if (PreviouslyFormattedNodes.Contains(Node))
		{
			continue;
		}

		Node->Modify();

		TSharedPtr<FFormatterInterface> Formatter = FormatNodes(Node, true);
		if (!Formatter.IsValid())
		{
			continue;
		}
		AllFormatterSaved.Add(Formatter);

		PreviouslyFormattedNodes.Append(Formatter->GetFormattedNodes());
	}

	AllFormatters = AllFormatterSaved;

	int NumColumns = 0;
	float ColumnX = 0;

	while (AllFormatters.Num() > 0)
	{
		TArray<TSharedPtr<FFormatterInterface>> AllFormattersCopy = AllFormatters;

		// sort formatted nodes by left most
		AllFormattersCopy.Sort([](TSharedPtr<FFormatterInterface> FormatterA, TSharedPtr<FFormatterInterface> FormatterB)
		{
			UEdGraphNode* RootA = FormatterA->GetRootNode();
			UEdGraphNode* RootB = FormatterB->GetRootNode();
			if (RootA->NodePosX != RootB->NodePosX)
			{
				return RootA->NodePosX < RootB->NodePosX;
			}

			return RootA->NodePosY < RootB->NodePosY;
		});

		TOptional<float> RightMost;
		TArray<TSharedPtr<FFormatterInterface>> CurrentColumn;

		float CommentOffset = 0;

		// create columns by checking for overlapping formatted node-trees
		for (TSharedPtr<FFormatterInterface> Formatter : AllFormattersCopy)
		{
			TSet<UEdGraphNode*> FormatterNodes = Formatter->GetFormattedNodes();
			FSlateRect CommentBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBoundsWithComments(GH.AsShared(), Formatter->GetCommentHandler(), Formatter->GetFormattedNodes().Array());
			FSlateRect NodeBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GH.AsShared(), Formatter->GetFormattedNodes().Array());
			FSlateRect Bounds = UCrimeForgeFormatterSettings::Get().bApplyCommentPadding ? CommentBounds : NodeBounds;

			if (!RightMost.IsSet())
			{
				RightMost = Bounds.Right;
			}
			else if (Bounds.Left < RightMost.GetValue())
			{
				RightMost = FMath::Max(RightMost.GetValue(), Bounds.Right);
			}
			else
			{
				// this node is not in this column, skip it
				continue;
			}

			if (NumColumns > 0)
			{
				CommentOffset = FMath::Max(CommentOffset, NodeBounds.Left - CommentBounds.Left);
			}

			CurrentColumn.Add(Formatter);
			AllFormatters.Remove(Formatter);
		}

		if (TSharedPtr<SCrimeForgeGraphOverlay> Overlay = GH.GetGraphOverlay())
		{
			Overlay->DrawBounds(FCrimeForgeFormatterLayoutUtils::GetFormatterArrayBounds(CurrentColumn, GH.AsShared(), true));
		}

		ColumnX += CommentOffset;

		FormatColumn(CurrentColumn, ColumnX);

		FSlateRect ColumnBounds = FCrimeForgeFormatterLayoutUtils::GetFormatterArrayBounds(CurrentColumn, GH.AsShared(), UCrimeForgeFormatterSettings::Get().bApplyCommentPadding);
		ColumnX = ColumnBounds.Right + UCrimeForgeFormatterSettings::Get().FormatAllPadding.X;
		ColumnX = FCrimeForgeFormatterUtils::AlignTo8x8Grid(ColumnX, ECrimeForgeRoundingMethod::Ceil);
		NumColumns += 1;
	}

	FormatAllColumns.Empty();
	PostFormatting(AllFormatterSaved);
}

void FCrimeForgeFormatRequest::SmartFormatAll()
{
	TSharedPtr<FCrimeForgeCommentContainsGraph> MasterContainsGraph = MakeShared<FCrimeForgeCommentContainsGraph>();
	MasterContainsGraph->Init(GH.AsShared());
	MasterContainsGraph->BuildCommentTree();

	TArray<TSharedPtr<FFormatterInterface>> AllFormatterSaved;
	TArray<TSharedPtr<FFormatterInterface>> AllFormatters;

	// format all the nodes
	TSet<UEdGraphNode*> PreviouslyFormattedNodes;

	for (TWeakObjectPtr<UEdGraphNode> WeakPtr : FormatAllColumns[0])
	{
		UEdGraphNode* Node = WeakPtr.Get();
		if (PreviouslyFormattedNodes.Contains(Node))
		{
			continue;
		}

		Node->Modify();

		TSharedPtr<FFormatterInterface> Formatter = FormatNodes(Node, true);
		if (!Formatter.IsValid())
		{
			continue;
		}
		AllFormatterSaved.Add(Formatter);

		PreviouslyFormattedNodes.Append(Formatter->GetFormattedNodes());
	}

	AllFormatters = AllFormatterSaved;

	int NumColumns = 0;
	float ColumnX = 0;

	while (AllFormatters.Num() > 0)
	{
		TArray<TSharedPtr<FFormatterInterface>> AllFormattersCopy = AllFormatters;

		// sort formatted nodes by left most
		AllFormattersCopy.Sort([](TSharedPtr<FFormatterInterface> FormatterA, TSharedPtr<FFormatterInterface> FormatterB)
		{
			UEdGraphNode* RootA = FormatterA->GetRootNode();
			UEdGraphNode* RootB = FormatterB->GetRootNode();
			if (RootA->NodePosX != RootB->NodePosX)
			{
				return RootA->NodePosX < RootB->NodePosX;
			}

			return RootA->NodePosY < RootB->NodePosY;
		});

		TOptional<float> RightMost;
		TArray<TSharedPtr<FFormatterInterface>> CurrentColumn;

		float CommentOffset = 0;

		// create columns by checking for overlapping formatted node-trees
		for (TSharedPtr<FFormatterInterface> Formatter : AllFormattersCopy)
		{
			TSet<UEdGraphNode*> FormatterNodes = Formatter->GetFormattedNodes();
			FSlateRect CommentBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBoundsWithComments(GH.AsShared(), Formatter->GetCommentHandler(), Formatter->GetFormattedNodes().Array());
			FSlateRect NodeBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GH.AsShared(), Formatter->GetFormattedNodes().Array());
			FSlateRect Bounds = UCrimeForgeFormatterSettings::Get().bApplyCommentPadding ? CommentBounds : NodeBounds;

			if (!RightMost.IsSet())
			{
				RightMost = Bounds.Right;
			}
			else if (Bounds.Left < RightMost.GetValue())
			{
				RightMost = FMath::Max(RightMost.GetValue(), Bounds.Right);
			}
			else
			{
				// this node is not in this column, skip it
				continue;
			}

			if (NumColumns > 0)
			{
				CommentOffset = FMath::Max(CommentOffset, NodeBounds.Left - CommentBounds.Left);
			}

			CurrentColumn.Add(Formatter);
			AllFormatters.Remove(Formatter);
		}

		GH.GetGraphOverlay()->DrawBounds(FCrimeForgeFormatterLayoutUtils::GetFormatterArrayBounds(CurrentColumn, GH.AsShared(), true));

		ColumnX += CommentOffset;

		FormatColumn(CurrentColumn, ColumnX);

		FSlateRect ColumnBounds = FCrimeForgeFormatterLayoutUtils::GetFormatterArrayBounds(CurrentColumn, GH.AsShared(), UCrimeForgeFormatterSettings::Get().bApplyCommentPadding);
		ColumnX = ColumnBounds.Right + UCrimeForgeFormatterSettings::Get().FormatAllPadding.X;
		ColumnX = FCrimeForgeFormatterUtils::AlignTo8x8Grid(ColumnX, ECrimeForgeRoundingMethod::Ceil);
		NumColumns += 1;
	}

	FormatAllColumns.Empty();
	PostFormatting(AllFormatterSaved);
}

void FCrimeForgeFormatRequest::FormatColumn(TArray<TSharedPtr<FFormatterInterface>>& CurrentColumn, float ColumnX)
{
	ColumnX = FCrimeForgeFormatterUtils::SnapToGrid(ColumnX);
	ColumnX = FCrimeForgeFormatterUtils::AlignTo8x8Grid(ColumnX);
	

	// UE_LOG(LogTemp, Warning, TEXT("Column X %f"), ColumnX);

	// Sort the column by height
	CurrentColumn.Sort([](TSharedPtr<FFormatterInterface> FormatterA, TSharedPtr<FFormatterInterface> FormatterB)
	{
		UEdGraphNode* RootA = FormatterA->GetRootNode();
		UEdGraphNode* RootB = FormatterB->GetRootNode();
		if (RootA->NodePosY != RootB->NodePosY)
		{
			return RootA->NodePosY < RootB->NodePosY;
		}

		return RootA->NodePosX < RootB->NodePosX;
	});

	TOptional<FSlateRect> FormattedBounds;
	TSharedPtr<FFormatterInterface> PrevFormatter = nullptr;

	// position the node-trees into columns
	for (TSharedPtr<FFormatterInterface> Formatter : CurrentColumn)
	{
		TArray<UEdGraphNode*> FormattedNodes = Formatter->GetFormattedNodes().Array();

		FSlateRect CommentBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBoundsWithComments(GH.AsShared(), Formatter->GetCommentHandler(), FormattedNodes);
		FSlateRect NodeBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GH.AsShared(), FormattedNodes);

		FSlateRect CurrentBounds = UCrimeForgeFormatterSettings::Get().bApplyCommentPadding ? CommentBounds : NodeBounds;

		// align the position of the formatted nodes to the column
		float Left = 0;
		float Top = 0;

		switch (UCrimeForgeFormatterSettings::Get().FormatAllHorizontalAlignment)
		{
		case ECrimeForgeFormatAllHorizontalAlignment::RootNode:
			{
				Left = NodeBounds.Left;
				Top = NodeBounds.Top;
				break;
			}
		case ECrimeForgeFormatAllHorizontalAlignment::Comment:
			{
				Left = CurrentBounds.Left;
				Top = CurrentBounds.Top;
			}
			break;
		default: ;
		}

		int32 DeltaX = ColumnX - Left;
		// DeltaX = FCrimeForgeFormatterUtils::SnapToGrid(Left + DeltaX) - Left;

		// offset the first formatted node's Y position to zero
		const int32 DeltaY = !FormattedBounds.IsSet() ? 0 - Top : 0;

		for (UEdGraphNode* FormattedNode : FormattedNodes)
		{
			FormattedNode->NodePosX += DeltaX;
			FormattedNode->NodePosY += DeltaY;
		}

		CurrentBounds = UCrimeForgeFormatterSettings::Get().bApplyCommentPadding
			? FCrimeForgeFormatterUtils::GetCachedNodeArrayBoundsWithComments(GH.AsShared(), Formatter->GetCommentHandler(), FormattedNodes)
			: FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GH.AsShared(), FormattedNodes);

		NodeBounds = FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GH.AsShared(), FormattedNodes);

		if (!FormattedBounds.IsSet())
		{
			FormattedBounds = CurrentBounds;
		}
		else
		{
			float VerticalPadding = UCrimeForgeFormatterSettings::Get().FormatAllPadding.Y;

			if (UCrimeForgeFormatterSettings::Get().bUseFormatAllPaddingInComment)
			{
				if (PrevFormatter)
				{
					if (TSharedPtr<FCrimeForgeCommentContainsGraph> CommentGraph = FormatterParameters.MasterContainsGraph)
					{
						const TSet<UEdGraphNode_Comment*> CommentsA = CommentGraph->GetContainingCommentsForNode(Formatter->GetRootNode());
						const TSet<UEdGraphNode_Comment*> CommentsB = CommentGraph->GetContainingCommentsForNode(PrevFormatter->GetRootNode());
						if (CommentsA.Intersect(CommentsB).Num() > 0)
						{
							VerticalPadding = UCrimeForgeFormatterSettings::Get().FormatAllPaddingInComment;
						}
					}
				}
			}
			
			float Bottom = FormattedBounds->Bottom + VerticalPadding;
			Bottom = FCrimeForgeFormatterUtils::AlignTo8x8Grid(Bottom, ECrimeForgeRoundingMethod::Ceil);

			float Delta = Bottom - CurrentBounds.Top;

			float OldRootPos = Formatter->GetRootNode()->NodePosY;
			const float RootNewPos = FCrimeForgeFormatterUtils::AlignTo8x8Grid(OldRootPos + Delta, ECrimeForgeRoundingMethod::Ceil);
			Delta = RootNewPos - OldRootPos;

			for (UEdGraphNode* FormattedNode : FormattedNodes)
			{
				FormattedNode->NodePosY += Delta;
			}

			CurrentBounds = UCrimeForgeFormatterSettings::Get().bApplyCommentPadding
				? FCrimeForgeFormatterUtils::GetCachedNodeArrayBoundsWithComments(GH.AsShared(), Formatter->GetCommentHandler(), FormattedNodes)
				: FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GH.AsShared(), FormattedNodes);

			FormattedBounds = FormattedBounds->Expand(CurrentBounds);
		}

		PrevFormatter = Formatter;

		// UE_LOG(LogCrimeForgeBlueprintFormatter, Warning, TEXT("\t%s"), *FCrimeForgeFormatterUtils::GetNodeName(Formatter->GetRootNode()));
	}
}

void FCrimeForgeFormatRequest::ResetTransactions()
{
	FormatAllTransaction.Reset();
}




