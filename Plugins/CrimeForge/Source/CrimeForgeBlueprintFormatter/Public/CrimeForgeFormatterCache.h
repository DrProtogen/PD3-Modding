#pragma once

#include "CoreMinimal.h"
#include "CrimeForgeFormatterCache.generated.h"

USTRUCT()
struct CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeNodeData
{
    GENERATED_BODY()

private:
    UPROPERTY() FIntPoint Size = FIntPoint::ZeroValue;
    UPROPERTY() FIntPoint CommentBubbleSize = FIntPoint::ZeroValue;

public:
    UPROPERTY() TMap<FGuid, float> CachedPins;
    UPROPERTY() bool bLocked = false;
    UPROPERTY() FIntPoint Last = FIntPoint::ZeroValue;
    UPROPERTY() FGuid LastRoot;

    void ResetSize() { Size = FIntPoint::ZeroValue; CommentBubbleSize = FIntPoint::ZeroValue; CachedPins.Reset(); }
    bool HasSize() const { return Size.X > 0 && Size.Y > 0; }
    void SetSize(const FVector2D& InSize) { Size = FIntPoint(FMath::RoundToInt(InSize.X), FMath::RoundToInt(InSize.Y)); }
    const FIntPoint& GetNodeSize() const { return Size; }
    bool HasCommentBubbleSize() const { return CommentBubbleSize.X > 0 && CommentBubbleSize.Y > 0; }
    void SetCommentBubbleSize(const FVector2D& InSize) { CommentBubbleSize = FIntPoint(FMath::RoundToInt(InSize.X), FMath::RoundToInt(InSize.Y)); }
    const FIntPoint& GetCommentBubbleSize() const { return CommentBubbleSize; }
    void SetLastFormatted(UEdGraphNode* Node);
};

USTRUCT()
struct CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeGraphData
{
    GENERATED_BODY()

    UPROPERTY() TMap<FGuid, FCrimeForgeNodeData> NodeData;

    void CleanupGraph(UEdGraph* Graph);
    FCrimeForgeNodeData& GetNodeData(UEdGraphNode* Node);
    FCrimeForgeNodeData* GetNodeDataPtr(UEdGraphNode* Node);
};
