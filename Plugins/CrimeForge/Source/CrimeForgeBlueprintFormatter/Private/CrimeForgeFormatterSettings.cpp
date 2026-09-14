#include "CrimeForgeFormatterSettings.h"
#include "CrimeForgeFormatterUtils.h"

UCrimeForgeFormatterSettings::UCrimeForgeFormatterSettings()
{
    UseBlueprintFormattingForTheseGraphs = {
        TEXT("EdGraph"), TEXT("GameplayAbilityGraph"), TEXT("AnimationTransitionGraph"),
        TEXT("SMStateGraph"), TEXT("SMTransitionGraph"), TEXT("SMPropertyGraph")
    };

    SupportedAssetEditors = {
        TEXT("BlueprintEditor"), TEXT("AnimationBlueprintEditor"), TEXT("WidgetBlueprintEditor")
    };
}

ECrimeForgeAutoFormatting UCrimeForgeFormatterSettings::GetAutoFormatting() const
{
    return bGloballyDisableAutoFormatting ? ECrimeForgeAutoFormatting::Never : AutoFormatting;
}

const UCrimeForgeFormatterSettings& UCrimeForgeFormatterSettings::GetFormatterSettings(UEdGraph* Graph)
{
    if (UCrimeForgeFormatterSettings* Settings = FindFormatterSettings(Graph))
    {
        return *Settings;
    }

    return Get();
}

UCrimeForgeFormatterSettings* UCrimeForgeFormatterSettings::FindFormatterSettings(UEdGraph* Graph)
{
    if (!Graph || !FCrimeForgeFormatterUtils::IsBlueprintGraph(Graph, false))
    {
        return nullptr;
    }

    return &GetMutable();
}
