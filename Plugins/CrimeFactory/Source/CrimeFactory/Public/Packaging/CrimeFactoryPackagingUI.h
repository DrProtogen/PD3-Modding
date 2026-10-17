#pragma once

#include "CoreMinimal.h"
#include "Framework/SlateDelegates.h"

class SWidget;

enum class ECrimeFactoryPreflightSeverity : uint8
{
    Pass,
    Warning,
    Error
};

struct FCrimeFactoryPreflightItem
{
    ECrimeFactoryPreflightSeverity Severity;
    FString Message;
};

/** The same validation result drives the interactive checklist and the complete text report. */
struct FCrimeFactoryPreflightResult
{
    TArray<FCrimeFactoryPreflightItem> Items;
    int32 PassCount = 0;
    int32 WarningCount = 0;
    int32 ErrorCount = 0;

    void Add(ECrimeFactoryPreflightSeverity Severity, const FString& Message);
    void Pass(const FString& Message) { Add(ECrimeFactoryPreflightSeverity::Pass, Message); }
    void Warning(const FString& Message) { Add(ECrimeFactoryPreflightSeverity::Warning, Message); }
    void Error(const FString& Message) { Add(ECrimeFactoryPreflightSeverity::Error, Message); }
    bool HasErrors() const { return ErrorCount > 0; }
    FString BuildReport(const FString& PluginName) const;
};

/** Presentation data only; failure classification and log discovery stay with the packaging workflow. */
struct FCrimeFactoryPackagingFailure
{
    FString PluginName;
    FString ResultType;
    FString Phase;
    FString Category;
    FString Mode;
    FString ChunkId;
    double RunTime = 0.0;
    FString Message;
    FString Suggestion;
    FString ExceptionType;
    FString Details;
    FString RelevantLogLines;
    FString LogFile;
    FString LogFolder;
    FString ResultFile;
    int32 RemainingModCount = 0;

    FString BuildReport() const;
};

namespace CrimeFactoryPackagingUI
{
    // Shared CrimeFactory dialog pieces, also used by the mod information inspector.
    TSharedRef<SWidget> MakeHeader(const FString& Name, const FText& Section, const FText& Status,
        const FText& Help, ECrimeFactoryPreflightSeverity Severity);
    TSharedRef<SWidget> MakeSummaryCard(const FText& Label, const FText& Value, ECrimeFactoryPreflightSeverity Severity);
    TSharedRef<SWidget> MakeMessagePanel(const FString& Message, ECrimeFactoryPreflightSeverity Severity);
    TSharedRef<SWidget> MakeCopyReportButton(const FString& Report);

    /** Uses native editor feedback; unattended callers capture output without creating windows. */
    bool RunSetup(const FString& BatchFile, const FString& Arguments, int32& OutReturnCode,
        FString& OutOutput, const FString& Action, const FString& Detail);

    /** Shared by the modal dialog and the UI regression preview. Decision is true only for Continue. */
    TSharedRef<SWidget> MakePreflightContent(const FString& PluginName,
        const FCrimeFactoryPreflightResult& Result, const TDelegate<void(bool)>& OnDecision);

    /** Fails closed when confirmation cannot be shown (including unattended execution). */
    bool ConfirmPreflight(const FString& PluginName, const FCrimeFactoryPreflightResult& Result);

    TSharedRef<SWidget> MakeFailureContent(const FCrimeFactoryPackagingFailure& Failure, const FSimpleDelegate& OnClose);

    /** Non-modal: opening logs and fixing assets remain possible after a failed forge. */
    void ShowFailure(const FCrimeFactoryPackagingFailure& Failure);
}
