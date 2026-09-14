#include "Formatters/FormatterLayoutUtils.h"

#include "CrimeForgeFormatterUtils.h"
#include "Formatters/FormatterInterface.h"

bool FCrimeForgeFormatterLayoutUtils::IsSameRow(const TMap<FPinLink, bool>& SameRowMapping, UEdGraphNode* NodeA, UEdGraphNode* NodeB)
{
	TSet<FPinLink> VisitedLinks;
	TQueue<UEdGraphNode*> PendingNodes;
	PendingNodes.Enqueue(NodeA);
	while (!PendingNodes.IsEmpty())
	{
		UEdGraphNode* Node = nullptr;
		PendingNodes.Dequeue(Node);

		// UE_LOG(LogTemp, Warning, TEXT("Checking node %s"), *FCrimeForgeFormatterUtils::GetNodeName(Node));

		if (Node == NodeB)
		{
			return true;
		}

		for (const FPinLink& PinLink : FCrimeForgeFormatterUtils::GetPinLinks(Node))
		{
			if (VisitedLinks.Contains(PinLink))
			{
				continue;
			}

			VisitedLinks.Add(PinLink);
			VisitedLinks.Add(PinLink.MakeOppositeLink());

			if (!SameRowMapping.Contains(PinLink))
			{
				continue;
			}

			PendingNodes.Enqueue(PinLink.GetNode());
		}
	}

	return false;
}

void FCrimeForgeFormatterLayoutUtils::StraightenRow(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, const TMap<FPinLink, bool>& SameRowMapping, UEdGraphNode* Node)
{
	StraightenRowWithFilter(GraphHandler, SameRowMapping, Node, [](const FPinLink& Link) { return true; });
}

void FCrimeForgeFormatterLayoutUtils::StraightenRowWithFilter(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, const TMap<FPinLink, bool>& SameRowMapping, UEdGraphNode* Node, TFunctionRef<bool(const FPinLink&)> Pred)
{
	TQueue<FPinLink> PendingLinks;
	for (const FPinLink& Link : FCrimeForgeFormatterUtils::GetPinLinks(Node))
	{
		PendingLinks.Enqueue(Link);
	}

	TSet<FPinLink> StraightenedLinks;
	while (!PendingLinks.IsEmpty())
	{
		FPinLink Link;
		PendingLinks.Dequeue(Link);

		if (!Pred(Link))
		{
			continue;
		}

		if (StraightenedLinks.Contains(Link))
		{
			continue;
		}

		StraightenedLinks.Add(Link);
		StraightenedLinks.Add(Link.MakeOppositeLink());

		if (SameRowMapping.Contains(Link))
		{
			FCrimeForgeFormatterUtils::StraightenPin(GraphHandler, Link);

			for (const FPinLink& NewLink : FCrimeForgeFormatterUtils::GetPinLinks(Link.GetToNode()))
			{
				PendingLinks.Enqueue(NewLink);
			}
		}
	}
}

FSlateRect FCrimeForgeFormatterLayoutUtils::GetFormatterArrayBounds(TArray<TSharedPtr<FFormatterInterface>> FormatterArray, TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, bool bUseCommentPadding)
{
	TArray<FSlateRect> BoundsArray;
	for (auto FormatterInterface : FormatterArray)
	{
		if (bUseCommentPadding)
		{
			BoundsArray.Add(FCrimeForgeFormatterUtils::GetCachedNodeArrayBoundsWithComments(GraphHandler, FormatterInterface->GetCommentHandler(), FormatterInterface->GetFormattedNodes().Array()));
		}
		else
		{
			BoundsArray.Add(FCrimeForgeFormatterUtils::GetCachedNodeArrayBounds(GraphHandler, FormatterInterface->GetFormattedNodes().Array()));
		}
	}

	return FCrimeForgeFormatterUtils::GetGroupedBounds(BoundsArray);
}

bool FCrimeForgeFormatterLayoutUtils::FilterDelegateLink(const FPinLink& PinLink)
{
	// 1. if TreatDelegatesAsExecutionPins is enabled, delegate pins are always valid
	// 2. if we aren't dealing with delegate links, then valid
	if (UCrimeForgeFormatterSettings::Get().bTreatDelegatesAsExecutionPins || !FCrimeForgeFormatterUtils::IsDelegatePin(PinLink.From))
	{
		return true;
	}

	// if a delegate pin is from a pure node, it must be also linked to a pure node
	return FCrimeForgeFormatterUtils::IsNodePure(PinLink.From->GetOwningNode()) || FCrimeForgeFormatterUtils::IsNodePure(PinLink.To->GetOwningNode());
}
