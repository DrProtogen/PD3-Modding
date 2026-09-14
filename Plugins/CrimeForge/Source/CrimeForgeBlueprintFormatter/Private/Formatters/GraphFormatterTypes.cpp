

#include "Formatters/GraphFormatterTypes.h"
#include "CrimeForgeFormatterGlobals.h"

#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeFormatterSettings.h"
#include "CrimeForgeFormatterUtils.h"
#include "Formatters/EdGraphFormatter.h"
#include "EdGraphNode_Comment.h"
#include "Widgets/CrimeForgeGraphOverlay.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "Editor/BlueprintGraph/Classes/K2Node_Knot.h"
#include "Runtime/SlateCore/Public/Layout/SlateRect.h"

FNodeInfo::FNodeInfo(
	UEdGraphNode* InNode,
	UEdGraphPin* InPin,
	TSharedPtr<FNodeInfo> InParent,
	UEdGraphPin* InParentPin,
	const EEdGraphPinDirection InDirection)
	: Node(InNode)
	, Pin(InPin)
	, Direction(InDirection)
	, Children(TArray<TSharedPtr<FNodeInfo>>())
{
	Link = FPinLink(InParentPin, InPin);
}

void FNodeInfo::SetParent(TSharedPtr<FNodeInfo> NewParent, UEdGraphPin* MyPin)
{
	Pin = MyPin;

	if (Parent.IsValid())
	{
		Parent->Children.Remove(SharedThis(this));
	}

	if (NewParent.IsValid() && NewParent != Parent)
	{
		NewParent->Children.Add(SharedThis(this));
	}

	Parent = NewParent;
}

int32 FNodeInfo::GetChildX(
	UEdGraphNode* Child,
	TSharedPtr<FCrimeForgeGraphHandler> GraphHandler,
	int32 PaddingX,
	const EEdGraphPinDirection ChildDirection) const
{
	const FSlateRect MyBounds = FCrimeForgeFormatterUtils::GetCachedNodeBounds(GraphHandler, Node);

	const float ChildWidth = FCrimeForgeFormatterUtils::GetCachedNodeBounds(GraphHandler, Child).GetSize().X;

	const float NewNodePos
		= ChildDirection == EGPD_Input
		? MyBounds.Left - ChildWidth - PaddingX - 1
		: MyBounds.Right + PaddingX + 1;

	return FMath::RoundToInt(NewNodePos);
}

bool FNodeInfo::DetectCycle(TSharedPtr<FNodeInfo> OtherInfo)
{
	TArray<TSharedPtr<FNodeInfo>> PendingInfos;
	PendingInfos.Add(OtherInfo);

	while (PendingInfos.Num() > 0)
	{
		TSharedPtr<FNodeInfo> NextInfo = PendingInfos.Pop();
		for (TSharedPtr<FNodeInfo> Child : NextInfo->Children)
		{
			if (Child == SharedThis(this))
			{
				return true;
			}

			PendingInfos.Add(Child);
		}
	}

	return false;
}

TArray<UEdGraphNode*> FNodeInfo::GetAllChildNodes()
{
	TArray<UEdGraphNode*> OutChildren;

	// const auto& FilterByDirection = [Direction](TSharedPtr<FFormatXInfo> Info)
	// {
	// 	return Info->Link.GetDirection() == Direction || Direction == EGPD_MAX;
	// };
	TArray<TSharedPtr<FNodeInfo>> PendingInfo = Children.Array();

	while (PendingInfo.Num() > 0)
	{
		TSharedPtr<FNodeInfo> CurrentInfo = PendingInfo.Pop();
		if (OutChildren.Contains(CurrentInfo->GetNode()))
		{
			break;
		}

		OutChildren.Push(CurrentInfo->GetNode());

		for (TSharedPtr<FNodeInfo> Info : CurrentInfo->Children)
		{
			PendingInfo.Push(Info);
		}
	}

	return OutChildren;
}

void FNodeInfo::MoveChildren(
	TSharedPtr<FNodeInfo> Info,
	TSharedPtr<FCrimeForgeGraphHandler> GraphHandler,
	int32 PaddingX,
	TSet<UEdGraphNode*>& TempVisited) const
{
	for (TSharedPtr<FNodeInfo> Child : Info->Children)
	{
		if (TempVisited.Contains(Child->Node))
		{
			continue;
		}

		TempVisited.Add(Child->Node);

		Child->Node->NodePosX = Info->GetChildX(Child->Node, GraphHandler, PaddingX, Child->Direction);
		MoveChildren(Child, GraphHandler, PaddingX, TempVisited);
	}
}

FString FNodeInfo::ToString() const
{
	UEdGraphNode* ParentNode = Parent.IsValid() ? Parent->Node : nullptr;

	return FString::Printf(
		TEXT("NodeInfo <%s> | Par <%s>"),
		*Node->GetNodeTitle(ENodeTitleType::ListView).ToString(),
		ParentNode ? *FCrimeForgeFormatterUtils::GetNodeName(ParentNode) : *FString("null")
	);
}

TArray<UEdGraphNode*> FNodeInfo::GetChildNodes()
{
	TArray<UEdGraphNode*> ChildNodes;
	for (TSharedPtr<FNodeInfo> Info : Children)
	{
		ChildNodes.Emplace(Info->Node);
	}

	return ChildNodes;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

bool FEdGraphFormatterParameters::IsValidNode(UEdGraphNode* Node) const
{
	const bool bPassesLimitedNodes = LimitedNodes.Get().IsEmpty() || LimitedNodes.Get().Contains(Node);
	return bPassesLimitedNodes && !IgnoredNodes.Get().Contains(Node);
}

void FEdGraphFormatterParameters::InitIgnoredPins(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler)
{
	if (TSharedPtr<SGraphPanel> GraphPanel = GraphHandler->GetGraphPanel())
	{
		for (auto Node : GraphHandler->GetFocusedEdGraph()->Nodes)
		{
			if (TSharedPtr<SGraphNode> GraphNode = FCrimeForgeFormatterUtils::GetGraphNode(GraphPanel, Node))
			{
				for (UEdGraphPin* Pin : Node->Pins)
				{
					FCrimeForgeNodePinHandle PinHandle = FCrimeForgeNodePinHandle(Pin);
					if (PinHandle.IsValid())
					{
						TSharedPtr<SGraphPin> GraphPin = FCrimeForgeFormatterUtils::GetGraphPin(GraphNode, Pin);
						if (!GraphPin.IsValid())
						{
							IgnoredPins.Add(Pin);
						}
					}
				}
			}
		}
	}
}

bool FEdGraphFormatterParameters::IsValidLink(const FPinLink& Link) const
{
	return !IgnoredPins.Contains(Link.GetFromPinUnsafe()) && !IgnoredPins.Contains(Link.GetToPinUnsafe());
}

bool FEdGraphFormatterParameters::IsValidPin(UEdGraphPin* Pin) const
{
	return !IgnoredPins.Contains(Pin);
}

UEdGraphPin* FPinLink::GetFromPin()
{
	return FromHandle.GetPin();
}

UEdGraphPin* FPinLink::GetToPin()
{
	return ToHandle.GetPin();
}

UEdGraphNode* FPinLink::GetFromNode()
{
	if (UEdGraphPin* Pin = GetFromPin())
	{
		return Pin->GetOwningNodeUnchecked();
	}

	return nullptr;
}

UEdGraphNode* FPinLink::GetToNode()
{
	if (UEdGraphPin* Pin = GetToPin())
	{
		return Pin->GetOwningNodeUnchecked();
	}

	return nullptr;
}

UEdGraphNode* FPinLink::GetNode() const
{
	return To == nullptr ? FallbackNode : To->GetOwningNodeUnchecked();
}

void FPinLink::Invalidate()
{
	From = nullptr;
	To = nullptr;
	FallbackNode = nullptr;
	FromHandle = nullptr;
	ToHandle = nullptr;
	FromNodePinHandle = nullptr;
	ToNodePinHandle = nullptr;
}

bool FPinLink::HasBothPins()
{
	return GetFromPin() != nullptr && GetToPin() != nullptr;
}

EEdGraphPinDirection FPinLink::GetDirection() const
{
	return From != nullptr ? From->Direction.GetValue() : EGPD_Output;
}

FString FPinLink::ToString()
{
	return FString::Printf(
		TEXT("%s: \"%s\" > \"%s\""),
		*(GetDirection() == EGPD_Input ? FString("In") : FString("Out")),
		*FCrimeForgeFormatterUtils::GetPinName(GetFromPin(), true),
		*FCrimeForgeFormatterUtils::GetPinName(GetToPin(), true)
	);
}

FString FPinLink::ToStringConst() const
{
	UEdGraphNode* ParentNode = From == nullptr ? nullptr : From->GetOwningNodeUnchecked();
	return FString::Printf(
		TEXT("%s: <%s> to <%s> | Pin <%s> to <%s> "),
		*(GetDirection() == EGPD_Input ? FString("In") : FString("Out")),
		*FCrimeForgeFormatterUtils::GetNodeName(ParentNode),
		*FCrimeForgeFormatterUtils::GetNodeName(GetNode()),
		*FCrimeForgeFormatterUtils::GetPinName(From),
		*FCrimeForgeFormatterUtils::GetPinName(To)
	);
}

bool FPinLink::ArePinsVisible(TSharedPtr<SGraphPanel> Panel)
{
	return FCrimeForgeFormatterUtils::IsPinVisible(Panel, GetFromPin()) && FCrimeForgeFormatterUtils::IsPinVisible(Panel, GetToPin()); 
}

bool FPinLink::ArePinsVisibleUnsafe(TSharedPtr<SGraphPanel> Panel) const
{
	return FCrimeForgeFormatterUtils::IsPinVisible(Panel, From) && FCrimeForgeFormatterUtils::IsPinVisible(Panel, To);
}

bool FPinLink::IsLinked(bool bDirectional)
{
	UEdGraphPin* FromPin = GetFromPin();
	UEdGraphPin* ToPin = GetToPin();

	if (!FromPin || !ToPin)
	{
		return false;
	}

	if (FromPin->LinkedTo.Contains(ToPin))
	{
		return true;
	}

	if (!bDirectional)
	{
		return ToPin->LinkedTo.Contains(FromPin);
	}

	return false;
}

FFormatXInfo::FFormatXInfo(const FPinLink& InLink, TSharedPtr<FFormatXInfo> InParent)
	: Link(InLink)
	, Parent(InParent)
	, Node(nullptr)
{
}

UEdGraphNode* FFormatXInfo::GetNode() const
{
	return Link.GetNode();
}

void FFormatXInfo::SetParent(TSharedPtr<FFormatXInfo> NewParent)
{
	if (Parent.IsValid())
	{
		Parent->Children.Remove(AsShared());
	}

	if (NewParent.IsValid())
	{
		//const FString OldParent
		//	= Parent != nullptr
		//	? *FCrimeForgeFormatterUtils::GetNodeName(Parent->GetNode())
		//	: FString("None");
		//UE_LOG(
		//	LogCrimeForgeBlueprintFormatter,
		//	Warning,
		//	TEXT("\tSet Parent for %s to %s (Old : %s)"),
		//	*FCrimeForgeFormatterUtils::GetNodeName(GetNode()),
		//	*FCrimeForgeFormatterUtils::GetNodeName(NewParent->GetNode()),
		//	*OldParent);

		NewParent->Children.Add(AsShared());
	}

	Parent = NewParent;
}

void FFormatXInfo::SetParentNew(TSharedPtr<FFormatXInfo> NewParent, FPinLink NewLink)
{
	SetParent(NewParent);
	Link = NewLink;
}

TArray<UEdGraphNode*> FFormatXInfo::GetChildren(EEdGraphPinDirection Direction, bool bInitialDirectionOnly) const
{
	TArray<UEdGraphNode*> OutChildren;

	const auto& FilterByDirection = [Direction](TSharedPtr<FFormatXInfo> Info)
	{
		return Info->Link.GetDirection() == Direction || Direction == EGPD_MAX;
	};
	TArray<TSharedPtr<FFormatXInfo>> PendingInfo = Children.FilterByPredicate(FilterByDirection);

	while (PendingInfo.Num() > 0)
	{
		TSharedPtr<FFormatXInfo> CurrentInfo = PendingInfo.Pop();
		if (OutChildren.Contains(CurrentInfo->GetNode()))
		{
			continue;
		}

		OutChildren.Push(CurrentInfo->GetNode());

		for (TSharedPtr<FFormatXInfo> Info : bInitialDirectionOnly ? CurrentInfo->Children : CurrentInfo->Children.FilterByPredicate(FilterByDirection))
		{
			PendingInfo.Push(Info);
		}
	}

	return OutChildren;
}

TArray<UEdGraphNode*> FFormatXInfo::GetChildrenWithFilter(TFunctionRef<bool(TSharedPtr<FFormatXInfo>)> Filter, EEdGraphPinDirection Direction, bool bInitialDirectionOnly) const
{
	TArray<UEdGraphNode*> OutChildren;

	const auto& FilterByDirection = [Direction](TSharedPtr<FFormatXInfo> Info)
	{
		return Info->Link.GetDirection() == Direction || Direction == EGPD_MAX;
	};
	TArray<TSharedPtr<FFormatXInfo>> PendingInfo = Children.FilterByPredicate(FilterByDirection);

	while (PendingInfo.Num() > 0)
	{
		TSharedPtr<FFormatXInfo> CurrentInfo = PendingInfo.Pop();
		if (OutChildren.Contains(CurrentInfo->GetNode()))
		{
			continue;
		}

		if (Filter(CurrentInfo))
		{
			continue;
		}

		OutChildren.Push(CurrentInfo->GetNode());

		for (TSharedPtr<FFormatXInfo> Info : bInitialDirectionOnly ? CurrentInfo->Children : CurrentInfo->Children.FilterByPredicate(FilterByDirection))
		{
			PendingInfo.Push(Info);
		}
	}

	return OutChildren;
}

TArray<UEdGraphNode*> FFormatXInfo::GetImmediateChildren() const
{
	TArray<UEdGraphNode*> OutChildren;
	for (TSharedPtr<FFormatXInfo> Child : Children)
	{
		OutChildren.Add(Child->GetNode());
	}
	return OutChildren;
}

TArray<TSharedPtr<FFormatXInfo>> FFormatXInfo::GetAllChildren(EEdGraphPinDirection Direction)
{
	TSet<TSharedPtr<FFormatXInfo>> OutChildren;

	const auto& FilterByDirection = [Direction](TSharedPtr<FFormatXInfo> Info)
	{
		return Info->Link.GetDirection() == Direction || Direction == EGPD_MAX;
	};

	TArray<TSharedPtr<FFormatXInfo>> PendingInfo = Children.FilterByPredicate(FilterByDirection);

	while (PendingInfo.Num() > 0)
	{
		TSharedPtr<FFormatXInfo> CurrentInfo = PendingInfo.Pop();
		if (!FilterByDirection(CurrentInfo))
		{
			continue;
		}

		if (OutChildren.Contains(CurrentInfo))
		{
			UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("FFormatXInfo::GetAllChildren - Detected child loop"));
			continue;
		}

		OutChildren.Add(CurrentInfo);
		PendingInfo.Append(CurrentInfo->GetChildInfos());
	}

	return OutChildren.Array();
}

TArray<TSharedPtr<FFormatXInfo>> FFormatXInfo::GetAllChildrenWithFilter(TFunctionRef<bool(TSharedPtr<FFormatXInfo>)> Filter, EEdGraphPinDirection Direction)
{
	TSet<TSharedPtr<FFormatXInfo>> OutChildren;

	const auto& FilterByDirection = [Direction](TSharedPtr<FFormatXInfo> Info)
	{
		return Info->Link.GetDirection() == Direction || Direction == EGPD_MAX;
	};

	TArray<TSharedPtr<FFormatXInfo>> PendingInfo = Children.FilterByPredicate(FilterByDirection);

	while (PendingInfo.Num() > 0)
	{
		TSharedPtr<FFormatXInfo> CurrentInfo = PendingInfo.Pop();
		if (!FilterByDirection(CurrentInfo))
		{
			continue;
		}

		if (!Filter(CurrentInfo))
		{
			continue;
		}

		if (OutChildren.Contains(CurrentInfo))
		{
			UE_LOG(LogTemp, Error, TEXT("DETECTED CHILDREN LOOP"));
			continue;
		}

		OutChildren.Add(CurrentInfo);
		PendingInfo.Append(CurrentInfo->GetChildInfos());
	}

	return OutChildren.Array();
}

TArray<FPinLink> FFormatXInfo::GetChildrenAsLinks(EEdGraphPinDirection Direction) const
{
	TArray<FPinLink> OutLinks;
	for (TSharedPtr<FFormatXInfo> Child : Children)
	{
		if (Child->Link.GetDirection() == Direction)
		{
			OutLinks.Add(Child->Link);
		}
	}
	return OutLinks;
}

TSharedPtr<FFormatXInfo> FFormatXInfo::GetRootParent()
{
	TSet<TSharedPtr<FFormatXInfo>> Visited;
	TSharedPtr<FFormatXInfo> Next = SharedThis(this);
	while (Next->Parent.IsValid())
	{
		if (Visited.Contains(Next))
		{
			return nullptr;
		}
		Visited.Add(Next);

		Next = Next->Parent;
	}

	return Next;
}

FString FFormatXInfo::ToString() const
{
	return Link.ToStringConst();
}

void FNodeRelativeMapping::UpdateRelativeY(UEdGraphNode* Node, UEdGraphNode* Root)
{
	FNodeRelativeLocation& NodeRelative = NodeRelativeYMap.FindOrAdd(Node);
	FNodeRelativeLocation& RootRelative = NodeRelativeYMap.FindOrAdd(Root);

	// update the old relative info
	if (NodeRelative.RootNode)
	{
		if (auto OldRelative = NodeRelativeYMap.Find(NodeRelative.RootNode))
		{
			OldRelative->Children.Remove(Node);
		}
	}

	NodeRelative.RootNode = Root;
	NodeRelative.RelativeOffset = Root->NodePosY - Node->NodePosY;

	RootRelative.Children.Add(Node);
}

void FNodeRelativeMapping::DebugRelativeMapping() const
{
	for (TTuple<UEdGraphNode*, FNodeRelativeLocation> RelativeYMap : NodeRelativeYMap)
	{
		UE_LOG(LogTemp, Warning, TEXT("PARENT %s"), *FCrimeForgeFormatterUtils::GetNodeName(RelativeYMap.Key));

		for (UEdGraphNode* Child : RelativeYMap.Value.Children)
		{
			UE_LOG(LogTemp, Warning, TEXT("\tCHILD %s"), *FCrimeForgeFormatterUtils::GetNodeName(Child));

			// draw line between parent and child
			if (auto GraphHandler = FCrimeForgeFormatterUtils::GetCurrentGraphHandler())
			{
				if (auto Overlay = GraphHandler->GetGraphOverlay())
				{
					Overlay->DrawLine(
						FCrimeForgeFormatterUtils::GetNodePosition(RelativeYMap.Key),
						FCrimeForgeFormatterUtils::GetNodePosition(Child),
						FLinearColor::MakeRandomColor());
				}
			}
		}
	}
}

TMap<FGuid, TSet<FPinLink>> FFormatterConnectionValidator::BuildConnections(const TArray<UEdGraphNode*>& Nodes)
{
	TMap<FGuid, TSet<FPinLink>> ConnectionsMap;
	for (UEdGraphNode* Node : Nodes)
	{
		if (!FCrimeForgeFormatterUtils::IsKnotNode(Node))
		{
			ConnectionsMap.Add(Node->NodeGuid, TSet<FPinLink>(FCrimeForgeFormatterUtils::GetPinLinksIgnoringKnots(Node)));
		}
	}

	return ConnectionsMap;
}

bool FFormatterConnectionValidator::CheckChanged(UEdGraph* Graph)
{
	check(Graph != nullptr);
	bool bChanged = false;

	TSet<FGuid> OldNodes;
	Connections.GetKeys(OldNodes);

	TArray<UEdGraphNode*> ValidNodes;
	for (const FGuid& NodeGuid : OldNodes)
	{
		if (UEdGraphNode* Node = FCrimeForgeFormatterUtils::GetNodeFromGraph(Graph, NodeGuid))
		{
			ValidNodes.Add(Node);
		}
		else
		{
			UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("Formatting has caused node to be removed from graph %s"), *NodeGuid.ToString());
			bChanged = true;
		}
	}

	TMap<FGuid, TSet<FPinLink>> NewConnections = BuildConnections(ValidNodes);

	// check connections
	for (UEdGraphNode* ValidNode : ValidNodes)
	{
		const FGuid& NodeGuid = ValidNode->NodeGuid;

		TSet<FPinLink> OldLinks = Connections.FindRef(NodeGuid);
		TSet<FPinLink> NewLinks = NewConnections.FindRef(NodeGuid);

		if (OldLinks.Num() != NewLinks.Num() || OldLinks.Difference(NewLinks).Num() > 0)
		{
			for (FPinLink& Difference : OldLinks.Difference(NewLinks))
			{
				UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("Formatting has disconnected node connection %s"), *Difference.ToString());
			}

			for (FPinLink& Difference : NewLinks.Difference(OldLinks))
			{
				UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("Formatting has added node connection %s"), *Difference.ToString());
			}

			bChanged = true;
		}
	}

	if (bChanged)
	{
		UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("Formatting changed Blueprint node connections unexpectedly."));
	}

	return bChanged;
}
