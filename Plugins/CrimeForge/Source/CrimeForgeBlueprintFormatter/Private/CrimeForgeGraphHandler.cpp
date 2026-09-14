#include "CrimeForgeGraphHandler.h"

#include "GraphHandler/FormatRequest.h"
#include "CrimeForgeFormatterGlobals.h"
#include "Misc/CrimeForgeGraphSchema.h"
#include "CrimeForgeFormatterUtils.h"
#include "Widgets/CrimeForgeGraphOverlay.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "Engine/Blueprint.h"
#include "Framework/Application/SlateApplication.h"
#include "GraphEditor.h"
#include "SGraphNode.h"
#include "SGraphPanel.h"
#include "SGraphPin.h"
#include "Widgets/Docking/SDockTab.h"

FCrimeForgeGraphHandler::FCrimeForgeGraphHandler(TWeakPtr<SDockTab> InTab, TWeakPtr<SGraphEditor> InGraphEditor)
    : CachedTab(MoveTemp(InTab)), CachedGraphEditor(MoveTemp(InGraphEditor))
{
}

FCrimeForgeGraphHandler::~FCrimeForgeGraphHandler() = default;

void FCrimeForgeGraphHandler::InitGraphHandler()
{
    GraphOverlay = MakeShared<SCrimeForgeGraphOverlay>();
    FormatRequest = MakeUnique<FCrimeForgeFormatRequest>(*this);
    ResetForGraph(GetFocusedEdGraph());
}

void FCrimeForgeGraphHandler::Cleanup()
{
    if (FormatRequest)
    {
        FormatRequest->Reset();
    }
    PendingNodeSizes.Reset();
    SizeFocusNode.Reset();
    CachedGraphPanel.Reset();
    CachedEdGraph.Reset();
    GraphData.NodeData.Reset();
}

void FCrimeForgeGraphHandler::ResetForGraph(UEdGraph* NewGraph)
{
    CachedEdGraph = NewGraph;
    CachedGraphPanel.Reset();
    GraphData.NodeData.Reset();
    FormattingChangeDataMap.Reset();
    PendingNodeSizes.Reset();
    SizeFocusNode.Reset();
    SizeFocusDelayTicks = 0;
    InitialSettleTicks = 0;
    bInitialZoomFinished = false;
    if (FormatRequest)
    {
        FormatRequest->Reset();
    }
}

void FCrimeForgeGraphHandler::Tick(float DeltaTime)
{
    TSharedPtr<SGraphEditor> Editor = CachedGraphEditor.Pin();
    if (!Editor.IsValid()) return;

    UEdGraph* CurrentGraph = Editor->GetCurrentGraph();
    if (CurrentGraph != CachedEdGraph.Get())
    {
        ResetForGraph(CurrentGraph);
    }

    if (!CurrentGraph) return;

    if (!bInitialZoomFinished)
    {
        ++InitialSettleTicks;
        if (InitialSettleTicks >= 2 && GetGraphPanel().IsValid())
        {
            bInitialZoomFinished = true;
        }
    }

    TickNodeSizeCache();

    if (FormatRequest && !HasPendingNodeSizeWork())
    {
        FormatRequest->UpdateNodesRequiringFormatting();
    }
}

TSharedPtr<SWindow> FCrimeForgeGraphHandler::GetWindow()
{
    if (!FSlateApplication::IsInitialized()) return nullptr;
    if (TSharedPtr<SDockTab> Tab = CachedTab.Pin())
    {
        return FSlateApplication::Get().FindWidgetWindow(Tab.ToSharedRef());
    }
    return nullptr;
}

UEdGraph* FCrimeForgeGraphHandler::GetFocusedEdGraph()
{
    if (TSharedPtr<SGraphEditor> Editor = CachedGraphEditor.Pin())
    {
        UEdGraph* Graph = Editor->GetCurrentGraph();
        CachedEdGraph = Graph;
        return Graph;
    }
    return CachedEdGraph.Get();
}

TSharedPtr<SGraphPanel> FCrimeForgeGraphHandler::GetGraphPanel()
{
    if (CachedGraphPanel.IsValid()) return CachedGraphPanel.Pin();
    TSharedPtr<SGraphEditor> Editor = CachedGraphEditor.Pin();
    if (!Editor.IsValid()) return nullptr;

    TSharedPtr<SGraphPanel> Panel = FCrimeForgeFormatterUtils::GetChildWidgetCasted<SGraphPanel>(Editor, TEXT("SGraphPanel"), true);
    CachedGraphPanel = Panel;
    return Panel;
}

TSharedPtr<SGraphNode> FCrimeForgeGraphHandler::GetGraphNode(UEdGraphNode* Node)
{
    if (!Node) return nullptr;
    if (TSharedPtr<SGraphPanel> Panel = GetGraphPanel())
    {
        return Panel->GetNodeWidgetFromGuid(Node->NodeGuid);
    }
    return nullptr;
}

UBlueprint* FCrimeForgeGraphHandler::GetBlueprint()
{
    if (UEdGraph* Graph = GetFocusedEdGraph())
    {
        return Graph->GetTypedOuter<UBlueprint>();
    }
    return nullptr;
}

const UCrimeForgeGraphSchema& FCrimeForgeGraphHandler::GetSchema()
{
    return UCrimeForgeGraphSchema::Get(GetFocusedEdGraph());
}

TSet<UEdGraphNode*> FCrimeForgeGraphHandler::GetSelectedNodes(bool bAllowCommentNodes)
{
    TSet<UEdGraphNode*> Out;
    if (TSharedPtr<SGraphEditor> Editor = CachedGraphEditor.Pin())
    {
        for (UObject* Obj : Editor->GetSelectedNodes())
        {
            if (UEdGraphNode* Node = Cast<UEdGraphNode>(Obj))
            {
                if (bAllowCommentNodes || !FCrimeForgeFormatterUtils::IsCommentNode(Node)) Out.Add(Node);
            }
        }
    }
    return Out;
}

FSlateRect FCrimeForgeGraphHandler::GetCachedNodeBounds(UEdGraphNode* Node, bool bWithCommentBubble)
{
    if (!Node) return FSlateRect();

    FVector2D Pos(Node->NodePosX, Node->NodePosY);
    FIntPoint Size(300, 150);

    if (FCrimeForgeFormatterUtils::IsKnotNode(Node))
    {
        const FVector2D KnotSize = FCrimeForgeFormatterUtils::GetKnotNodeSize();
        Size = FIntPoint(FMath::RoundToInt(KnotSize.X), FMath::RoundToInt(KnotSize.Y));
    }
    else
    {
        FCrimeForgeNodeData& Data = GetNodeData(Node);
        if (Data.HasSize())
        {
            Size = Data.GetNodeSize();
        }
        else if (TSharedPtr<SGraphNode> Widget = GetGraphNode(Node))
        {
            const FVector2D Desired = Widget->GetDesiredSize();
            if (Desired.X > 0 && Desired.Y > 0)
            {
                Size = FIntPoint(FMath::RoundToInt(Desired.X), FMath::RoundToInt(Desired.Y));
            }
        }

        if (bWithCommentBubble && Node->bCommentBubbleVisible && Data.HasCommentBubbleSize())
        {
            const FIntPoint Bubble = Data.GetCommentBubbleSize();
            Pos.Y -= Bubble.Y;
            Size.Y += Bubble.Y;
            Size.X = FMath::Max(Size.X, Bubble.X);
        }
    }

    return FSlateRect::FromPointAndExtent(Pos, FVector2D(Size.X, Size.Y));
}

int32 FCrimeForgeGraphHandler::GetPinY(const UEdGraphPin* Pin)
{
    if (!Pin) return 0;
    UEdGraphNode* Node = Pin->GetOwningNode();
    if (!Node) return 0;

    FCrimeForgeNodeData& Data = GetNodeData(Node);
    if (const float* CachedOffset = Data.CachedPins.Find(Pin->PinId))
    {
        return FMath::RoundToInt(Node->NodePosY + *CachedOffset);
    }

    if (TSharedPtr<SGraphNode> GraphNode = GetGraphNode(Node))
    {
        if (TSharedPtr<SGraphPin> GraphPin = GraphNode->FindWidgetForPin(const_cast<UEdGraphPin*>(Pin)))
        {
            const float Offset = GraphPin->GetNodeOffset().Y;
            Data.CachedPins.Add(Pin->PinId, Offset);
            return FMath::RoundToInt(Node->NodePosY + Offset);
        }
    }
    return Node->NodePosY;
}

void FCrimeForgeGraphHandler::SetViewLocation(const FVector2D& NewLocation, float NewZoom)
{
    if (TSharedPtr<SGraphEditor> Editor = CachedGraphEditor.Pin())
    {
#if CRIMEFORGE_FORMATTER_UE_VERSION_OR_LATER(5, 6)
        Editor->SetViewLocation(FVector2f(NewLocation), NewZoom);
#else
        Editor->SetViewLocation(NewLocation, NewZoom);
#endif
    }
}

void FCrimeForgeGraphHandler::GetViewLocation(FVector2D& OutLocation, float& OutZoom)
{
    if (TSharedPtr<SGraphEditor> Editor = CachedGraphEditor.Pin())
    {
#if CRIMEFORGE_FORMATTER_UE_VERSION_OR_LATER(5, 6)
        FVector2f Temp;
        Editor->GetViewLocation(Temp, OutZoom);
        OutLocation = FVector2D(Temp.X, Temp.Y);
#else
        Editor->GetViewLocation(OutLocation, OutZoom);
#endif
    }
}

void FCrimeForgeGraphHandler::GetViewLocation(FVector2D& OutLocation)
{
    float Zoom = 1.f;
    GetViewLocation(OutLocation, Zoom);
}

bool FCrimeForgeGraphHandler::UpdateNodeSizesChanges(const TArray<UEdGraphNode*>& Nodes)
{
    bool bAdded = false;
    for (UEdGraphNode* Node : Nodes)
    {
        if (!Node || FCrimeForgeFormatterUtils::IsKnotNode(Node)) continue;
        if (!GetNodeData(Node).HasSize())
        {
            PendingNodeSizes.AddUnique(Node);
            bAdded = true;
        }
    }
    return bAdded || HasPendingNodeSizeWork();
}

void FCrimeForgeGraphHandler::TickNodeSizeCache()
{
    PendingNodeSizes.RemoveAll([](const TWeakObjectPtr<UEdGraphNode>& Node) { return !Node.IsValid(); });
    if (PendingNodeSizes.IsEmpty())
    {
        SizeFocusNode.Reset();
        SizeFocusDelayTicks = 0;
        return;
    }

    UEdGraphNode* Node = PendingNodeSizes[0].Get();
    if (!Node) { PendingNodeSizes.RemoveAt(0); return; }

    if (SizeFocusNode.Get() != Node)
    {
        SizeFocusNode = Node;
        SizeFocusDelayTicks = 2;
        SetViewLocation(FVector2D(Node->NodePosX, Node->NodePosY), 1.f);
        return;
    }

    SetViewLocation(FVector2D(Node->NodePosX, Node->NodePosY), 1.f);
    if (SizeFocusDelayTicks > 0)
    {
        --SizeFocusDelayTicks;
        return;
    }

    if (CacheNodeSize(Node))
    {
        PendingNodeSizes.RemoveAt(0);
        SizeFocusNode.Reset();
    }
}

bool FCrimeForgeGraphHandler::CacheNodeSize(UEdGraphNode* Node)
{
    TSharedPtr<SGraphNode> GraphNode = GetGraphNode(Node);
    if (!GraphNode.IsValid()) return false;

    FVector2D Size = GraphNode->GetDesiredSize();
    if (FCrimeForgeFormatterUtils::IsCommentNode(Node))
    {
        Size.Y = FCrimeForgeFormatterUtils::GetGraphNodeMarqueeSize(GraphNode).Y;
    }
    if (Size.X <= 0 || Size.Y <= 0) return false;

    FCrimeForgeNodeData& Data = GetNodeData(Node);
    Data.ResetSize();

    TArray<TSharedRef<SWidget>> PinWidgets;
    GraphNode->GetPins(PinWidgets);
    for (const TSharedRef<SWidget>& Widget : PinWidgets)
    {
        TSharedRef<SGraphPin> GraphPin = StaticCastSharedRef<SGraphPin>(Widget);
        if (UEdGraphPin* Pin = GraphPin->GetPinObj())
        {
            Data.CachedPins.Add(Pin->PinId, GraphPin->GetNodeOffset().Y);
        }
    }

    Data.SetSize(Size);
    return true;
}

void FCrimeForgeGraphHandler::UpdateNodeChangeData(UEdGraphNode* Node)
{
    if (!Node) return;
    FormattingChangeDataMap.FindOrAdd(Node->NodeGuid).UpdateNode(Node);
}

void FCrimeForgeGraphHandler::RequestFormatAll()
{
    if (FormatRequest) FormatRequest->RequestFormatAll();
}

bool FCrimeForgeGraphHandler::HasActiveTransaction() const
{
    return FormatRequest && FormatRequest->HasActiveTransaction();
}

void FCrimeForgeGraphHandler::ResetTransactions()
{
    if (FormatRequest) FormatRequest->ResetTransactions();
}
