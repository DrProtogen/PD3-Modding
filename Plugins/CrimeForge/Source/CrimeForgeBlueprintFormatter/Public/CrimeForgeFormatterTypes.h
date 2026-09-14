#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"

#if ENGINE_MINOR_VERSION >= 25 || ENGINE_MAJOR_VERSION >= 5
#define CRIMEFORGE_FORMATTER_PROPERTY FProperty
#define CRIMEFORGE_FORMATTER_FIND_FIELD FindUField
#define CRIMEFORGE_FORMATTER_FIND_PROPERTY FindFProperty
#define CRIMEFORGE_FORMATTER_WEAK_FIELD_PTR TWeakFieldPtr
#else
#define CRIMEFORGE_FORMATTER_PROPERTY UProperty
#define CRIMEFORGE_FORMATTER_FIND_FIELD FindField
#define CRIMEFORGE_FORMATTER_FIND_PROPERTY FindField
#define CRIMEFORGE_FORMATTER_WEAK_FIELD_PTR TWeakObjectPtr
#endif

struct FCrimeForgeGraphPinHandle
{
    TWeakObjectPtr<UEdGraph> Graph;
    FGuid NodeGuid;
    FGuid PinId;
    FEdGraphPinType PinType;
    FName PinName;

    FCrimeForgeGraphPinHandle() { Invalidate(); }
    FCrimeForgeGraphPinHandle(UEdGraphPin* Pin) { SetPin(Pin); }

    void SetPin(UEdGraphPin* Pin);
    UEdGraphPin* GetPin(bool bFallbackOnPinName = true);
    UEdGraphPin* GetPinConst(bool bFallbackOnPinName = true) const;
    bool IsValid() const { return Graph.IsValid() && PinId.IsValid() && NodeGuid.IsValid(); }
    void Invalidate() { Graph.Reset(); NodeGuid.Invalidate(); PinId.Invalidate(); PinType.ResetToDefaults(); PinName = NAME_None; }
    bool operator==(const FCrimeForgeGraphPinHandle& Other) const { return PinId == Other.PinId && NodeGuid == Other.NodeGuid; }
    bool operator!=(const FCrimeForgeGraphPinHandle& Other) const { return !(*this == Other); }
    friend uint32 GetTypeHash(const FCrimeForgeGraphPinHandle& Handle) { return HashCombine(GetTypeHash(Handle.PinId), GetTypeHash(Handle.NodeGuid)); }
    FString ToString() const;
};

struct FCrimeForgeNodePinHandle
{
    TWeakObjectPtr<UEdGraphNode> Node;
    FGuid PinId;
    FEdGraphPinType PinType;
    FName PinName;

    FCrimeForgeNodePinHandle() { SetPin(nullptr); }
    FCrimeForgeNodePinHandle(UEdGraphPin* Pin) { SetPin(Pin); }
    void SetPin(UEdGraphPin* Pin);
    UEdGraphPin* GetPin();
    UEdGraphNode* GetNode() const { return Node.Get(); }
    bool IsValid() { return GetPin() != nullptr; }
    static TArray<FCrimeForgeNodePinHandle> ConvertArray(const TArray<UEdGraphPin*>& Pins);
    bool operator==(const FCrimeForgeNodePinHandle& Other) const { return PinId == Other.PinId && Node == Other.Node; }
    bool operator==(const UEdGraphPin* Other) { return GetPin() == Other; }
    UEdGraphPin* operator->() { return GetPin(); }
    friend uint32 GetTypeHash(const FCrimeForgeNodePinHandle& Handle) { return GetTypeHash(Handle.PinId); }
};

struct FCrimeForgeNodeSet
{
    void Append(const TArray<UEdGraphNode*>& Nodes);
    void Append(const TSet<UEdGraphNode*>& Nodes);
    void Add(UEdGraphNode* Node);
    void Empty();
    const TSet<TWeakObjectPtr<UEdGraphNode>>& Get() const { return WeakNodes; }
    TSet<TWeakObjectPtr<UEdGraphNode>>& GetMut() { return WeakNodes; }
    TSet<UEdGraphNode*> GetNodeObjs() const;
private:
    TSet<TWeakObjectPtr<UEdGraphNode>> WeakNodes;
};
