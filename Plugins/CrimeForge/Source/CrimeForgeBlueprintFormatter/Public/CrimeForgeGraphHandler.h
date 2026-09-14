#pragma once

#include "CoreMinimal.h"
#include "CrimeForgeFormatterCache.h"
#include "Formatters/GraphFormatterTypes.h"
#include "CrimeForgeNodeSizeChangeData.h"

class FCrimeForgeFormatRequest;
class SCrimeForgeGraphOverlay;
class SGraphEditor;
class SGraphNode;
class SGraphPanel;
class SDockTab;
class SWindow;
class UCrimeForgeGraphSchema;
class UBlueprint;
class UEdGraph;
class UEdGraphNode;
class UEdGraphPin;

/**
 * Minimal graph bridge used by CrimeForge JSON Importer's automatic Blueprint reconstruction formatter.
 * Interactive command/input/editor features are deliberately not exposed.
 */
class CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeGraphHandler : public TSharedFromThis<FCrimeForgeGraphHandler>
{
public:
    FCrimeForgeGraphHandler(TWeakPtr<SDockTab> InTab, TWeakPtr<SGraphEditor> InGraphEditor);
    ~FCrimeForgeGraphHandler();

    void InitGraphHandler();
    void Cleanup();
    void Tick(float DeltaTime);
    void OnGainFocus() {}
    void OnLoseFocus() {}

    TSharedPtr<SDockTab> GetTab() const { return CachedTab.Pin(); }
    TSharedPtr<SWindow> GetWindow();
    UEdGraph* GetFocusedEdGraph();
    TSharedPtr<SGraphEditor> GetGraphEditor() { return CachedGraphEditor.Pin(); }
    TSharedPtr<SGraphPanel> GetGraphPanel();
    TSharedPtr<SGraphNode> GetGraphNode(UEdGraphNode* Node);
    UBlueprint* GetBlueprint();
    const UCrimeForgeGraphSchema& GetSchema();

    TSet<UEdGraphNode*> GetSelectedNodes(bool bAllowCommentNodes = false);
    FSlateRect GetCachedNodeBounds(UEdGraphNode* Node, bool bWithCommentBubble = true);
    int32 GetPinY(const UEdGraphPin* Pin);

    FCrimeForgeGraphData& GetGraphData() { return GraphData; }
    FCrimeForgeNodeData& GetNodeData(UEdGraphNode* Node) { return GraphData.GetNodeData(Node); }
    const TMap<FGuid, FCrimeForgeFormattingChangeData>& GetFormattingChangeData() const { return FormattingChangeDataMap; }

    void SetViewLocation(const FVector2D& NewLocation, float NewZoom);
    void GetViewLocation(FVector2D& OutLocation, float& OutZoom);
    void GetViewLocation(FVector2D& OutLocation);

    bool UpdateNodeSizesChanges(const TArray<UEdGraphNode*>& Nodes);
    bool HasPendingNodeSizeWork() const { return PendingNodeSizes.Num() > 0 || SizeFocusDelayTicks > 0; }
    void UpdateNodeChangeData(UEdGraphNode* Node);

    void RequestFormatAll();
    bool HasActiveTransaction() const;
    void ResetTransactions();
    bool HasInitialZoomFinished() const { return bInitialZoomFinished; }

    void AutoLerpToNewlyCreatedNode(UEdGraphNode*) {}

    TSharedPtr<SCrimeForgeGraphOverlay> GetGraphOverlay() { return GraphOverlay; }


private:
    void ResetForGraph(UEdGraph* NewGraph);
    bool CacheNodeSize(UEdGraphNode* Node);
    void TickNodeSizeCache();

    TWeakPtr<SDockTab> CachedTab;
    TWeakPtr<SGraphEditor> CachedGraphEditor;
    TWeakPtr<SGraphPanel> CachedGraphPanel;
    TWeakObjectPtr<UEdGraph> CachedEdGraph;

    TUniquePtr<FCrimeForgeFormatRequest> FormatRequest;
    TSharedPtr<SCrimeForgeGraphOverlay> GraphOverlay;
    FCrimeForgeGraphData GraphData;
    TMap<FGuid, FCrimeForgeFormattingChangeData> FormattingChangeDataMap;

    TArray<TWeakObjectPtr<UEdGraphNode>> PendingNodeSizes;
    TWeakObjectPtr<UEdGraphNode> SizeFocusNode;
    int32 SizeFocusDelayTicks = 0;
    int32 InitialSettleTicks = 0;
    bool bInitialZoomFinished = false;
};
