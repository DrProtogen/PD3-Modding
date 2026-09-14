#include "CrimeForgeBlueprintFormatter.h"

#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeTabHandler.h"

namespace
{
    TSharedPtr<FCrimeForgeGraphHandler> FindHandlerForGraph(UEdGraph* Graph)
    {
        if (!Graph)
        {
            return nullptr;
        }

        for (const TSharedPtr<FCrimeForgeGraphHandler>& Handler : FCrimeForgeTabHandler::Get().GetAllGraphHandlers())
        {
            if (Handler.IsValid() && Handler->GetFocusedEdGraph() == Graph)
            {
                return Handler;
            }
        }

        return nullptr;
    }
}

bool FCrimeForgeBlueprintFormatter::IsGraphReady(UEdGraph* Graph)
{
    const TSharedPtr<FCrimeForgeGraphHandler> Handler = FindHandlerForGraph(Graph);
    return Handler.IsValid() && Handler->HasInitialZoomFinished();
}

bool FCrimeForgeBlueprintFormatter::RequestFormatAll(UEdGraph* Graph)
{
    const TSharedPtr<FCrimeForgeGraphHandler> Handler = FindHandlerForGraph(Graph);
    if (!Handler.IsValid() || !Handler->HasInitialZoomFinished())
    {
        return false;
    }

    Handler->RequestFormatAll();
    return true;
}

bool FCrimeForgeBlueprintFormatter::GetFormattingState(UEdGraph* Graph, bool& bOutIsFormatting)
{
    const TSharedPtr<FCrimeForgeGraphHandler> Handler = FindHandlerForGraph(Graph);
    if (!Handler.IsValid())
    {
        bOutIsFormatting = false;
        return false;
    }

    bOutIsFormatting = Handler->HasActiveTransaction();
    return true;
}
