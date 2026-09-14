#include "Misc/CrimeForgeGraphSchema.h"

#include "CrimeForgeFormatterGlobals.h"

#include "Formatters/GraphFormatterTypes.h"
#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeFormatterTypes.h"
#include "CrimeForgeFormatterUtils.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "K2Node_Knot.h"
#include "ScopedTransaction.h"
#include "SGraphNode.h"
#include "SGraphPanel.h"

const UCrimeForgeGraphSchema& UCrimeForgeGraphSchema::Get(UEdGraph*) { return *GetDefault<UCrimeForgeGraphSchema>(); }
const UCrimeForgeGraphSchema& UCrimeForgeGraphSchema::Get(UEdGraphNode* Node) { return Get(Node ? Node->GetGraph() : nullptr); }
const UCrimeForgeGraphSchema& UCrimeForgeGraphSchema::Get(UEdGraphPin* Pin) { return Get(Pin ? Pin->GetOwningNodeUnchecked() : nullptr); }
const UCrimeForgeGraphSchema& UCrimeForgeGraphSchema::Get(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler) { return Get(GraphHandler ? GraphHandler->GetFocusedEdGraph() : nullptr); }

bool UCrimeForgeGraphSchema::IsExecPin(const UEdGraphPin* Pin) const { return FCrimeForgeFormatterUtils::IsExecPin(Pin); }

FPinConnectionResponse UCrimeForgeGraphSchema::GetConnectionResponse(UEdGraphPin* PinA, UEdGraphPin* PinB) const
{
    if (!PinA || !PinB)
    {
        FPinConnectionResponse Response;
        Response.SetFatal();
        return Response;
    }
    return PinA->GetOwningNodeUnchecked()->GetGraph()->GetSchema()->CanCreateConnection(PinA, PinB);
}

bool UCrimeForgeGraphSchema::CanConnectPins(UEdGraphPin* PinA, UEdGraphPin* PinB, bool bOverrideLinks, bool bAcceptConversions, bool bAcceptHiddenPins) const
{
    if (!PinA || !PinB || (!bAcceptHiddenPins && (PinA->bHidden || PinB->bHidden))) return false;
    switch (GetConnectionResponse(PinA, PinB).Response)
    {
    case CONNECT_RESPONSE_MAKE: return true;
    case CONNECT_RESPONSE_BREAK_OTHERS_A:
    case CONNECT_RESPONSE_BREAK_OTHERS_B:
    case CONNECT_RESPONSE_BREAK_OTHERS_AB: return bOverrideLinks;
    case CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE: return bAcceptConversions;
    default: return false;
    }
}

bool UCrimeForgeGraphSchema::TryCreateConnection(FCrimeForgeNodePinHandle& PinA, FCrimeForgeNodePinHandle& PinB, ECrimeForgeBreakMethod BreakMethod, bool bConversionAllowed, bool bTryHidden) const
{
    if (!PinA.IsValid() || !PinB.IsValid()) return false;
    UEdGraphPin* A = PinA.GetPin();
    UEdGraphPin* B = PinB.GetPin();
    if (!A || !B || (!bTryHidden && B->bHidden)) return false;

    const UEdGraphSchema* Schema = A->GetOwningNodeUnchecked()->GetGraph()->GetSchema();
    FPinConnectionResponse Response = Schema->CanCreateConnection(A, B);
    ECanCreateConnectionResponse Mode = Response.Response;

    if (BreakMethod == ECrimeForgeBreakMethod::Always &&
        (Mode == CONNECT_RESPONSE_MAKE || Mode == CONNECT_RESPONSE_BREAK_OTHERS_A || Mode == CONNECT_RESPONSE_BREAK_OTHERS_B))
    {
        Mode = CONNECT_RESPONSE_BREAK_OTHERS_AB;
    }
    else if (BreakMethod == ECrimeForgeBreakMethod::Never &&
        (Mode == CONNECT_RESPONSE_BREAK_OTHERS_A || Mode == CONNECT_RESPONSE_BREAK_OTHERS_B || Mode == CONNECT_RESPONSE_BREAK_OTHERS_AB))
    {
        return false;
    }

    switch (Mode)
    {
    case CONNECT_RESPONSE_MAKE: return Schema->TryCreateConnection(A, B);
    case CONNECT_RESPONSE_BREAK_OTHERS_A: Schema->BreakPinLinks(*A, false); return Schema->TryCreateConnection(A, B);
    case CONNECT_RESPONSE_BREAK_OTHERS_B: Schema->BreakPinLinks(*B, false); return Schema->TryCreateConnection(A, B);
    case CONNECT_RESPONSE_BREAK_OTHERS_AB: Schema->BreakPinLinks(*A, false); Schema->BreakPinLinks(*B, false); return Schema->TryCreateConnection(A, B);
    case CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE: return bConversionAllowed && Schema->CreateAutomaticConversionNodeAndConnections(A, B);
    default: return false;
    }
}

void UCrimeForgeGraphSchema::BreakSinglePinLink(FCrimeForgeNodePinHandle& PinA, FCrimeForgeNodePinHandle& PinB, bool bModify) const
{
    if (!PinA.IsValid() || !PinB.IsValid()) return;
    UEdGraphPin* A = PinA.GetPin(); UEdGraphPin* B = PinB.GetPin();
    if (bModify) { A->Modify(); B->Modify(); }
    A->GetOwningNodeUnchecked()->GetGraph()->GetSchema()->BreakSinglePinLink(A, B);
}

void UCrimeForgeGraphSchema::BreakSinglePinLink(FPinLink& Link) const { BreakSinglePinLink(Link.FromNodePinHandle, Link.ToNodePinHandle); }

void UCrimeForgeGraphSchema::BreakAllPinLinks(FCrimeForgeNodePinHandle& PinHandle, bool bSendsNotification, bool bModify) const
{
    if (UEdGraphPin* Pin = PinHandle.GetPin())
    {
        if (bModify) Pin->Modify();
        Pin->GetOwningNodeUnchecked()->GetGraph()->GetSchema()->BreakPinLinks(*Pin, bSendsNotification);
    }
}

void UCrimeForgeGraphSchema::DeleteNode(UEdGraphNode* Node) const
{
    if (Node && Node->GetGraph()) Node->GetGraph()->GetSchema()->SafeDeleteNodeFromGraph(Node->GetGraph(), Node);
}

void UCrimeForgeGraphSchema::SetNodePosition(UEdGraphNode* Node, int32 X, int32 Y, TSharedPtr<SGraphPanel> GraphPanel) const
{
    if (!Node) return;
    Node->Modify();
    const FVector2D NewPos(X, Y);
    if (GraphPanel.IsValid())
    {
        if (TSharedPtr<SGraphNode> GraphNode = GraphPanel->GetNodeWidgetFromGuid(Node->NodeGuid))
        {
            TSet<TWeakPtr<SNodePanel::SNode>> Filter;
            GraphNode->MoveTo(NewPos, Filter);
        }
    }
#if CRIMEFORGE_FORMATTER_UE_VERSION_OR_LATER(5, 0)
    Node->GetSchema()->SetNodePosition(Node, NewPos);
#else
    Node->NodePosX = X; Node->NodePosY = Y;
#endif
}

bool UCrimeForgeGraphSchema::MakeLinkDirect(UEdGraphPin* PinA, UEdGraphPin* PinB) const { if (!PinA || !PinB) return false; PinA->MakeLinkTo(PinB); return true; }
bool UCrimeForgeGraphSchema::BreakLinkDirect(UEdGraphPin* PinA, UEdGraphPin* PinB) const { if (!PinA || !PinB) return false; PinA->BreakLinkTo(PinB); return true; }
UEdGraphNode* UCrimeForgeGraphSchema::MakeKnotNode(UEdGraphPin* PinA, UEdGraphPin* PinB, const FVector2D& GraphPosition) const { return FCrimeForgeFormatterUtils::CreateKnotNode(PinA->GetOwningNodeUnchecked()->GetGraph(), GraphPosition, PinA, PinB); }
FGuid UCrimeForgeGraphSchema::GetNodeGuid(UEdGraphNode* Node) const { return Node ? Node->NodeGuid : FGuid(); }

FCrimeForgeScopedGraphAction::FCrimeForgeScopedGraphAction(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, const FString& Transaction)
    : FCrimeForgeScopedGraphAction(GraphHandler ? GraphHandler->GetFocusedEdGraph() : nullptr, Transaction) {}

FCrimeForgeScopedGraphAction::FCrimeForgeScopedGraphAction(UEdGraph* InGraph, const FString& Transaction) : Graph(InGraph)
{
    if (!Transaction.IsEmpty()) SetTransaction(Transaction);
}

void FCrimeForgeScopedGraphAction::SetTransaction(const FString& Transaction)
{
    TransactionPtr = MakeShared<FScopedTransaction>(FText::FromString(Transaction));
    if (Graph.IsValid()) Graph->Modify();
}

void FCrimeForgeScopedGraphAction::Cancel()
{
    if (TransactionPtr.IsValid()) TransactionPtr->Cancel();
    TransactionPtr.Reset();
}

bool FCrimeForgeScopedGraphAction::IsOutstanding() const
{
    return TransactionPtr.IsValid() && TransactionPtr->IsOutstanding();
}
