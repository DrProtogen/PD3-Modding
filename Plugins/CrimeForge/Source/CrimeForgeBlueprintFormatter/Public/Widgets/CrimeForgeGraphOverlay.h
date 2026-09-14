#pragma once

#include "CoreMinimal.h"
#include "Formatters/GraphFormatterTypes.h"

class SWidget;
class SGraphPin;
class UEdGraphNode;

struct FCrimeForgeGraphOverlayLineParams
{
    float TimeRemaining = 5.0f;
    FVector2D Start;
    FVector2D End;
    FLinearColor Color = FLinearColor::White;
    TWeakPtr<SGraphPin> StartWidget;
    TWeakPtr<SGraphPin> EndWidget;
};

struct FCrimeForgeGraphOverlayTextParams
{
    FLinearColor Color = FLinearColor::White;
    FText Text;
    FSlateRect WidgetBounds;
    TWeakPtr<SWidget> Widget;
};

struct FCrimeForgeGraphOverlayBounds
{
    float TimeRemaining = 5.0f;
    FSlateRect Bounds;
    FLinearColor Color = FLinearColor::White;
};

/** No-op debug overlay seam. CrimeForge JSON Importer does not expose visual formatter debugging UI. */
class SCrimeForgeGraphOverlay : public TSharedFromThis<SCrimeForgeGraphOverlay>
{
public:
    void ClearBounds() {}
    void ClearNodesInQueue() {}
    void DrawBounds(const FSlateRect&, FLinearColor = FLinearColor::Green, float = 3.0f) {}
    void DrawBounds(const FCrimeForgeGraphOverlayBounds&) {}
    void DrawLine(const FCrimeForgeGraphOverlayLineParams&) {}
    void DrawLine(const FVector2D&, const FVector2D&, FLinearColor = FLinearColor::White, float = 3.0f) {}
    void DrawDebugLine(const FString&, const FVector2D&, const FVector2D&, FLinearColor = FLinearColor::White, float = 3.0f) {}
    void DrawDebugPinLink(const FString&, const FPinLink&, FLinearColor = FLinearColor::White, float = 3.0f) {}
    void DrawDebugBounds(const FString&, const FSlateRect&, FLinearColor = FLinearColor::Green, float = 3.0f) {}
    void DrawNodeInQueue(UEdGraphNode*) {}
    void DrawTextOverWidget(const FCrimeForgeGraphOverlayTextParams&) {}
    void RemoveTextOverWidget(TSharedPtr<SWidget>) {}
    void ClearAllTextOverWidgets() {}
    bool IsDrawingTextOverWidgets() const { return false; }
};
