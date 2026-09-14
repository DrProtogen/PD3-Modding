

#include "Formatters/KnotTrack.h"

#include "CrimeForgeFormatterGlobals.h"
#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeFormatterUtils.h"
#include "K2Node_Knot.h"
#include "Formatters/FormatterInterface.h"
#include "Widgets/CrimeForgeGraphOverlay.h"

DEFINE_LOG_CATEGORY(LogKnotTrackCreator);

UEdGraphPin* FKnotNodeCreation::GetPinToConnectTo()
{
	return PinToConnectToHandle.GetPin();
}

TArray<UEdGraphPin*> FKnotNodeCreation::GetPinsToConnectTo() const
{
	TArray<UEdGraphPin*> Pins;// = { GetPinsToConnectTo() };

	for (FCrimeForgeGraphPinHandle Handle : PinHandlesToConnectTo)
	{
		if (auto Pin = Handle.GetPin())
		{
			Pins.Add(Pin);
		}
	}

	return Pins;
}

UK2Node_Knot* FKnotNodeCreation::CreateKnotNode(const FVector2D InKnotPos, UEdGraphPin* PreviousPin, UK2Node_Knot* KnotNodeToReuse, UEdGraph* Graph)
{
	// UE_LOG(LogKnotTrackCreator, Warning, TEXT("Create knot node for pin %s"), *FCrimeForgeFormatterUtils::GetPinName(PreviousPin));

	CreatedKnot = nullptr;

	UEdGraphPin* MainPinToConnectTo = PinToConnectToHandle.GetPin();

	if (KnotNodeToReuse == nullptr)
	{
		CreatedKnot = FCrimeForgeFormatterUtils::CreateKnotNode(Graph, InKnotPos, MainPinToConnectTo, PreviousPin);
	}
	else
	{
		CreatedKnot = KnotNodeToReuse;
		FCrimeForgeFormatterUtils::LinkKnotNodeBetween(KnotNodeToReuse, InKnotPos, MainPinToConnectTo, PreviousPin);
	}

	for (FCrimeForgeGraphPinHandle& PinHandle : PinHandlesToConnectTo)
	{
		if (UEdGraphPin* Pin = PinHandle.GetPin())
		{
			// UE_LOG(LogKnotTrackCreator, Warning, TEXT("\tLinking to pin %s"), *FCrimeForgeFormatterUtils::GetPinName(Pin));

			if (Pin->Direction == EGPD_Input)
			{
				CreatedKnot->GetOutputPin()->MakeLinkTo(Pin);
			}
			else
			{
				CreatedKnot->GetInputPin()->MakeLinkTo(Pin);
			}
		}
		else
		{
			UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("[%hs]: Failed to get pin for handle %s\nPlease report this formatter issue to CrimeForge if you can reproduce it"), __FUNCTION__, *PinHandle.ToString());
		}
	}

	return CreatedKnot;
}

bool FKnotNodeCreation::HasHeightDifference() const
{
	if (KnotToConnectTo.IsValid())
	{
		return FMath::IsNearlyEqual(KnotToConnectTo->KnotPos.Y, KnotPos.Y);
	}

	return false;
}

FString FKnotNodeCreation::ToString()
{
	if (UEdGraphPin* Pin = GetPinToConnectTo())
	{
		return FCrimeForgeFormatterUtils::GetPinName(Pin, true);
	}

	return FString("nullptr");
}

float FKnotNodeTrack::GetTrackHeight()
{
	if (UEdGraphPin* Pin = GetPinToAlignTo())
	{
		return GraphHandler->GetPinY(Pin);
	}

	if (GetParentPin() == nullptr)
	{
		UE_LOG(LogCrimeForgeBlueprintFormatter, Error, TEXT("Knot track has null parent pin. Please report this formatter issue to CrimeForge"));
	}

	return GraphHandler->GetPinY(GetParentPin()) + RelativeTrackHeight;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

FKnotNodeTrack::FKnotNodeTrack(
	TSharedPtr<FFormatterInterface> Formatter,
	TSharedPtr<FCrimeForgeGraphHandler> InGraphHandler,
	UEdGraphPin* InParentPin,
	TArray<UEdGraphPin*> InLinkedTo,
	bool bInIsLoopingTrack)
	: GraphHandler(InGraphHandler)
	, ParentPin(InParentPin)
	, LinkedTo(InLinkedTo)
	, bIsLoopingTrack(bInIsLoopingTrack)
{
	ParentPinPos = FCrimeForgeFormatterUtils::GetPinPos(GraphHandler, InParentPin);

	SetTrackHeight(Formatter);
}

UEdGraphPin* FKnotNodeTrack::GetParentPin()
{
	return ParentPin.GetPin();
}

UEdGraphPin* FKnotNodeTrack::GetLastPin()
{
	return LinkedTo.Num()
		? LinkedTo.Last().GetPin()
		: nullptr;
}

UEdGraphPin* FKnotNodeTrack::GetPinToAlignTo()
{
	return PinToAlignTo.GetPin();
}

FSlateRect FKnotNodeTrack::GetTrackBounds()
{
	const int TrackSpacing = UCrimeForgeFormatterSettings::Get().BlueprintKnotTrackSpacing;
	const float LocalTrackY = GetTrackHeight();
	const float LastPinX = FCrimeForgeFormatterUtils::GetPinPos(GraphHandler, GetLastPin()).X;
	const float TrackXLeft = FMath::Min(ParentPinPos.X, LastPinX) + 5;
	const float TrackXRight = FMath::Max(ParentPinPos.X, LastPinX) - 5;

	return FSlateRect(FVector2D(TrackXLeft, LocalTrackY - (TrackSpacing - 1) * 0.5f),
					FVector2D(TrackXRight, LocalTrackY + (TrackSpacing - 1) * 0.5f));
}

void FKnotNodeTrack::SetTrackHeight(TSharedPtr<FFormatterInterface> Formatter)
{
	const int TrackSpacing = UCrimeForgeFormatterSettings::Get().BlueprintKnotTrackSpacing;
	const TArray<UEdGraphNode*>& AllNodes = Formatter->GetFormattedNodes().Array();

	UEdGraphPin* LastPin = GetLastPin();

	const float TrackStart = GetTrackBounds().Left + 10;
	const float TrackEnd = GetTrackBounds().Right - 10;

	// UE_LOG(LogKnotTrackCreator, Error, TEXT("FindTrackHeight for pin (%s) | Start %f | End %f"), *FCrimeForgeFormatterUtils::GetPinName(ParentPin), TrackStart, TrackEnd);

	if (bIsLoopingTrack)
	{
		const float NewHeight = FMath::Min(GetParentPin()->GetOwningNode()->NodePosY, LastPin->GetOwningNode()->NodePosY) - 1;
		UpdateTrackHeight(NewHeight);
		return;
	}

	// set starting point
	float TestSolution = FMath::Min(GraphHandler->GetPinY(ParentPin.GetPin()), GraphHandler->GetPinY(LastPin));

	// GraphHandler->GetGraphOverlay()->DrawBounds(GetTrackBounds());

	for (int i = 0; i < 100; ++i)
	{
		bool bNoCollisionInDirection = true;
	
		FVector2D StartPoint(TrackStart, TestSolution);
		FVector2D EndPoint(TrackEnd, TestSolution);
	
		for (UEdGraphNode* NodeToCollisionCheck : AllNodes)
		{
			FSlateRect NodeBounds = FCrimeForgeFormatterUtils::GetCachedNodeBounds(GraphHandler, NodeToCollisionCheck).ExtendBy(FMargin(0, TrackSpacing - 1));

			const bool bSkipNode = NodeToCollisionCheck == GetParentPin()->GetOwningNode() || NodeToCollisionCheck == LastPin->GetOwningNode();
			if (!bSkipNode)
			{
				// UE_LOG(LogKnotTrackCreator, Warning, TEXT("Checking collision for node %s | %f %f  | %f"), *FCrimeForgeFormatterUtils::GetNodeName(NodeToCollisionCheck), TrackStart, TrackEnd, TestSolution);
				// UE_LOG(LogKnotTrackCreator, Warning, TEXT("\t%s"), *NodeBounds.ToString());
				// UE_LOG(LogKnotTrackCreator, Warning, TEXT("\t%f %f | %f"), TrackStart, TrackEnd, TestSolution);
	
				if (FCrimeForgeFormatterUtils::LineRectIntersection(NodeBounds, StartPoint, EndPoint))
				{
					// UE_LOG(LogKnotTrackCreator, Error, TEXT("\tNode collision  (%s) (%f) | %s"), *FCrimeForgeFormatterUtils::GetNodeName(NodeToCollisionCheck), TestSolution, *NodeBounds.ToString());
					bNoCollisionInDirection = false;
					TestSolution = NodeBounds.Bottom + 1;
					// GraphHandler->GetGraphOverlay()->DrawBounds(GetTrackBounds(), FLinearColor::Red);
				}
			}
		}
	
		if (bNoCollisionInDirection)
		{
			UpdateTrackHeight(TestSolution);
			break;
		}
	}
}

bool FKnotNodeTrack::IsFloatingTrack()
{
	const bool bSameAsParentPin = RelativeTrackHeight == 0;
	const bool bSameAsLastPin = GetTrackHeight() != FCrimeForgeFormatterUtils::GetPinPos(GraphHandler, GetLastPin()).Y;
	return bSameAsParentPin && bSameAsLastPin;
}

void FKnotNodeTrack::UpdateTrackHeight(const float NewTrackY)
{
	RelativeTrackHeight = NewTrackY - FCrimeForgeFormatterUtils::GetPinPos(GraphHandler, GetParentPin()).Y;
	// UE_LOG(LogTemp, Warning, TEXT("Set relative track height %f"), RelativeTrackHeight);

	for (TSharedPtr<FKnotNodeCreation> Creation : KnotCreations)
	{
		Creation->KnotPos.Y = NewTrackY;
	}
}

TSet<UEdGraphNode*> FKnotNodeTrack::GetNodes(UEdGraph* Graph)
{
	TSet<UEdGraphNode*> OutNodes;
	OutNodes.Add(GetParentPin()->GetOwningNode());

	for (auto& PinHandle : LinkedTo)
	{
		UEdGraphPin* Pin = PinHandle.GetPin();
		if (UEdGraphPin* SafePin = FCrimeForgeFormatterUtils::GetPinFromGraph(Pin, Graph))
		{
			OutNodes.Add(SafePin->GetOwningNode());
		}
	}

	return OutNodes;
}

bool FKnotNodeTrack::DoesTrackOverlapNode(UEdGraphNode* Node)
{
	const FSlateRect Bounds = GetTrackBounds();

	return FCrimeForgeFormatterUtils::LineRectIntersection(
		FCrimeForgeFormatterUtils::GetNodeBounds(Node),
		Bounds.GetTopLeft(),
		Bounds.GetBottomRight());
}

bool FKnotNodeTrack::HasPinToAlignTo()
{
	return PinToAlignTo.GetPin() != nullptr;
}

TArray<UEdGraphNode*> FKnotNodeTrack::GetRelatedNodes()
{
	TArray<UEdGraphNode*> Nodes;
	for (const auto& KnotNodeCreation : KnotCreations)
	{
		for (auto Pin : KnotNodeCreation->GetPinsToConnectTo())
		{
			Nodes.Add(Pin->GetOwningNode());
		}
	}
	return Nodes;
}

FString FKnotNodeTrack::ToString()
{
	return FString::Printf(TEXT("%s (%s) -> %s (%s) (%f) (Align: %s)"),
		*FCrimeForgeFormatterUtils::GetPinName(GetParentPin()),
		*FCrimeForgeFormatterUtils::GetNodeName(GetParentPin()->GetOwningNode()),
		*FCrimeForgeFormatterUtils::GetPinName(GetLastPin()),
		*FCrimeForgeFormatterUtils::GetNodeName(GetLastPin()->GetOwningNode()),
		GetTrackHeight(),
		*FCrimeForgeFormatterUtils::GetPinName(GetPinToAlignTo()));
}

void FKnotNodeTrack::SortCreationNodes()
{
	if (bIsLoopingTrack)
	{
		return;
	}

	const auto CreationSorter = [](TSharedPtr<FKnotNodeCreation> CreationA, TSharedPtr<FKnotNodeCreation> CreationB)
	{
		UEdGraphPin* Pin = CreationA->PinToConnectToHandle.GetPin();

		if (FCrimeForgeFormatterUtils::IsExecOrDelegatePin(Pin))
		{
			return CreationA->KnotPos.X > CreationB->KnotPos.X;
		}

		return CreationA->KnotPos.X < CreationB->KnotPos.X;
	};

	KnotCreations.StableSort(CreationSorter);
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

TArray<UEdGraphNode*> FGroupedTracks::GetKnots() const
{
	TArray<UEdGraphNode*> Knots;
	for (const auto& Track : Tracks)
	{
		for (const auto & KnotNodeCreation : Track->KnotCreations)
		{
			if (KnotNodeCreation->CreatedKnot)
			{
				Knots.Add(Cast<UEdGraphNode>(KnotNodeCreation->CreatedKnot));
			}
		}
	}

	return Knots;
}

FSlateRect FGroupedTracks::GetBounds() const
{
	TOptional<FSlateRect> Bounds;
	for (const auto& KnotNodeTrack : Tracks)
	{
		const FSlateRect TrackBounds = KnotNodeTrack->GetTrackBounds();
		Bounds = Bounds.IsSet() ? Bounds->Expand(TrackBounds) : TrackBounds;
	}

	return Bounds.Get(FSlateRect());
}

TSet<UEdGraphNode*> FGroupedTracks::GetRootNodes() const
{
	TSet<UEdGraphNode*> RootNodes;
	for (auto KnotNodeTrack : Tracks)
	{
		RootNodes.Add(KnotNodeTrack->GetParentPin()->GetOwningNode());
		RootNodes.Add(KnotNodeTrack->GetLastPin()->GetOwningNode());
	}
	return RootNodes;
}
