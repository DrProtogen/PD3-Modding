#pragma once

#include "CoreMinimal.h"

class FCrimeForgeGraphHandler;
class SDockTab;
class SGraphEditor;

/** Tracks the live Blueprint SGraphEditor required by CrimeForge JSON Importer's automatic formatter. */
class CRIMEFORGEBLUEPRINTFORMATTER_API FCrimeForgeTabHandler
{
public:
    static FCrimeForgeTabHandler& Get();
    static void TearDown();

    void Init();
    void Tick(float DeltaTime);
    void Cleanup();

    TSharedPtr<FCrimeForgeGraphHandler> GetActiveGraphHandler() const { return ActiveGraphHandler; }
    TArray<TSharedPtr<FCrimeForgeGraphHandler>> GetAllGraphHandlers() const;
    void ProcessTab(TSharedPtr<SDockTab> Tab);

private:
    void RefreshFromActiveTab();
    TSharedPtr<SGraphEditor> FindGraphEditor(TSharedPtr<SDockTab> Tab) const;

    TSharedPtr<FCrimeForgeGraphHandler> ActiveGraphHandler;
    TWeakPtr<SDockTab> ActiveTab;
    TWeakPtr<SGraphEditor> ActiveGraphEditor;
};
