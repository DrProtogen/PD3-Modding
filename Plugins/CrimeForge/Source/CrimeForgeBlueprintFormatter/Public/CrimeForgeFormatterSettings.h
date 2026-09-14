#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "CrimeForgeFormatterSettings.generated.h"

class UEdGraph;

UENUM()
enum class ECrimeForgeNodeFormattingStyle : uint8 { Expanded, Compact };
UENUM()
enum class ECrimeForgeParameterFormattingStyle : uint8 { Helixing, LeftSide };
UENUM()
enum class ECrimeForgeWiringStyle : uint8 { AlwaysMerge, MergeWhenNear, SingleWire };
UENUM()
enum class ECrimeForgeAutoFormatting : uint8 { Never, FormatAllConnected, FormatSingleConnected };
UENUM()
enum class ECrimeForgeFormatAllStyle : uint8 { Simple, Smart, NodeType };
UENUM()
enum class ECrimeForgeFormatAllHorizontalAlignment : uint8 { RootNode, Comment };
UENUM()
enum class ECrimeForgeFormatterType : uint8 { Blueprint, BehaviorTree, Simple };

/**
 * Internal formatter configuration used by CrimeForge.
 *
 * This is the single settings object for the Blueprint formatter. The formatter no longer
 * maintains a second reflected settings struct for Blueprint graphs; all formatting options
 * live directly on this UObject so Unreal Header Tool sees only one CrimeForgeFormatterSettings
 * reflected type.
 */
UCLASS(config = EditorPerProjectUserSettings)
class CRIMEFORGEBLUEPRINTFORMATTER_API UCrimeForgeFormatterSettings final : public UObject
{
    GENERATED_BODY()

public:
    UCrimeForgeFormatterSettings();

    static const UCrimeForgeFormatterSettings& Get() { return *GetDefault<UCrimeForgeFormatterSettings>(); }
    static UCrimeForgeFormatterSettings& GetMutable() { return *GetMutableDefault<UCrimeForgeFormatterSettings>(); }

    // Core Blueprint graph formatting settings.
    UPROPERTY(config)
    bool bEnabled = true;

    UPROPERTY(config)
    ECrimeForgeFormatterType FormatterType = ECrimeForgeFormatterType::Blueprint;

    UPROPERTY(config)
    FIntPoint Padding = FIntPoint(100, 100);

    UPROPERTY(config)
    ECrimeForgeAutoFormatting AutoFormatting = ECrimeForgeAutoFormatting::FormatAllConnected;

    UPROPERTY(config)
    TEnumAsByte<EEdGraphPinDirection> FormatterDirection = EGPD_Output;

    UPROPERTY(config)
    TArray<FName> RootNodes;

    UPROPERTY(config)
    FName ExecPinName = TEXT("exec");

    UPROPERTY(config)
    bool bGloballyDisableAutoFormatting = false;

    UPROPERTY(config)
    ECrimeForgeNodeFormattingStyle FormattingStyle = ECrimeForgeNodeFormattingStyle::Expanded;

    UPROPERTY(config)
    ECrimeForgeParameterFormattingStyle ParameterStyle = ECrimeForgeParameterFormattingStyle::Helixing;

    UPROPERTY(config)
    ECrimeForgeWiringStyle ExecutionWiringStyle = ECrimeForgeWiringStyle::AlwaysMerge;

    UPROPERTY(config)
    ECrimeForgeWiringStyle ParameterWiringStyle = ECrimeForgeWiringStyle::AlwaysMerge;

    UPROPERTY(config)
    bool bUseKnotNodePool = false;

    UPROPERTY(config)
    bool bCreateKnotNodes = true;

    UPROPERTY(config)
    bool bExpandNodesByHeight = true;

    UPROPERTY(config)
    int32 ExpandNodesMaxDist = 400;

    UPROPERTY(config)
    bool bExpandParametersByHeight = false;

    UPROPERTY(config)
    int32 ExpandParametersMaxDist = 160;

    UPROPERTY(config)
    bool bExpandNodesAheadOfParameters = true;

    UPROPERTY(config)
    bool bSnapToGrid = false;

    UPROPERTY(config)
    bool bLimitHelixingHeight = true;

    UPROPERTY(config)
    int32 HelixingHeightMax = 500;

    UPROPERTY(config)
    bool bDisableHelixingWithMultiplePins = true;

    UPROPERTY(config)
    bool bDisableHelixingOnlyCountsParameters = true;

    UPROPERTY(config)
    int32 DisableHelixingPinCount = 2;

    UPROPERTY(config)
    int32 SingleNodeMaxHeight = 300;

    UPROPERTY(config)
    ECrimeForgeFormatAllStyle FormatAllStyle = ECrimeForgeFormatAllStyle::Simple;

    UPROPERTY(config)
    ECrimeForgeFormatAllHorizontalAlignment FormatAllHorizontalAlignment = ECrimeForgeFormatAllHorizontalAlignment::RootNode;

    UPROPERTY(config)
    FIntPoint FormatAllPadding = FIntPoint(600, 200);

    UPROPERTY(config)
    bool bUseFormatAllPaddingInComment = false;

    UPROPERTY(config)
    int32 FormatAllPaddingInComment = 200;

    UPROPERTY(config)
    FIntPoint BlueprintParameterPadding = FIntPoint(40, 25);

    UPROPERTY(config)
    int32 BlueprintExecutionKnotXOffset = 0;

    UPROPERTY(config)
    FIntPoint BlueprintExecutionKnotLoopingOffset = FIntPoint::ZeroValue;

    UPROPERTY(config)
    int32 BlueprintParameterKnotXOffset = 0;

    UPROPERTY(config)
    FIntPoint BlueprintParameterKnotLoopingOffset = FIntPoint::ZeroValue;

    UPROPERTY(config)
    bool bTreatDelegatesAsExecutionPins = true;

    UPROPERTY(config)
    bool bCenterBranches = false;

    UPROPERTY(config)
    int32 NumRequiredBranches = 3;

    UPROPERTY(config)
    bool bCenterBranchesForParameters = false;

    UPROPERTY(config)
    int32 NumRequiredBranchesForParameters = 2;

    UPROPERTY(config)
    int32 VerticalPinSpacing = 26;

    UPROPERTY(config)
    int32 ParameterVerticalPinSpacing = 26;

    UPROPERTY(config)
    int32 BlueprintKnotTrackSpacing = 26;

    UPROPERTY(config)
    int32 CullKnotVerticalThreshold = 8;

    UPROPERTY(config)
    int32 KnotNodeDistanceThreshold = 800;

    UPROPERTY(config)
    bool bApplyCommentPadding = true;

    UPROPERTY(config)
    bool bAddKnotNodesToComments = true;

    UPROPERTY(config)
    FIntPoint CommentNodePadding = FIntPoint(30, 30);

    UPROPERTY(config)
    bool bRefreshCommentTitleBarSize = true;

    UPROPERTY(config)
    bool bEnableFasterFormatting = false;

    UPROPERTY(config)
    bool bAlignExecNodesTo8x8Grid = false;

    UPROPERTY(config)
    bool bSaveAllBeforeFormatting = false;

    // Kept only because generic Blueprint helper code consults these names.
    UPROPERTY(config)
    TArray<FName> SupportedAssetEditors;

    UPROPERTY(config)
    TArray<FName> UseBlueprintFormattingForTheseGraphs;

    ECrimeForgeAutoFormatting GetAutoFormatting() const;

    static const UCrimeForgeFormatterSettings& GetFormatterSettings(UEdGraph* Graph);
    static UCrimeForgeFormatterSettings* FindFormatterSettings(UEdGraph* Graph);
};
