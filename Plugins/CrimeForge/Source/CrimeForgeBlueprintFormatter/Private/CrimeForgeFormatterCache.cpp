#include "CrimeForgeFormatterCache.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"

void FCrimeForgeNodeData::SetLastFormatted(UEdGraphNode* Node)
{
    if (Node)
    {
        Last = FIntPoint(Node->NodePosX, Node->NodePosY);
    }
}

void FCrimeForgeGraphData::CleanupGraph(UEdGraph* Graph)
{
    if (!Graph)
    {
        NodeData.Reset();
        return;
    }

    TSet<FGuid> LiveGuids;
    for (UEdGraphNode* Node : Graph->Nodes)
    {
        if (Node)
        {
            LiveGuids.Add(Node->NodeGuid);
        }
    }

    for (auto It = NodeData.CreateIterator(); It; ++It)
    {
        if (!LiveGuids.Contains(It.Key()))
        {
            It.RemoveCurrent();
        }
    }
}

FCrimeForgeNodeData& FCrimeForgeGraphData::GetNodeData(UEdGraphNode* Node)
{
    check(Node);
    return NodeData.FindOrAdd(Node->NodeGuid);
}

FCrimeForgeNodeData* FCrimeForgeGraphData::GetNodeDataPtr(UEdGraphNode* Node)
{
    return Node ? NodeData.Find(Node->NodeGuid) : nullptr;
}
