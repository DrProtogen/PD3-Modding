#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "UObject/Object.h"
#include "CrimeForgeGraphSchema.generated.h"

class SGraphPanel;
class FCrimeForgeGraphHandler;
class FScopedTransaction;
struct FCrimeForgeNodePinHandle;
struct FPinLink;
enum class ECrimeForgeBreakMethod : uint8;
class UEdGraph;
class UEdGraphNode;
class UEdGraphPin;

/** Blueprint-only graph schema adapter used by CrimeForge. */
UCLASS()
class CRIMEFORGEBLUEPRINTFORMATTER_API UCrimeForgeGraphSchema : public UObject
{
    GENERATED_BODY()
public:
    static const UCrimeForgeGraphSchema& Get(UEdGraph* Graph);
    static const UCrimeForgeGraphSchema& Get(UEdGraphNode* Node);
    static const UCrimeForgeGraphSchema& Get(UEdGraphPin* Pin);
    static const UCrimeForgeGraphSchema& Get(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler);

    bool IsExecPin(const UEdGraphPin* Pin) const;
    FPinConnectionResponse GetConnectionResponse(UEdGraphPin* PinA, UEdGraphPin* PinB) const;
    bool CanConnectPins(UEdGraphPin* PinA, UEdGraphPin* PinB, bool bOverrideLinks = false, bool bAcceptConversions = false, bool bAcceptHiddenPins = false) const;
    bool TryCreateConnection(FCrimeForgeNodePinHandle& PinA, FCrimeForgeNodePinHandle& PinB, ECrimeForgeBreakMethod BreakMethod, bool bConversionAllowed = false, bool bTryHidden = false) const;
    void BreakSinglePinLink(FCrimeForgeNodePinHandle& PinA, FCrimeForgeNodePinHandle& PinB, bool bModify = true) const;
    void BreakSinglePinLink(FPinLink& Link) const;
    void BreakAllPinLinks(FCrimeForgeNodePinHandle& PinHandle, bool bSendsNotification = true, bool bModify = true) const;
    void DeleteNode(UEdGraphNode* Node) const;
    void SetNodePosition(UEdGraphNode* Node, int32 X, int32 Y, TSharedPtr<SGraphPanel> GraphPanel = {}) const;
    bool MakeLinkDirect(UEdGraphPin* PinA, UEdGraphPin* PinB) const;
    bool BreakLinkDirect(UEdGraphPin* PinA, UEdGraphPin* PinB) const;
    UEdGraphNode* MakeKnotNode(UEdGraphPin* PinA, UEdGraphPin* PinB, const FVector2D& GraphPosition) const;
    FGuid GetNodeGuid(UEdGraphNode* Node) const;
};

struct FCrimeForgeScopedGraphAction : public TSharedFromThis<FCrimeForgeScopedGraphAction>
{
    TSharedPtr<FScopedTransaction> TransactionPtr;
    TWeakObjectPtr<UEdGraph> Graph;

    explicit FCrimeForgeScopedGraphAction(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, const FString& Transaction = TEXT(""));
    explicit FCrimeForgeScopedGraphAction(UEdGraph* InGraph, const FString& Transaction = TEXT(""));
    void SetTransaction(const FString& Transaction);
    void Cancel();
    bool IsOutstanding() const;
};
