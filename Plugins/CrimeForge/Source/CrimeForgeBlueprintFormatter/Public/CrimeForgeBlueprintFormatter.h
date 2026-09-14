#pragma once

#include "CoreMinimal.h"

class UEdGraph;

/**
 * Minimal programmatic API exposed by the PAYDAY 3 Blueprint formatter.
 *
 * The implementation contains only the graph-layout code required by CrimeForge.
 * Standalone formatter editor UX is intentionally not exposed by this module.
 */
class CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeBlueprintFormatter
{
public:
    /** True once the focused graph has a live Slate graph editor and its initial geometry is ready. */
    static bool IsGraphReady(UEdGraph* Graph);

    /** Requests a Format All pass for the focused Blueprint graph. Returns false if no live handler exists. */
    static bool RequestFormatAll(UEdGraph* Graph);

    /**
     * Returns true if a live handler exists for Graph. bOutIsFormatting reports whether the formatter
     * still owns an active formatting transaction.
     */
    static bool GetFormattingState(UEdGraph* Graph, bool& bOutIsFormatting);
};
