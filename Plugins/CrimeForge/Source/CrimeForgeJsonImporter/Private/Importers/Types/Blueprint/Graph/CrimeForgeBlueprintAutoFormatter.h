

#pragma once

#include "CoreMinimal.h"
#include "Containers/Ticker.h"

class UBlueprint;
class UEdGraph;

/**
 * Queues Blueprint graphs for formatting through the integrated PAYDAY 3 Blueprint formatter after CrimeForge JSON Importer has
 * finished reconstructing them.
 *
 * The integrated formatter intentionally depends on a live SGraphEditor because it measures the
 * actual Slate node/pin geometry before arranging the graph. Calling its formatter synchronously
 * from the importer would run too early, before those widgets exist. This helper therefore focuses
 * one graph at a time, waits for the formatter to finish its initial graph setup/measurement, then
 * invokes the same Format All request the plugin normally runs from its editor command.
 */
class FCrimeForgeBlueprintAutoFormatter
{
public:
    static void Enqueue(UBlueprint* Blueprint, bool bSaveWhenFinished);

private:
    enum class EJobState : uint8
    {
        FocusGraph,
        WaitForGraphHandler,
        WaitForFormatting
    };

    struct FFormatJob
    {
        TWeakObjectPtr<UBlueprint> Blueprint;
        TArray<TWeakObjectPtr<UEdGraph>> Graphs;
        int32 GraphIndex = 0;
        EJobState State = EJobState::FocusGraph;
        double StateStartSeconds = 0.0;
        bool bSaveWhenFinished = false;
    };

    static bool Tick(float DeltaSeconds);
    static void EnsureTicker();
    static void FinishCurrentJob();

    static TArray<FFormatJob> PendingJobs;
    static FTSTicker::FDelegateHandle TickerHandle;
};
