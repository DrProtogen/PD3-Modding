#include "CrimeForgeFormatterTypes.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"

void FCrimeForgeGraphPinHandle::SetPin(UEdGraphPin* Pin)
{
    UEdGraphNode* Node = Pin ? Pin->GetOwningNodeUnchecked() : nullptr;
    if (!Pin || !Node || !Node->GetGraph()) { Invalidate(); return; }
    Graph = Node->GetGraph(); NodeGuid = Node->NodeGuid; PinId = Pin->PinId; PinType = Pin->PinType; PinName = Pin->PinName;
}

UEdGraphPin* FCrimeForgeGraphPinHandle::GetPin(bool bFallbackOnPinName)
{
    UEdGraphPin* Pin = GetPinConst(bFallbackOnPinName);
    if (Pin) { PinId = Pin->PinId; }
    return Pin;
}

UEdGraphPin* FCrimeForgeGraphPinHandle::GetPinConst(bool bFallbackOnPinName) const
{
    UEdGraph* EdGraph = Graph.Get();
    if (!EdGraph || !NodeGuid.IsValid()) return nullptr;
    for (UEdGraphNode* Node : EdGraph->Nodes)
    {
        if (!Node || Node->NodeGuid != NodeGuid) continue;
        for (UEdGraphPin* Pin : Node->Pins) if (Pin && Pin->PinId == PinId) return Pin;
        if (bFallbackOnPinName)
        {
            for (UEdGraphPin* Pin : Node->Pins) if (Pin && Pin->PinName == PinName && Pin->PinType == PinType) return Pin;
        }
        break;
    }
    return nullptr;
}

FString FCrimeForgeGraphPinHandle::ToString() const
{
    return FString::Printf(TEXT("N[%s] P[%s] Name[%s]"), *NodeGuid.ToString(), *PinId.ToString(), *PinName.ToString());
}

void FCrimeForgeNodePinHandle::SetPin(UEdGraphPin* Pin)
{
    if (!Pin) { Node.Reset(); PinId.Invalidate(); PinType.ResetToDefaults(); PinName = NAME_None; return; }
    Node = Pin->GetOwningNodeUnchecked(); PinId = Pin->PinId; PinType = Pin->PinType; PinName = Pin->PinName;
}

UEdGraphPin* FCrimeForgeNodePinHandle::GetPin()
{
    UEdGraphNode* Owner = Node.Get();
    if (!Owner || !PinId.IsValid()) return nullptr;
    for (UEdGraphPin* Pin : Owner->Pins) if (Pin && Pin->PinId == PinId) return Pin;
    for (UEdGraphPin* Pin : Owner->Pins)
    {
        if (Pin && Pin->PinName == PinName && Pin->PinType == PinType) { PinId = Pin->PinId; return Pin; }
    }
    return nullptr;
}

TArray<FCrimeForgeNodePinHandle> FCrimeForgeNodePinHandle::ConvertArray(const TArray<UEdGraphPin*>& Pins)
{
    TArray<FCrimeForgeNodePinHandle> Out; Out.Reserve(Pins.Num());
    for (UEdGraphPin* Pin : Pins) Out.Emplace(Pin);
    return Out;
}

void FCrimeForgeNodeSet::Append(const TArray<UEdGraphNode*>& Nodes) { for (UEdGraphNode* Node : Nodes) Add(Node); }
void FCrimeForgeNodeSet::Append(const TSet<UEdGraphNode*>& Nodes) { for (UEdGraphNode* Node : Nodes) Add(Node); }
void FCrimeForgeNodeSet::Add(UEdGraphNode* Node) { if (Node) WeakNodes.Add(Node); }
void FCrimeForgeNodeSet::Empty() { WeakNodes.Empty(); }
TSet<UEdGraphNode*> FCrimeForgeNodeSet::GetNodeObjs() const { TSet<UEdGraphNode*> Out; for (auto Node : WeakNodes) if (Node.IsValid()) Out.Add(Node.Get()); return Out; }
