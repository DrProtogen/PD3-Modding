#include "SuziePlugin.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/AsyncLoading2.h"
#include "Engine/Blueprint.h"
#include "UObject/Class.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/Package.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UnrealType.h"
#include "UObject/PropertyPortFlags.h"
#include "UObject/LinkerLoad.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/IConsoleManager.h"
#include "Editor/EditorEngine.h"
#include "Framework/Commands/UICommandList.h"
#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/Level.h"
#include "GameFramework/WorldSettings.h"
#include "UObject/ObjectSaveContext.h"
#include "Misc/CoreDelegates.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "PropertyEditorModule.h"
#include "SuzieDecompressionHelper.h"
#include "Widgets/Docking/SDockTab.h"
#include "UObject/UObjectAllocator.h"
#include "Misc/ScopedSlowTask.h"
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
#include "UObject/PropertyOptional.h"
#endif

DEFINE_LOG_CATEGORY(LogSuzie);

namespace
{
    // Every reconstructed native UFunction uses the same compatibility thunk. Keep an
    // identity set so the thunk can recover the real callee on VM fast paths such as
    // EX_CallMath, which call UFunction::GetNativeFunc() directly and therefore do not
    // update FFrame::CurrentNativeFunction via UFunction::Invoke().
    static TSet<UFunction*> GSuzieSyntheticNativeFunctions;

    static FDelegateHandle GSuziePostEngineInitHandle;
    static FDelegateHandle GSuzieDoorPersistencePreSaveHandle;


    // Some reconstructed retail classes contain large custom native Serialize() payloads
    // after their reflected properties. Suzie cannot synthesize a C++ virtual Serialize()
    // override for a UClass created at runtime, so the cooked-editor export loader consumes
    // those opaque tails after Super/reflection serialization has completed.
    //
    // Keep the normal Suzie fallback tightly bounded (64 KiB by default). AI visibility is
    // a known exception: PAYDAY 3 stores roughly 32 MiB of generated visibility data in
    // USBZAIVisibilityComponent, so allow a larger bounded tail only once that exact class
    // is reconstructed. The metadata is also available to newer loader implementations
    // that support per-class limits directly.
    static void ApplySuzieOpaqueTailCompatibilityForClass(UClass* Class, const FString& ClassPath)
    {
        if (Class == nullptr || ClassPath != TEXT("/Script/Starbreeze.SBZAIVisibilityComponent"))
        {
            return;
        }

        constexpr int32 AIVisibilityOpaqueTailLimitBytes = 64 * 1024 * 1024;

        Class->SetMetaData(TEXT("SuzieOpaqueTailMaxBytes"), TEXT("67108864"));

        if (IConsoleVariable* MaxTailCVar = IConsoleManager::Get().FindConsoleVariable(
            TEXT("pd3.CookedEditor.MaxSuzieOpaqueTailBytes")))
        {
            const int32 PreviousLimit = MaxTailCVar->GetInt();
            if (PreviousLimit < AIVisibilityOpaqueTailLimitBytes)
            {
                MaxTailCVar->Set(AIVisibilityOpaqueTailLimitBytes, ECVF_SetByCode);
                UE_LOG(
                    LogSuzie,
                    Display,
                    TEXT("PD3 cooked-editor opaque-tail limit raised from %d to %d bytes for %s"),
                    PreviousLimit,
                    AIVisibilityOpaqueTailLimitBytes,
                    *ClassPath);
            }
        }
        else
        {
            UE_LOG(
                LogSuzie,
                Warning,
                TEXT("Could not find pd3.CookedEditor.MaxSuzieOpaqueTailBytes while enabling large opaque-tail compatibility for %s"),
                *ClassPath);
        }
    }

    static void LogSuzieDoorPersistenceState(const TCHAR* Stage, UObject* Object)
    {
        if (Object == nullptr)
        {
            return;
        }

        UClass* DoorClass = FindObject<UClass>(nullptr, TEXT("/Script/Starbreeze.SBZInteractableDoor"));
        if (DoorClass == nullptr || !Object->IsA(DoorClass))
        {
            return;
        }

        FFloatProperty* MaxAngleProperty = FindFProperty<FFloatProperty>(DoorClass, TEXT("MaxSlammedOpenAngle"));
        if (MaxAngleProperty == nullptr)
        {
            return;
        }

        const float ObjectValue = MaxAngleProperty->GetPropertyValue_InContainer(Object);

        UObject* ClassCDO = Object->GetClass() ? Object->GetClass()->GetDefaultObject(false) : nullptr;
        const float ClassCDOValue = ClassCDO
            ? MaxAngleProperty->GetPropertyValue_InContainer(ClassCDO)
            : 0.0f;

        UObject* Archetype = Object->GetArchetype();
        const float ArchetypeValue = Archetype
            ? MaxAngleProperty->GetPropertyValue_InContainer(Archetype)
            : 0.0f;

        UE_LOG(LogSuzie, Display,
            TEXT("[DoorPersistence] %s Object=%s Class=%s MaxSlammedOpenAngle=%g ClassCDO=%g Archetype=%s ArchetypeValue=%g Flags=0x%016llX Offset=0x%X Size=%d"),
            Stage,
            *Object->GetPathName(),
            Object->GetClass() ? *Object->GetClass()->GetPathName() : TEXT("<null>"),
            ObjectValue,
            ClassCDOValue,
            Archetype ? *Archetype->GetPathName() : TEXT("<null>"),
            ArchetypeValue,
            static_cast<unsigned long long>(MaxAngleProperty->GetPropertyFlags()),
            MaxAngleProperty->GetOffset_ForInternal(),
            MaxAngleProperty->GetSize());
    }

    static void OnSuzieDoorPersistencePreSave(UObject* Object, FObjectPreSaveContext SaveContext)
    {
        LogSuzieDoorPersistenceState(TEXT("PreSave"), Object);
    }

    // UEngine resolves WorldSettingsClassName into the cached WorldSettingsClass during
    // engine startup. Suzie creates missing /Script classes dynamically, so the interactive
    // editor may need its cached class rebound after reconstruction. Cook commandlets must
    // not touch this setting: they should load and serialize the authored WorldSettings
    // object exactly as it exists in the source package.
    static void ApplySuzieWorldSettingsClassOverride()
    {
        if (IsRunningCommandlet())
        {
            UE_LOG(LogSuzie, VeryVerbose,
                TEXT("WorldSettings class override skipped in commandlet; cook will preserve the authored WorldSettings object/class unchanged"));
            return;
        }

        UClass* SBZWorldSettingsClass = FindObject<UClass>(
            nullptr,
            TEXT("/Script/Starbreeze.SBZWorldSettings"));

        if (SBZWorldSettingsClass == nullptr)
        {
            UE_LOG(LogSuzie, VeryVerbose,
                TEXT("SBZWorldSettings override skipped: generated class is not available yet"));
            return;
        }

        if (!SBZWorldSettingsClass->IsChildOf(AWorldSettings::StaticClass()))
        {
            UE_LOG(LogSuzie, Error,
                TEXT("Cannot use %s as WorldSettingsClass because it is not derived from %s"),
                *SBZWorldSettingsClass->GetPathName(),
                *AWorldSettings::StaticClass()->GetPathName());
            return;
        }

        if (GEngine == nullptr)
        {
            UE_LOG(LogSuzie, VeryVerbose,
                TEXT("SBZWorldSettings generated before GEngine exists; override will be retried at OnPostEngineInit"));
            return;
        }

        UClass* PreviousWorldSettingsClass = GEngine->WorldSettingsClass.Get();

        // Keep both the configured soft path and the resolved class cache coherent. The
        // latter is what UWorld/ULevel use when they need to create a WorldSettings actor.
        GEngine->WorldSettingsClassName = FSoftClassPath(TEXT("/Script/Starbreeze.SBZWorldSettings"));
        GEngine->WorldSettingsClass = SBZWorldSettingsClass;

        UE_LOG(LogSuzie, Display,
            TEXT("Editor WorldSettings class rebound: %s -> %s"),
            PreviousWorldSettingsClass ? *PreviousWorldSettingsClass->GetPathName() : TEXT("<null>"),
            *SBZWorldSettingsClass->GetPathName());
    }

    // No cook-time WorldSettings hooks live here intentionally. Suzie reconstructs the
    // /Script class reflection needed to deserialize the package, but the cooker owns the
    // existing WorldSettings object graph and property values.

    // Return the native module name for a /Script/<Module>.<Object> path.
    static bool TryGetSuzieScriptModuleName(const FString& ObjectPath, FString& OutModuleName)
    {
        static const FString ScriptPrefix(TEXT("/Script/"));
        if (!ObjectPath.StartsWith(ScriptPrefix, ESearchCase::CaseSensitive))
        {
            return false;
        }

        const int32 ModuleStart = ScriptPrefix.Len();
        int32 ModuleEnd = ObjectPath.Len();

        const int32 DotIndex = ObjectPath.Find(
            TEXT("."),
            ESearchCase::CaseSensitive,
            ESearchDir::FromStart,
            ModuleStart);
        if (DotIndex != INDEX_NONE)
        {
            ModuleEnd = FMath::Min(ModuleEnd, DotIndex);
        }

        const int32 ColonIndex = ObjectPath.Find(
            TEXT(":"),
            ESearchCase::CaseSensitive,
            ESearchDir::FromStart,
            ModuleStart);
        if (ColonIndex != INDEX_NONE)
        {
            ModuleEnd = FMath::Min(ModuleEnd, ColonIndex);
        }

        if (ModuleEnd <= ModuleStart)
        {
            return false;
        }

        OutModuleName = ObjectPath.Mid(ModuleStart, ModuleEnd - ModuleStart);
        return !OutModuleName.IsEmpty();
    }

    // In the cooked-editor workflow Suzie is the replacement for MISSING native
    // reflection only. The important distinction is whether a real native module is
    // merely present on disk or has already completed loading/registration.
    //
    // If a native module exists but is NOT loaded yet, defer all reconstruction for
    // that module. This avoids pre-creating UHT objects/CDOs that the real module will
    // later register (for example ChaosVDBlueprint), which would make
    // StaticAllocateObject fail with "Cannot replace existing object of a different
    // class".
    //
    // If the native module IS already loaded, it is safe to let Suzie reconstruct only
    // objects that are still missing from that module. FindOrCreate* always probes the
    // live UObject first, so genuine native reflection remains untouched while retail
    // classes absent from this editor build (for example
    // /Script/Engine.AnimNotifyState_WarpingBase) can still be synthesized.
    static bool IsSuzieReconstructibleScriptPath(const FString& ObjectPath)
    {
        FString ModuleName;
        if (!TryGetSuzieScriptModuleName(ObjectPath, ModuleName))
        {
            return false;
        }

        FString NativeModuleFilename;
        if (FModuleManager::Get().ModuleExists(*ModuleName, &NativeModuleFilename))
        {
            const FName NativeModuleName(*ModuleName);
            if (!FModuleManager::Get().IsModuleLoaded(NativeModuleName))
            {
                UE_LOG(
                    LogSuzie,
                    VeryVerbose,
                    TEXT("Deferring %s until native module %s loads (%s)"),
                    *ObjectPath,
                    *ModuleName,
                    *NativeModuleFilename);
                return false;
            }

            UE_LOG(
                LogSuzie,
                VeryVerbose,
                TEXT("Native module %s is already loaded; allowing reconstruction of missing reflection object %s"),
                *ModuleName,
                *ObjectPath);
        }

        return true;
    }

    /**
     * Generic native thunk used by jmap-reconstructed native UFunctions.
     *
     * The original game functions cannot be called from the editor process, but keeping
     * FUNC_Native and native call semantics is important. Generated-header stubs behave
     * the same way: consume the VM parameters synchronously and return a deterministic
     * default value instead of executing synthetic Blueprint bytecode.
     */
    void ExecSuzieNativeStub(UObject* Context, FFrame& Stack, RESULT_DECL)
    {
        // Normal native calls pass through UFunction::Invoke(), which guards
        // CurrentNativeFunction with the actual callee. EX_CallMath is deliberately
        // faster: it reads the UFunction* from bytecode and calls GetNativeFunc()
        // directly. In that path CurrentNativeFunction still names the outer Blueprint
        // frame (for example BP_EscapeVan_C:UserConstructionScript).
        UFunction* Function = Stack.CurrentNativeFunction;
        if (!GSuzieSyntheticNativeFunctions.Contains(Function))
        {
            Function = nullptr;

            // EX_CallMath bytecode is:
            //   EX_CallMath, <ScriptPointerType UFunction*>, <argument expressions...>
            // execCallMathFunction has already consumed the 64-bit function pointer when
            // this thunk is entered, so Stack.Code points at the first argument and the
            // exact callee pointer is immediately before it. Never dereference an
            // arbitrary recovered pointer: first compare the raw value against the set of
            // UFunctions Suzie itself created.
            if (Stack.Code != nullptr && Stack.Node != nullptr && Stack.Node->Script.Num() > 0)
            {
                const uint8* ScriptStart = Stack.Node->Script.GetData();
                const uint8* ScriptEnd = ScriptStart + Stack.Node->Script.Num();
                if (Stack.Code >= ScriptStart + sizeof(ScriptPointerType) && Stack.Code <= ScriptEnd)
                {
                    ScriptPointerType EncodedFunctionPointer = 0;
                    FMemory::Memcpy(
                        &EncodedFunctionPointer,
                        Stack.Code - sizeof(ScriptPointerType),
                        sizeof(ScriptPointerType));

                    UFunction* Candidate = reinterpret_cast<UFunction*>(
                        static_cast<UPTRINT>(EncodedFunctionPointer));

                    if (GSuzieSyntheticNativeFunctions.Contains(Candidate))
                    {
                        Function = Candidate;
                        UE_LOG(LogSuzie, VeryVerbose,
                            TEXT("Resolved synthetic native EX_CallMath callee %s from cooked bytecode while outer frame is %s."),
                            *Function->GetPathName(),
                            Stack.Node ? *Stack.Node->GetPathName() : TEXT("<null>"));
                    }
                }
            }
        }

        if (Function == nullptr)
        {
            UE_LOG(LogSuzie, Error,
                TEXT("Synthetic native thunk could not identify its callee. Outer frame=%s CurrentNativeFunction=%s Code=%p. Stack.Code will not be modified."),
                Stack.Node ? *Stack.Node->GetPathName() : TEXT("<null>"),
                Stack.CurrentNativeFunction ? *Stack.CurrentNativeFunction->GetPathName() : TEXT("<null>"),
                Stack.Code);
            return;
        }

        // Mirror a generated UHT exec thunk as closely as possible. Native thunks unpack
        // parameters according to the UFunction signature with StepCompiledIn and then use
        // P_FINISH to consume EX_EndFunctionParms. This is materially safer than stepping
        // arbitrary expressions with a null result buffer: some VM expressions need a
        // correctly-sized/initialized destination even when the compatibility stub ignores
        // the actual value.
        if (Stack.Code != nullptr)
        {
            int32 ReflectedParameterCount = 0;
            int32 ConsumedParameterCount = 0;

            for (TFieldIterator<FProperty> ParameterIt(Function, EFieldIterationFlags::None); ParameterIt; ++ParameterIt)
            {
                FProperty* Parameter = *ParameterIt;
                if (!Parameter->HasAnyPropertyFlags(CPF_Parm) || Parameter->HasAnyPropertyFlags(CPF_ReturnParm))
                {
                    continue;
                }

                ++ReflectedParameterCount;

                // The cooked call site may legally contain fewer arguments for defaults.
                // If the bytecode has already reached the real marker, stop exactly here.
                if (*Stack.Code == EX_EndFunctionParms)
                {
                    break;
                }

                const int32 ScratchSize = FMath::Max(1, Parameter->GetSize());
                const uint32 ScratchAlignment = static_cast<uint32>(FMath::Max(1, Parameter->GetMinAlignment()));
                void* ScratchValue = FMemory::Malloc(ScratchSize, ScratchAlignment);
                FMemory::Memzero(ScratchValue, ScratchSize);
                Parameter->InitializeValue(ScratchValue);

                uint8* CodeBeforeStep = Stack.Code;

                // This is the dynamic equivalent of P_GET_PROPERTY/P_GET_STRUCT/etc.
                // When bytecode is present StepCompiledIn executes the encoded expression;
                // the expected field class preserves UHT-style type/order validation.
                Stack.StepCompiledIn(ScratchValue, Parameter->GetClass());

                Parameter->DestroyValue(ScratchValue);
                FMemory::Free(ScratchValue);

                ++ConsumedParameterCount;

                if (Stack.Code == CodeBeforeStep)
                {
                    UE_LOG(LogSuzie, Error,
                        TEXT("Synthetic native stub %s failed to advance while unpacking parameter %s (%d/%d)."),
                        *Function->GetPathName(),
                        *Parameter->GetName(),
                        ConsumedParameterCount,
                        ReflectedParameterCount);
                    return;
                }
            }

            if (*Stack.Code != EX_EndFunctionParms)
            {
                // Do not scan or blindly step unknown bytes here. If the reconstructed
                // signature disagrees with the cooked call site, advancing heuristically
                // corrupts the caller's instruction pointer. Log enough information to
                // identify the exact function/signature mismatch instead.
                const uint8 NextOpcode = *Stack.Code;
                UE_LOG(LogSuzie, Error,
                    TEXT("Synthetic native stub signature mismatch for %s: consumed %d reflected parameter(s) but next byte is 0x%02X instead of EX_EndFunctionParms (0x%02X). Stack.Code will not be advanced."),
                    *Function->GetPathName(),
                    ConsumedParameterCount,
                    static_cast<uint32>(NextOpcode),
                    static_cast<uint32>(EX_EndFunctionParms));
                return;
            }

            // Exact P_FINISH equivalent after positively validating the marker.
            ++Stack.Code;
        }

        // Generated-header-style deterministic return value. Keep this independent of the
        // reconstructed parameter-frame offsets so a harmless layout difference in another
        // argument cannot corrupt the result buffer.
        if (RESULT_PARAM != nullptr)
        {
            if (FProperty* ReturnProperty = Function->GetReturnProperty())
            {
                const int32 ReturnSize = FMath::Max(1, ReturnProperty->GetSize());
                const uint32 ReturnAlignment = static_cast<uint32>(FMath::Max(1, ReturnProperty->GetMinAlignment()));
                void* DefaultValue = FMemory::Malloc(ReturnSize, ReturnAlignment);
                FMemory::Memzero(DefaultValue, ReturnSize);
                ReturnProperty->InitializeValue(DefaultValue);
                ReturnProperty->CopyCompleteValue(RESULT_PARAM, DefaultValue);
                ReturnProperty->DestroyValue(DefaultValue);
                FMemory::Free(DefaultValue);
            }
        }
    }

    /**
     * Suzie creates reflected /Script objects after the engine's normal compiled-in
     * registration pass has completed. Notify AsyncLoading2 explicitly so cooked
     * package imports can resolve these dynamically-created script objects.
     *
     * The custom PAYDAY 3 editor fork extends NotifyRegistrationEvent with a
     * FinishedObject argument. The stock engine does not expose this signature.
     */
    void NotifyDynamicScriptObjectRegistration(UObject* Object, ENotifyRegistrationType RegistrationType)
    {
        if (Object == nullptr)
        {
            return;
        }

        UPackage* OutermostPackage = Object->GetOutermost();
        if (OutermostPackage == nullptr)
        {
            UE_LOG(LogSuzie, Warning, TEXT("Cannot register dynamic script object %s because it has no outermost package"), *Object->GetPathName());
            return;
        }

        const FString PackageName = OutermostPackage->GetName();

        // NotifyRegistrationEvent builds the script-import identity from PackageName + Name.
        // For top-level objects (classes, structs, enums, CDOs) GetName() is sufficient, but
        // a nested no-export object must retain its owner chain. Passing only
        // "MinigameAudioComponent" would register /Script/Starbreeze.MinigameAudioComponent
        // instead of the retail path /Script/Starbreeze.Default__<Owner>:MinigameAudioComponent,
        // so AsyncLoading2 could never resolve the cooked TemplateIndex.
        FString RegistrationName = Object->GetName();
        if (RegistrationType == ENotifyRegistrationType::NRT_NoExportObject
            && Object->GetOuter() != OutermostPackage)
        {
            RegistrationName = Object->GetPathName(OutermostPackage);

            // GetPathName(StopOuter) is normally already relative, but keep the event name
            // canonical if an engine branch returns a leading separator.
            RegistrationName.RemoveFromStart(TEXT("."));
        }

        NotifyRegistrationEvent(
            *PackageName,
            *RegistrationName,
            RegistrationType,
            ENotifyRegistrationPhase::NRP_Finished,
            nullptr,
            true,
            Object);

        const FString FullScriptPath = Object->GetPathName();
        const uint64 ScriptImportId = FPackageObjectIndex::FromScriptPath(FullScriptPath).Value();
        UE_LOG(LogSuzie, VeryVerbose,
            TEXT("Late-registered script object %s as %s + %s (script import 0x%016llX)"),
            *FullScriptPath,
            *PackageName,
            *RegistrationName,
            static_cast<unsigned long long>(ScriptImportId));
    }
}

#define LOCTEXT_NAMESPACE "FSuziePluginModule"

void FSuziePluginModule::StartupModule()
{
    UE_LOG(LogSuzie, Display, TEXT("Suzie plugin starting"));

    ProcessAllJsonClassDefinitions();

    if (!GSuzieDoorPersistencePreSaveHandle.IsValid())
    {
        GSuzieDoorPersistencePreSaveHandle = FCoreUObjectDelegates::OnObjectPreSave.AddStatic(
            &OnSuzieDoorPersistencePreSave);
    }

    // Only the interactive editor needs its cached WorldSettings class rebound after
    // Suzie reconstructs /Script/Starbreeze.SBZWorldSettings. Cook commandlets must not
    // reassign the engine default, replace level WorldSettings, or normalize the actor
    // graph; they simply deserialize and serialize the authored package.
    if (!IsRunningCommandlet())
    {
        ApplySuzieWorldSettingsClassOverride();

        // UEngine::InitializeObjectReferences may run after PreDefault modules and can
        // refresh the cached default-class reference, so re-assert it once after engine
        // initialization for the interactive editor only.
        if (!GSuziePostEngineInitHandle.IsValid())
        {
            GSuziePostEngineInitHandle = FCoreDelegates::OnPostEngineInit.AddStatic(
                &ApplySuzieWorldSettingsClassOverride);
        }
    }
    else
    {
        UE_LOG(LogSuzie, Display,
            TEXT("Commandlet detected: Suzie will not reassign or normalize WorldSettings during cook"));
    }
}

void FSuziePluginModule::ShutdownModule()
{
    if (GSuziePostEngineInitHandle.IsValid())
    {
        FCoreDelegates::OnPostEngineInit.Remove(GSuziePostEngineInitHandle);
        GSuziePostEngineInitHandle.Reset();
    }

    if (GSuzieDoorPersistencePreSaveHandle.IsValid())
    {
        FCoreUObjectDelegates::OnObjectPreSave.Remove(GSuzieDoorPersistencePreSaveHandle);
        GSuzieDoorPersistencePreSaveHandle.Reset();
    }

    UE_LOG(LogSuzie, Display, TEXT("Suzie plugin shutting down"));
}

void FSuziePluginModule::ProcessAllJsonClassDefinitions()
{
    
    // Define where we expect JSON class definitions to be
    const FString JsonClassesPath = FPaths::ProjectContentDir() / TEXT("DynamicClasses");
    
    // Check if directory exists
    if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*JsonClassesPath))
    {
        UE_LOG(LogSuzie, Warning, TEXT("JSON Classes directory not found: %s"), *JsonClassesPath);
        return;
    }
    
    // Find all JSON files and compressed JSON files
    TArray<FString> JsonFileNames;
    IFileManager::Get().FindFiles(JsonFileNames, *JsonClassesPath, TEXT("*.jmap"));

    TArray<FString> CompressedJsonFileNames;
    IFileManager::Get().FindFiles(CompressedJsonFileNames, *JsonClassesPath, TEXT("*.jmap.gz"));
    
    UE_LOG(LogSuzie, Display, TEXT("Found %d JSON class definition files"), JsonFileNames.Num() + CompressedJsonFileNames.Num());

    // This can potentially take some time so show a progress task
    const int32 TotalAmountOfWork = JsonFileNames.Num() + CompressedJsonFileNames.Num();
    FScopedSlowTask GenerateDynamicClassesTask(TotalAmountOfWork, LOCTEXT("GeneratingDynamicClasses", "Suzie: Generating Dynamic Classes"));
    GenerateDynamicClassesTask.Visibility = ESlowTaskVisibility::ForceVisible;
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3    
    GenerateDynamicClassesTask.Visibility = ESlowTaskVisibility::Important;
    GenerateDynamicClassesTask.ForceRefresh();
#endif
    
    // Process each JSON file
    for (const FString& JsonFileName : JsonFileNames)
    {
        GenerateDynamicClassesTask.EnterProgressFrame(1, FText::Format(LOCTEXT("ProcessingJsonFile", "Generating classes for file {0}"), FText::AsCultureInvariant(JsonFileName)));
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3    
        GenerateDynamicClassesTask.ForceRefresh();
#endif
        UE_LOG(LogSuzie, Display, TEXT("Processing JSON class definition: %s"), *JsonFileName);
    
        // Read the JSON file
        FString JsonContent;
        if (!FFileHelper::LoadFileToString(JsonContent, *(JsonClassesPath / JsonFileName)))
        {
            UE_LOG(LogSuzie, Error, TEXT("Failed to read JSON file: %s"), *JsonFileName);
            return;
        }
    
        // Parse the JSON
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonContent);
        if (!FJsonSerializer::Deserialize(JsonReader, JsonObject) || !JsonObject.IsValid())
        {
            UE_LOG(LogSuzie, Error, TEXT("Failed to parse JSON in file: %s"), *JsonFileName);
            continue;
        }
        CreateDynamicClassesForJsonObject(JsonObject);
    }
    
    // Process each compressed JSON file
    for (const FString& CompressedJsonFileName : CompressedJsonFileNames)
    {
        GenerateDynamicClassesTask.EnterProgressFrame(1, FText::Format(LOCTEXT("ProcessingJsonFile", "Generating classes for file {0}"), FText::AsCultureInvariant(CompressedJsonFileName)));
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3    
        GenerateDynamicClassesTask.ForceRefresh();
#endif
        UE_LOG(LogSuzie, Display, TEXT("Processing compressed JSON class definition: %s"), *CompressedJsonFileName);

        // Read binary file contents
        TArray<uint8> CompressedFileContents;
        if (!FFileHelper::LoadFileToArray(CompressedFileContents, *(JsonClassesPath / CompressedJsonFileName)))
        {
            UE_LOG(LogSuzie, Error, TEXT("Failed to read compressed JSON file: %s"), *CompressedJsonFileName);
            return;
        }

        // Attempt to decompress the file as Gzip archive
        TArray<uint8> DecompressedFileContents;
        if (!FSuzieDecompressionHelper::DecompressMemoryGzip(CompressedFileContents, DecompressedFileContents))
        {
            UE_LOG(LogSuzie, Error, TEXT("Failed to decompress compressed JSON file as valid GZIP: %s"), *CompressedJsonFileName);
            return;
        }

        // Parse the binary stream into the string. UE will attempt to guess the encoding for us
        FString JsonContent;
        FFileHelper::BufferToString(JsonContent, DecompressedFileContents.GetData(), DecompressedFileContents.Num());
        
        // Parse the JSON
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonContent);
        if (!FJsonSerializer::Deserialize(JsonReader, JsonObject) || !JsonObject.IsValid())
        {
            UE_LOG(LogSuzie, Error, TEXT("Failed to parse compressed JSON in file: %s"), *CompressedJsonFileName);
            continue;
        }
        CreateDynamicClassesForJsonObject(JsonObject);
    }
}

void FSuziePluginModule::CreateDynamicClassesForJsonObject(const TSharedPtr<FJsonObject>& RootObject)
{
    const TSharedPtr<FJsonObject>* Objects;
    if (!RootObject->TryGetObjectField(TEXT("objects"), Objects))
    {
        UE_LOG(LogSuzie, Error, TEXT("Missing 'objects' map"));
        return;
    }

    // Create class generation context
    FDynamicClassGenerationContext ClassGenerationContext;
    ClassGenerationContext.GlobalObjectMap = *Objects;

    // Create classes, script structs and global delegate functions
    for (auto It = (*Objects)->Values.CreateConstIterator(); It; ++It)
    {
        FString ObjectPath = It.Key();
        FString Type = It.Value()->AsObject()->GetStringField(TEXT("type"));

        // Never pre-create retail cooked /Game reflection objects from the jmap.
        // Those objects must be supplied by IoStore when their package is loaded.
        if (!IsSuzieReconstructibleScriptPath(ObjectPath))
        {
            continue;
        }
        if (Type == TEXT("Class"))
        {
            // Meatloaf bug (commit d8179e8): CDOs of UClass-derived native classes will be labeled with Class type, instead of "Object" type, which will result in a crash
            // down the line due to the CDO being created with the wrong class type
            FString PackageName;
            FString ClassName;
            ParseObjectPath(ObjectPath, PackageName, ClassName);
            if (ClassName.StartsWith(TEXT("Default__")))
            {
                continue;
            }
            UE_LOG(LogSuzie, Verbose, TEXT("Creating class %s"), *ObjectPath);
            FindOrCreateClass(ClassGenerationContext, ObjectPath);
        }
        else if (Type == TEXT("ScriptStruct"))
        {
            UE_LOG(LogSuzie, Verbose, TEXT("Creating struct %s"), *ObjectPath);
            FindOrCreateScriptStruct(ClassGenerationContext, ObjectPath);
        }
        else if (Type == TEXT("Enum"))
        {
            UE_LOG(LogSuzie, Verbose, TEXT("Creating enum %s"), *ObjectPath);
            FindOrCreateEnum(ClassGenerationContext, ObjectPath);
        }
        else if (Type == TEXT("Function"))
        {
            UE_LOG(LogSuzie, VeryVerbose, TEXT("Creating function %s"), *ObjectPath);
            FindOrCreateFunction(ClassGenerationContext, ObjectPath);
        }
    }

    // Construct classes that have been created but have not been constructed yet due to nobody referencing them
    while (!ClassGenerationContext.ClassesPendingConstruction.IsEmpty())
    {
        TArray<FString> ClassPathsPendingConstruction;
        ClassGenerationContext.ClassesPendingConstruction.GenerateValueArray(ClassPathsPendingConstruction);
        for (const FString& ClassPath : ClassPathsPendingConstruction)
        {
            FindOrCreateClass(ClassGenerationContext, ClassPath);
        }
    }

    // Finalize all classes that we have created now. This includes assembling reference streams, creating default subobjects and populating them with data
    TArray<UClass*> ClassesPendingFinalization;
    ClassGenerationContext.ClassesPendingFinalization.GenerateKeyArray(ClassesPendingFinalization);
    for (UClass* ClassPendingFinalization : ClassesPendingFinalization)
    {
        FinalizeClass(ClassGenerationContext, ClassPendingFinalization);
    }


}

UPackage* FSuziePluginModule::FindOrCreatePackage(FDynamicClassGenerationContext& Context, const FString& PackageName)
{
    int32 UnusedCharacterIndex;
    checkf(!PackageName.FindChar('.', UnusedCharacterIndex) && !PackageName.FindChar(':', UnusedCharacterIndex),
        TEXT("Invalid package name: %s"), *PackageName);
    
    UPackage* Package = CreatePackage(*PackageName);

    // Mirror the package state produced for a real UHT/native /Script module.
    // PKG_CompiledIn alone is enough for many editor reflection lookups, but the
    // cooker also needs to recognise this as a runtime script package when it tags
    // imports for maps/assets. Without PKG_ContainsScript a dynamically-created
    // class can work perfectly in the interactive editor yet be discarded/remapped
    // while cooking, which is especially visible with UWorld's WorldSettings class.
    Package->SetPackageFlags(PKG_CompiledIn | PKG_ContainsScript);
    Package->ClearPackageFlags(PKG_EditorOnly | PKG_UncookedOnly);

    // Keep the synthetic script package addressable as a top-level runtime package.
    // Do not mark it PKG_Cooked here: this package represents compiled-in reflection,
    // not a package that should itself be emitted into the mod container.
    Package->SetFlags(RF_Public | RF_Standalone);

    // Suzie creates /Script packages after the engine's initial native registration phase.
    // Keep them explicitly rooted for the lifetime of the editor so AsyncLoading2's
    // late script-import table can never retain a package pointer that GC has reclaimed.
    Package->AddToRoot();
    return Package;
}

UClass* FSuziePluginModule::GetPlaceholderNonNativePropertyOwnerClass()
{
    static UBlueprintGeneratedClass* PlaceholderNonNativeOwnerClass = nullptr;
    if (PlaceholderNonNativeOwnerClass == nullptr)
    {
        PlaceholderNonNativeOwnerClass = NewObject<UBlueprintGeneratedClass>(GetTransientPackage(), TEXT("SuziePlaceholderBlueprintClass"), RF_Public | RF_Transient | RF_MarkAsRootSet);
        PlaceholderNonNativeOwnerClass->AddToRoot();
        PlaceholderNonNativeOwnerClass->SetSuperStruct(UObject::StaticClass());
        PlaceholderNonNativeOwnerClass->ClassFlags = CLASS_Abstract | CLASS_Hidden | CLASS_Transient;

        PlaceholderNonNativeOwnerClass->Bind();
        PlaceholderNonNativeOwnerClass->StaticLink(true);
    }
    return PlaceholderNonNativeOwnerClass;
}

UClass* FSuziePluginModule::FindOrCreateUnregisteredClass(FDynamicClassGenerationContext& Context, const FString& ClassPath)
{
    // Attempt to find an existing class first
    if (UClass* ExistingClass = FindObject<UClass>(nullptr, *ClassPath))
    {
        return ExistingClass;
    }
    if (!IsSuzieReconstructibleScriptPath(ClassPath))
    {
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Leaving cooked non-/Script class %s to the package loader"), *ClassPath);
        return nullptr;
    }
    // We need to handle this case here because of the possibility of native class having a function that requries a child class as an argument
    if (Context.UnregisteredDynamicClassConstructionStack.Contains(ClassPath))
    {
        UE_LOG(LogSuzie, Warning, TEXT("Attempt to re-entry into unregistered class construction for class %s. Likely cause is a parent class using child class as a function argument"), *ClassPath);
        return nullptr;
    }
    Context.UnregisteredDynamicClassConstructionStack.Add(ClassPath);
    
    const TSharedPtr<FJsonObject> ClassDefinition = Context.GlobalObjectMap->GetObjectField(ClassPath);
    checkf(ClassDefinition.IsValid(), TEXT("Failed to find class object by path %s"), *ClassPath);
    
    const FString ObjectType = ClassDefinition->GetStringField(TEXT("type"));
    checkf(ObjectType == TEXT("Class"), TEXT("FindOrCreateUnregisteredClass expected Class object %s, got object of type %s"), *ClassPath, *ObjectType);

    // Meatloaf bug (commit d8179e8): UClass-derived native classes will produce Null super_struct, which will crash Suzie down the line
    // Attempt to recover by assuming UClass parent in this case for this class
    const FString ParentClassPath = ClassDefinition->GetStringField(TEXT("super_struct"));
    UClass* ParentClass = ParentClassPath.IsEmpty() ? UClass::StaticClass() : FindOrCreateClass(Context, ParentClassPath);
    if (!ParentClass)
    {
        UE_LOG(LogSuzie, Error, TEXT("Parent class not found: %s"), *ParentClassPath);
        return nullptr;
    }
    
    FString PackageName;
    FString ClassName;
    ParseObjectPath(ClassPath, PackageName, ClassName);

    // DeferredRegister for UClass will automatically find the package by name, but we should still prime it before that
    FindOrCreatePackage(Context, PackageName);

    // Note that only flags that are set manually (e.g. non-computed flags) should be listed here
    static const TArray<TPair<FString, EClassFlags>> ClassFlagNameLookup = {
        {TEXT("CLASS_Abstract"), CLASS_Abstract},
        {TEXT("CLASS_EditInlineNew"), CLASS_EditInlineNew},
        {TEXT("CLASS_NotPlaceable"), CLASS_NotPlaceable},
        {TEXT("CLASS_CollapseCategories"), CLASS_CollapseCategories},
        {TEXT("CLASS_Const"), CLASS_Const},
        {TEXT("CLASS_DefaultToInstanced"), CLASS_DefaultToInstanced},
        {TEXT("CLASS_Interface"), CLASS_Interface},
    };

    // Convert class flag names to the class flags bitmask
    EClassFlags ClassFlags = CLASS_Native | CLASS_Intrinsic;
    const TSet<FString> ClassFlagNames = ParseFlags(ClassDefinition->GetStringField(TEXT("class_flags")));
    for (const auto& [ClassFlagName, ClassFlagBit] : ClassFlagNameLookup)
    {
        if (ClassFlagNames.Contains(ClassFlagName))
        {
            ClassFlags |= ClassFlagBit;
        }
    }
    
    // UE does not provide a copy constructor for that type, but it is a very much memcpy-able POD type
    FUObjectCppClassStaticFunctions ClassStaticFunctions;
    memcpy(&ClassStaticFunctions, &ParentClass->CppClassStaticFunctions, sizeof(ClassStaticFunctions));
    
    //Code below is taken from GetPrivateStaticClassBody
    //Allocate memory from ObjectAllocator for class object and call class constructor directly
    UClass* ConstructedClassObject = static_cast<UClass*>(GUObjectAllocator.AllocateUObject(sizeof(UClass), alignof(UClass), true));
    ::new (ConstructedClassObject)UClass(
        EC_StaticConstructor,
        *ClassName,
        ParentClass->GetStructureSize(),
        ParentClass->GetMinAlignment(),
        ClassFlags,
        CASTCLASS_None,
        UObject::StaticConfigName(),
        // Match GetPrivateStaticClassBody's native UClass object flags. RF_Transient
        // is normal for compiled-in reflection objects: maps/assets persist an import
        // to /Script/<Module>.<Class>, not the UClass object as an export.
        RF_Public | RF_Standalone | RF_Transient | RF_MarkAsNative | RF_MarkAsRootSet,
        &FSuziePluginModule::PolymorphicClassConstructorInvocationHelper,
        ParentClass->ClassVTableHelperCtorCaller,
        MoveTemp(ClassStaticFunctions));

    //Set super structure and ClassWithin (they are required prior to registering)
    ConstructedClassObject->SetSuperStruct(ParentClass);
    ConstructedClassObject->ClassWithin = UObject::StaticClass();
#if (ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 5)
    // Added in 5.5, needs to be carried over from the parent class
    ConstructedClassObject->TotalFieldCount = ParentClass->TotalFieldCount;
#endif

    //Field with cpp type info only exists in editor, in shipping SetCppTypeInfoStatic is empty
    static const FCppClassTypeInfoStatic TypeInfoStatic{false};
    ConstructedClassObject->SetCppTypeInfoStatic(&TypeInfoStatic);
    
    //Register pending object, apply class flags, set static type info and link it
    ConstructedClassObject->RegisterDependencies();
    ConstructedClassObject->DeferredRegister(UClass::StaticClass(), *PackageName, *ClassName);
    // RF_MarkAsRootSet is supplied to the low-level UClass constructor, but these
    // classes are created after CloseDisregardForGC. Explicitly root them as well
    // so the late AsyncLoading2 script import table always owns a live UObject.
    ConstructedClassObject->AddToRoot();

    Context.ClassesPendingConstruction.Add(ConstructedClassObject, ClassPath);
    Context.UnregisteredDynamicClassConstructionStack.Remove(ClassPath);
    
    UE_LOG(LogSuzie, Verbose, TEXT("Created dynamic class: %s"), *ClassPath);
    return ConstructedClassObject;
}

// Accessor to allow calling SetOffset_Internal on property objects
class FPropertyAccessor : public FProperty
{
public:
    FPropertyAccessor() = delete;
    static void SetPropertyOffsetDirect(FProperty* InProperty, const int32 NewOffset)
    {
        static_cast<FPropertyAccessor*>(InProperty)->SetOffset_Internal(NewOffset);
    }
};

// jmap contains the original runtime layout of reflected UStructs: property
// offsets, total PropertiesSize and MinAlignment. Those values are useful for
// restoring native-only gaps that reflection cannot see, but they are only safe
// when the property representation in this editor still fits in the retail slot.
//
// Some UE/runtime types changed size between the retail build and this editor
// (multicast delegates are a common example). Never squeeze a larger runtime
// property into a smaller retail slot. Validate the entire type first and either
// apply all dumped offsets/layout values or none of them.
static bool IsWwiseCompatibilityScriptPath(const FString& ObjectPath)
{
    return ObjectPath.StartsWith(TEXT("/Script/AkAudio."))
        || ObjectPath.StartsWith(TEXT("/Script/WwiseResourceLoader."))
        || ObjectPath.StartsWith(TEXT("/Script/WwiseFileHandler."));
}

struct FJmapPropertyLayoutEntry
{
    FProperty* Property = nullptr;
    int32 DumpedOffset = 0;
    int32 DumpedElementSize = 0;
    int32 DumpedArrayDim = 1;
    int32 DumpedStorageSize = 0;
};

static bool TryApplyJmapStructLayout(UStruct* Struct, const TSharedPtr<FJsonObject>& StructDefinition)
{
    if (Struct == nullptr || !StructDefinition.IsValid())
    {
        return false;
    }

    if (!StructDefinition->HasTypedField<EJson::Number>(TEXT("properties_size"))
        || !StructDefinition->HasTypedField<EJson::Number>(TEXT("min_alignment")))
    {
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Keeping Unreal layout for %s because jmap layout metadata is incomplete"), *Struct->GetPathName());
        return false;
    }

    const int32 DumpedPropertiesSize = static_cast<int32>(StructDefinition->GetIntegerField(TEXT("properties_size")));
    const int32 DumpedMinAlignment = FMath::Max(1, static_cast<int32>(StructDefinition->GetIntegerField(TEXT("min_alignment"))));

    if (DumpedPropertiesSize < 0)
    {
        UE_LOG(LogSuzie, Warning, TEXT("Keeping Unreal layout for %s: invalid jmap properties_size %d"), *Struct->GetPathName(), DumpedPropertiesSize);
        return false;
    }

    // A smaller dumped alignment would make instances unsafe for a property type
    // whose runtime representation now requires stricter alignment.
    if (DumpedMinAlignment < Struct->GetMinAlignment())
    {
        UE_LOG(LogSuzie, Warning,
            TEXT("Keeping Unreal layout for %s: jmap alignment %d is smaller than runtime alignment %d"),
            *Struct->GetPathName(), DumpedMinAlignment, Struct->GetMinAlignment());
        return false;
    }

    // If a generated/native parent is larger in this editor than it was in the
    // retail dump, applying the child's retail offsets could overlap the parent.
    if (const UStruct* SuperStruct = Struct->GetSuperStruct())
    {
        if (SuperStruct->GetPropertiesSize() > DumpedPropertiesSize)
        {
            UE_LOG(LogSuzie, Warning,
                TEXT("Keeping Unreal layout for %s: parent runtime size %d exceeds jmap type size %d"),
                *Struct->GetPathName(), SuperStruct->GetPropertiesSize(), DumpedPropertiesSize);
            return false;
        }
    }

    TMap<FName, FProperty*> DirectProperties;
    for (FField* Field = Struct->ChildProperties; Field != nullptr; Field = Field->Next)
    {
        if (FProperty* Property = CastField<FProperty>(Field))
        {
            DirectProperties.Add(Property->GetFName(), Property);
        }
    }

    TArray<FJmapPropertyLayoutEntry> LayoutEntries;
    const TArray<TSharedPtr<FJsonValue>>* PropertyDescriptors = nullptr;
    if (StructDefinition->TryGetArrayField(TEXT("properties"), PropertyDescriptors))
    {
        LayoutEntries.Reserve(PropertyDescriptors->Num());
        for (const TSharedPtr<FJsonValue>& DescriptorValue : *PropertyDescriptors)
        {
            const TSharedPtr<FJsonObject> Descriptor = DescriptorValue->AsObject();
            if (!Descriptor.IsValid())
            {
                UE_LOG(LogSuzie, Warning, TEXT("Keeping Unreal layout for %s: invalid property descriptor in jmap"), *Struct->GetPathName());
                return false;
            }

            const FName PropertyName(*Descriptor->GetStringField(TEXT("name")));
            FProperty** PropertyPtr = DirectProperties.Find(PropertyName);
            if (PropertyPtr == nullptr || *PropertyPtr == nullptr)
            {
                UE_LOG(LogSuzie, Warning,
                    TEXT("Keeping Unreal layout for %s: jmap property %s was not reconstructed"),
                    *Struct->GetPathName(), *PropertyName.ToString());
                return false;
            }

            FJmapPropertyLayoutEntry& Entry = LayoutEntries.AddDefaulted_GetRef();
            Entry.Property = *PropertyPtr;
            Entry.DumpedOffset = static_cast<int32>(Descriptor->GetIntegerField(TEXT("offset")));
            Entry.DumpedElementSize = static_cast<int32>(Descriptor->GetIntegerField(TEXT("size")));
            Entry.DumpedArrayDim = Descriptor->HasTypedField<EJson::Number>(TEXT("array_dim"))
                ? FMath::Max(1, static_cast<int32>(Descriptor->GetIntegerField(TEXT("array_dim"))))
                : 1;

            const int64 DumpedStorageSize64 = static_cast<int64>(Entry.DumpedElementSize) * static_cast<int64>(Entry.DumpedArrayDim);
            if (Entry.DumpedOffset < 0 || Entry.DumpedElementSize < 0 || DumpedStorageSize64 < 0 || DumpedStorageSize64 > MAX_int32)
            {
                UE_LOG(LogSuzie, Warning,
                    TEXT("Keeping Unreal layout for %s: invalid layout for property %s"),
                    *Struct->GetPathName(), *Entry.Property->GetName());
                return false;
            }
            Entry.DumpedStorageSize = static_cast<int32>(DumpedStorageSize64);
        }
    }

    // If Suzie created a direct property that the jmap does not describe, applying
    // the retail layout would leave that property at an unrelated synthetic offset.
    if (LayoutEntries.Num() != DirectProperties.Num())
    {
        UE_LOG(LogSuzie, Warning,
            TEXT("Keeping Unreal layout for %s: reconstructed property count %d does not match jmap property count %d"),
            *Struct->GetPathName(), DirectProperties.Num(), LayoutEntries.Num());
        return false;
    }

    LayoutEntries.Sort([](const FJmapPropertyLayoutEntry& A, const FJmapPropertyLayoutEntry& B)
    {
        return A.DumpedOffset < B.DumpedOffset;
    });

    const int32 SuperPropertiesSize = Struct->GetSuperStruct() ? Struct->GetSuperStruct()->GetPropertiesSize() : 0;
    for (int32 Index = 0; Index < LayoutEntries.Num(); ++Index)
    {
        const FJmapPropertyLayoutEntry& Entry = LayoutEntries[Index];
        const int32 RuntimeStorageSize = Entry.Property->GetSize();
        const int32 RuntimeAlignment = FMath::Max(1, Entry.Property->GetMinAlignment());
        const int32 SlotEnd = (Index + 1 < LayoutEntries.Num()) ? LayoutEntries[Index + 1].DumpedOffset : DumpedPropertiesSize;
        const int32 SlotCapacity = SlotEnd - Entry.DumpedOffset;

        if (Entry.DumpedOffset < SuperPropertiesSize)
        {
            UE_LOG(LogSuzie, Warning,
                TEXT("Keeping Unreal layout for %s: property %s offset 0x%X overlaps parent runtime size 0x%X"),
                *Struct->GetPathName(), *Entry.Property->GetName(), Entry.DumpedOffset, SuperPropertiesSize);
            return false;
        }

        if ((Entry.DumpedOffset % RuntimeAlignment) != 0)
        {
            UE_LOG(LogSuzie, Warning,
                TEXT("Keeping Unreal layout for %s: property %s retail offset 0x%X is not aligned for runtime alignment %d"),
                *Struct->GetPathName(), *Entry.Property->GetName(), Entry.DumpedOffset, RuntimeAlignment);
            return false;
        }

        // Compare total storage, not just jmap 'size': size is per element and
        // fixed-size arrays carry array_dim separately.
        if (RuntimeStorageSize > Entry.DumpedStorageSize || RuntimeStorageSize > SlotCapacity)
        {
            UE_LOG(LogSuzie, Warning,
                TEXT("Keeping Unreal layout for %s: property %s needs %d runtime bytes but retail slot provides %d bytes (offset=0x%X, element=%d x %d)"),
                *Struct->GetPathName(), *Entry.Property->GetName(), RuntimeStorageSize,
                FMath::Min(Entry.DumpedStorageSize, SlotCapacity), Entry.DumpedOffset,
                Entry.DumpedElementSize, Entry.DumpedArrayDim);
            return false;
        }

        if (Entry.DumpedOffset + RuntimeStorageSize > DumpedPropertiesSize)
        {
            UE_LOG(LogSuzie, Warning,
                TEXT("Keeping Unreal layout for %s: property %s extends beyond jmap type size"),
                *Struct->GetPathName(), *Entry.Property->GetName());
            return false;
        }
    }

    // Validation succeeded for the complete type. Apply all offsets together so a
    // partially-restored layout can never be left behind.
    for (const FJmapPropertyLayoutEntry& Entry : LayoutEntries)
    {
        FPropertyAccessor::SetPropertyOffsetDirect(Entry.Property, Entry.DumpedOffset);
    }

    Struct->SetPropertiesSize(DumpedPropertiesSize);
    Struct->MinAlignment = DumpedMinAlignment;

    UE_LOG(LogSuzie, VeryVerbose,
        TEXT("Applied retail property offsets/layout to %s (size=%d alignment=%d)"),
        *Struct->GetPathName(), DumpedPropertiesSize, DumpedMinAlignment);
    return true;
}

// Internal property type injected into DestructorLink of dynamic classes to force the destruction of their properties (despite the class being marked as native)
class FDynamicClassDestructorCallProperty : public FProperty
{
    TArray<const FProperty*> PropertiesToDestroy;
public:
    explicit FDynamicClassDestructorCallProperty(UClass* InOwner, const TArray<const FProperty*>& InPropertiesToDestroy) :
        FProperty(InOwner, TEXT("DynamicClassDestructorCall"), RF_Public),
        PropertiesToDestroy(InPropertiesToDestroy)
    {
        PropertyFlags |= CPF_ZeroConstructor;
#if (ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 5)
        // 5.5 Deprecated direct access to ElementSize, so use SetElementSize instead
        SetElementSize(0);
#else
        // Access ElementSize directly for versions below 5.5
        ElementSize = 0;
#endif
    }
    virtual void LinkInternal(FArchive& Ar) override {}

#if (ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 5)
    // 5.5 Changed logic in UObject::DestroyNonNativeProperties to call FinishDestroy_InContainer instead of DestroyValue_InContainer for Native/Intrinsic classes
    // So for versions above 5.5 we need to override FinishDestroy and ContainsClearOnFinishDestroy rather than DestroyValueInternal
    virtual void DestroyValueInternal(void* Dest) const override {}
    virtual bool ContainsClearOnFinishDestroyInternal(TArray<const FStructProperty*>& EncounteredStructProps) const override { return true; }
    virtual void FinishDestroyInternal(void* Data) const override
    {
        checkf(GetOffset_ForInternal() == 0, TEXT("Dynamic class destructor call property expected to be at offset 0 in the class"));
        for (const FProperty* Property : PropertiesToDestroy)
        {
            Property->DestroyValue_InContainer(Data);
        }
    }
#else
    // For versions below 5.5 UObject::DestroyNonNativeProperties unconditionally calls DestroyValue_InContainer for all properties in destructor link,
    // so we can just override DestroyValue to hook into the destruction logic of the class
    virtual void DestroyValueInternal(void* Dest) const override
    {
        checkf(GetOffset_ForInternal() == 0, TEXT("Dynamic class destructor call property expected to be at offset 0 in the class"));
        for (const FProperty* Property : PropertiesToDestroy)
        {
            Property->DestroyValue_InContainer(Dest);
        }
    }
#endif
};

// Synthetic CppStructOps for every Suzie-generated script struct.
//
// PR #15 originally needed this for dynamic DataTable rows inheriting native structs such
// as FTableRowBase, so the native parent could construct its vtable/state. Cooked PD3
// data also uses generated structs as TMap/TSet keys. Those paths call
// UScriptStruct::GetStructTypeHash(), which unconditionally dereferences CppStructOps.
// A plain NewObject<UScriptStruct> has no CppStructOps, so install these ops for all
// generated structs. ParentCppStructOps may legitimately be null. In that case the ops
// still provide reflected construction/destruction and a conservative constant hash.
// Returning 0 is a valid hash function (all keys collide, but equality still decides keys)
// and is preferable to inventing a hash for an unknown native retail struct.
class FDynamicStructCppStructOps : public UScriptStruct::ICppStructOps
{
    UScriptStruct::ICppStructOps* ParentCppStructOps;
    UScriptStruct* DynamicStruct;
    int32 ParentInitializedSize;
    bool bHasDestructor;

public:
    FDynamicStructCppStructOps(int32 InSize, int32 InAlignment, UScriptStruct::ICppStructOps* InParentOps, UScriptStruct* InStruct)
        : ICppStructOps(InSize, InAlignment)
        , ParentCppStructOps(InParentOps)
        , DynamicStruct(InStruct)
        , ParentInitializedSize(InParentOps ? InParentOps->GetSize() : 0)
        , bHasDestructor(false)
    {
        // Destructor is needed if the parent needs destruction or if any child properties need destruction
        if (InParentOps && InParentOps->HasDestructor())
        {
            bHasDestructor = true;
        }
        if (!bHasDestructor && InStruct)
        {
            for (FProperty* P = InStruct->DestructorLink; P; P = P->DestructorLinkNext)
            {
                if (!P->IsInContainer(ParentInitializedSize) && !P->HasAnyPropertyFlags(CPF_NoDestructor))
                {
                    bHasDestructor = true;
                    break;
                }
            }
        }
    }

    virtual FCapabilities GetCapabilities() const override
    {
        FCapabilities Caps = {};
        Caps.HasZeroConstructor = false;
        Caps.HasDestructor = bHasDestructor;
        Caps.IsPlainOldData = false;
        Caps.HasNoopConstructor = false;
        return Caps;
    }

    virtual void Construct(void* Dest) override
    {
        // Zero the entire buffer to ensure deterministic initialization regardless of prior memory content
        FMemory::Memzero(Dest, GetSize());

        // Call parent's constructor to initialize the vtable pointer
        if (ParentCppStructOps && !ParentCppStructOps->HasZeroConstructor())
        {
            ParentCppStructOps->Construct(Dest);
        }

        // Initialize child properties that need non-zero construction
        if (DynamicStruct)
        {
            for (FProperty* Property = DynamicStruct->PropertyLink; Property; Property = Property->PropertyLinkNext)
            {
                if (!Property->IsInContainer(ParentInitializedSize) && !Property->HasAnyPropertyFlags(CPF_ZeroConstructor))
                {
                    Property->InitializeValue_InContainer(Dest);
                }
            }
        }
    }

    virtual void ConstructForTests(void* Dest) override
    {
        Construct(Dest);
    }

    virtual void Destruct(void* Dest) override
    {
        // Destroy child properties that need destruction
        if (DynamicStruct)
        {
            for (FProperty* P = DynamicStruct->DestructorLink; P; P = P->DestructorLinkNext)
            {
                if (!P->IsInContainer(ParentInitializedSize) && !P->HasAnyPropertyFlags(CPF_NoDestructor))
                {
                    P->DestroyValue_InContainer(Dest);
                }
            }
        }
        // Call parent's destructor for C++ cleanup (vtable, etc.)
        if (ParentCppStructOps && ParentCppStructOps->HasDestructor())
        {
            ParentCppStructOps->Destruct(Dest);
        }
    }

    // No-op / false-returning implementations for remaining pure virtual methods
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6
    virtual bool Serialize(FArchive& Ar, void* Data, UStruct* DefaultsStruct, const void* Defaults) override { return false; }
    virtual bool Serialize(FStructuredArchive::FSlot Slot, void* Data, UStruct* DefaultsStruct, const void* Defaults) override { return false; }
#else
    virtual bool Serialize(FArchive& Ar, void* Data) override { return false; }
    virtual bool Serialize(FStructuredArchive::FSlot Slot, void* Data) override { return false; }
#endif
    virtual void PostSerialize(const FArchive& Ar, void* Data) override {}
    virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess, void* Data) override { return false; }
    virtual bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms, void* Data) override { return false; }
    virtual void PostScriptConstruct(void* Data) override {}
    virtual void GetPreloadDependencies(void* Data, TArray<UObject*>& OutDeps) override {}
    virtual bool Copy(void* Dest, void const* Src, int32 ArrayDim) override { return false; }
    virtual bool Identical(const void* A, const void* B, uint32 PortFlags, bool& bOutResult) override { return false; }
    virtual bool ExportTextItem(FString& ValueStr, const void* PropertyValue, const void* DefaultValue, class UObject* Parent, int32 PortFlags, class UObject* ExportRootScope) override { return false; }
    virtual bool ImportTextItem(const TCHAR*& Buffer, void* Data, int32 PortFlags, class UObject* OwnerObject, FOutputDevice* ErrorText) override { return false; }
    virtual bool FindInnerPropertyInstance(FName PropertyName, const void* Data, const FProperty*& OutProp, const void*& OutData) const override { return false; }
    virtual TPointerToAddStructReferencedObjects AddStructReferencedObjects() override { return nullptr; }
    virtual bool SerializeFromMismatchedTag(struct FPropertyTag const& Tag, FArchive& Ar, void* Data) override { return false; }
    virtual bool StructuredSerializeFromMismatchedTag(struct FPropertyTag const& Tag, FStructuredArchive::FSlot Slot, void* Data) override { return false; }
    virtual uint32 GetStructTypeHash(const void* Src) override { return 0; }
    virtual void InitializeIntrusiveUnsetOptionalValue(void* Data) const override {}
    virtual bool IsIntrusiveOptionalValueSet(const void* Data) const override { return false; }
    virtual void ClearIntrusiveOptionalValue(void* Data) const override {}
    virtual bool IsIntrusiveOptionalSafeForGC() const override { return false; }
#if WITH_EDITOR
    virtual bool CanEditChange(const FEditPropertyChain& PropertyChain, const void* Data) const override { return true; }
#endif
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 5
    // UE 5.5 ICppStructOps visitor API. 5.6+ changed this to FPropertyVisitorContext.
    virtual EPropertyVisitorControlFlow Visit(
        FPropertyVisitorPath& Path,
        const FPropertyVisitorData& Data,
        const TFunctionRef<EPropertyVisitorControlFlow(const FPropertyVisitorPath&, const FPropertyVisitorData&)> InFunc) const override
    {
        return EPropertyVisitorControlFlow::StepOver;
    }
#else
    virtual EPropertyVisitorControlFlow Visit(
        FPropertyVisitorContext& Context,
        const TFunctionRef<EPropertyVisitorControlFlow(const FPropertyVisitorContext& Context)> InFunc) const override
    {
        return EPropertyVisitorControlFlow::StepOver;
    }
#endif
    virtual void* ResolveVisitedPathInfo(void* Data, const FPropertyVisitorInfo& Info) const override { return nullptr; }
};

// Helper: walks the super struct chain to find the nearest ancestor with CppStructOps
static UScriptStruct::ICppStructOps* FindNearestAncestorCppStructOps(UScriptStruct* Struct)
{
    UScriptStruct* Current = Cast<UScriptStruct>(Struct->GetSuperStruct());
    while (Current)
    {
        UScriptStruct::ICppStructOps* Ops = Current->GetCppStructOps();
        if (Ops)
        {
            return Ops;
        }
        Current = Cast<UScriptStruct>(Current->GetSuperStruct());
    }
    return nullptr;
}

// Note that new objects can be created from other threads, but we only touch this map when creating dynamic classes,
// so we do not need an explicit mutex to guard the access to it during class initialization
static TMap<UClass*, FDynamicClassConstructionData> DynamicClassConstructionData;

UClass* FSuziePluginModule::FindOrCreateClass(FDynamicClassGenerationContext& Context, const FString& ClassPath)
{
    // Return existing class if exists
    UClass* NewClass = FindObject<UClass>(nullptr, *ClassPath);

    // If class already exists and is not pending constructed, we do not need to do anything
    if (NewClass && !Context.ClassesPendingConstruction.Contains(NewClass))
    {
        return NewClass;
    }

    if (NewClass == nullptr && !IsSuzieReconstructibleScriptPath(ClassPath))
    {
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Leaving cooked non-/Script class %s to the package loader"), *ClassPath);
        return nullptr;
    }

    // If we have not created the class yet, create it now
    if (NewClass == nullptr)
    {
        NewClass = FindOrCreateUnregisteredClass(Context, ClassPath);
        if (NewClass == nullptr)
        {
            UE_LOG(LogSuzie, Error, TEXT("Failed to create dynamic class: %s"), *ClassPath);
            return nullptr;
        }
    }

    // Remove the class from the pending construction set to prevent possible re-entry
    Context.ClassesPendingConstruction.Remove(NewClass);

    const TSharedPtr<FJsonObject> ClassDefinition = Context.GlobalObjectMap->GetObjectField(ClassPath);

    TArray<const FProperty*> PropertiesWithDestructor;
    TArray<const FProperty*> PropertiesWithConstructor;
    FArchive EmptyPropertyLinkArchive;

    // Add properties to the class
    const TArray<TSharedPtr<FJsonValue>>& Properties = ClassDefinition->GetArrayField(TEXT("properties"));
    for (const TSharedPtr<FJsonValue>& PropertyDescriptor : Properties)
    {
        // Expose reconstructed class properties to the editor/Blueprints, but do not
        // make retail runtime-only fields look persistently editable. Suzie used to
        // force CPF_Edit onto every property, including CPF_Transient /
        // CPF_SkipSerialization fields. That lets users change values in Details even
        // though SavePackage is required to discard them on reload.
        //
        // Respect retail editability for non-persistent fields. If the retail property
        // was not editable, keep it visible in Details as read-only. For serializable
        // fields, preserve the modkit-friendly behaviour of making them editable.
        const TSharedPtr<FJsonObject> PropertyObject = PropertyDescriptor->AsObject();
        const TSet<FString> RetailPropertyFlags = ParseFlags(PropertyObject->GetStringField(TEXT("flags")));
        const bool bRetailEditable = RetailPropertyFlags.Contains(TEXT("CPF_Edit"));
        const bool bNonPersistentProperty =
            RetailPropertyFlags.Contains(TEXT("CPF_Transient"))
            || RetailPropertyFlags.Contains(TEXT("CPF_DuplicateTransient"))
            || RetailPropertyFlags.Contains(TEXT("CPF_NonPIEDuplicateTransient"))
            || RetailPropertyFlags.Contains(TEXT("CPF_TextExportTransient"))
            || RetailPropertyFlags.Contains(TEXT("CPF_SkipSerialization"));

        EPropertyFlags ExtraPropertyFlags = CPF_BlueprintVisible;
        if (!bNonPersistentProperty || bRetailEditable)
        {
            ExtraPropertyFlags |= CPF_Edit;
        }
        else
        {
            // VisibleAnywhere-style behaviour for runtime/cache fields that Suzie
            // previously exposed as writable. Their values can still be inspected,
            // but the editor no longer implies that changing them will survive save.
            ExtraPropertyFlags |= CPF_Edit | CPF_EditConst;
        }

        if (FProperty* CreatedProperty = AddPropertyToStruct(Context, NewClass, PropertyObject, ExtraPropertyFlags))
        {
            // Build a normal safe Unreal layout first. After the whole class has
            // linked, TryApplyJmapStructLayout may replace these offsets atomically
            // if every reconstructed property fits the retail layout.
            NewClass->PropertiesSize = CreatedProperty->Link(EmptyPropertyLinkArchive);
            NewClass->MinAlignment = FMath::Max(NewClass->MinAlignment, CreatedProperty->GetMinAlignment());
#if (ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 5)
            // Added in 5.5, needs to be incremented for each new property added to the class
            NewClass->TotalFieldCount++;
#endif

            // Add property into the constructor/destructor lists based on its flags
            if (!CreatedProperty->HasAnyPropertyFlags(CPF_IsPlainOldData | CPF_NoDestructor))
            {
                PropertiesWithDestructor.Add(CreatedProperty);
            }
            if (!CreatedProperty->HasAnyPropertyFlags(CPF_ZeroConstructor))
            {
                PropertiesWithConstructor.Add(CreatedProperty);
            }
        }
    }

    // Add functions to the class
    const TArray<TSharedPtr<FJsonValue>>& Children = ClassDefinition->GetArrayField(TEXT("children"));
    for (const TSharedPtr<FJsonValue>& FunctionObjectPathValue : Children)
    {
        FString ChildPath = FunctionObjectPathValue->AsString();
        const TSharedPtr<FJsonObject> ChildObject = Context.GlobalObjectMap->GetObjectField(ChildPath);
        if (ChildObject && ChildObject->GetStringField(TEXT("type")) == TEXT("Function"))
        {
            AddFunctionToClass(Context, NewClass, ChildPath);
        }
    }

    // Mark all dynamic classes as blueprintable and blueprint types, otherwise we will not be able to use them.
    // ShowWorldContextPin recreates UCLASS(meta=(ShowWorldContextPin)) behaviour that
    // was previously supplied by generated headers rather than the runtime jmap.
    NewClass->SetMetaData(FBlueprintMetadata::MD_AllowableBlueprintVariableType, TEXT("true"));
    NewClass->SetMetaData(FBlueprintMetadata::MD_IsBlueprintBase, TEXT("true"));
    NewClass->SetMetaData(FBlueprintMetadata::MD_ShowWorldContextPin, TEXT("true"));

    if (NewClass->IsChildOf<UActorComponent>())
    {
        NewClass->SetMetaData(FBlueprintMetadata::MD_BlueprintSpawnableComponent, TEXT("true"));
    }

    // Bind parent class to this class and link properties to calculate their runtime derived data
    NewClass->Bind();
    NewClass->StaticLink();
    TryApplyJmapStructLayout(NewClass, ClassDefinition);
    NewClass->SetSparseClassDataStruct(NewClass->GetSparseClassDataArchetypeStruct());

    // Mark dynamic classes so the custom cooked-editor loader can distinguish
    // missing native virtual serializers from genuine corruption in real classes.
    NewClass->SetMetaData(TEXT("SuzieDynamicClass"), TEXT("true"));

    // Reflection can reproduce properties/layout, but it cannot reproduce arbitrary
    // native Serialize() implementations from the retail game. Opt this generated
    // class into the PD3 cooked-editor opaque-tail compatibility path. The loader
    // still requires a mounted retail PD3 package, an under-read, and a bounded tail.
    NewClass->SetMetaData(TEXT("SuzieOpaqueTailCompat"), TEXT("true"));
    ApplySuzieOpaqueTailCompatibilityForClass(NewClass, ClassPath);

    // Wwise runtime classes have native serializers and other native behaviour that
    // cannot be reconstructed from reflection alone. Tag them separately so the
    // cooked-editor compatibility layer can remain narrowly scoped to Wwise types.
    if (IsWwiseCompatibilityScriptPath(ClassPath))
    {
        NewClass->SetMetaData(TEXT("SuzieNativeCompat"), TEXT("Wwise"));
    }

    // If we have properties that need destructor call, we add a synthetic property of custom type to DestructorLink
    if (!PropertiesWithDestructor.IsEmpty())
    {
        FProperty* DestructorCallProperty = new FDynamicClassDestructorCallProperty(NewClass, PropertiesWithDestructor);
        DestructorCallProperty->DestructorLinkNext = NewClass->DestructorLink;
        NewClass->DestructorLink = DestructorCallProperty;
    }

    // Stash the properties that need to be constructed on the class data so polymorphic constructor can access them easily
    FDynamicClassConstructionData& ClassConstructionData = DynamicClassConstructionData.FindOrAdd(NewClass);
    ClassConstructionData.PropertiesToConstruct = PropertiesWithConstructor;

    const FString ClassDefaultObjectPath = ClassDefinition->GetStringField(TEXT("class_default_object"));
    
    // Class default object can be created at this point
    Context.ClassesPendingFinalization.Add(NewClass, ClassDefaultObjectPath);

    // Native UHT registration tells AsyncLoading2 about the UClass before creating
    // the CDO. Suzie runs after the initial registration pass, so mirror that here.
    // The custom import store also discovers public nested UFunctions from the class.
    NotifyDynamicScriptObjectRegistration(NewClass, ENotifyRegistrationType::NRT_Class);
    
    return NewClass;
}

UScriptStruct* FSuziePluginModule::FindOrCreateScriptStruct(FDynamicClassGenerationContext& Context, const FString& StructPath)
{
    // Check if we have already created this struct
    if (UScriptStruct* ExistingScriptStruct = FindObject<UScriptStruct>(nullptr, *StructPath))
    {
        return ExistingScriptStruct;
    }
    if (!IsSuzieReconstructibleScriptPath(StructPath))
    {
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Leaving cooked non-/Script struct %s to the package loader"), *StructPath);
        return nullptr;
    }

    const TSharedPtr<FJsonObject> StructDefinition = Context.GlobalObjectMap->GetObjectField(StructPath);
    checkf(StructDefinition.IsValid(), TEXT("Failed to find script struct object by path %s"), *StructPath);
    
    const FString ObjectType = StructDefinition->GetStringField(TEXT("type"));
    checkf(ObjectType == TEXT("ScriptStruct"), TEXT("FindOrCreateScriptStruct expected ScriptStruct object %s, got object of type %s"), *StructPath, *ObjectType);

    // Resolve parent struct for this struct before we attempt to create this struct
    UScriptStruct* SuperScriptStruct = nullptr;
    FString ParentStructPath;
    if (StructDefinition->TryGetStringField(TEXT("super_struct"), ParentStructPath))
    {
        SuperScriptStruct = FindOrCreateScriptStruct(Context, ParentStructPath);
        if (SuperScriptStruct == nullptr)
        {
            UE_LOG(LogSuzie, Error, TEXT("Parent script struct not found: %s"), *ParentStructPath);
            return nullptr;
        }
    }
    
    FString PackageName;
    FString ObjectName;
    ParseObjectPath(StructPath, PackageName, ObjectName);

    // Create a package for the struct or reuse the existing package. Make sure it's marked as Native package
    UPackage* Package = FindOrCreatePackage(Context, PackageName);
    
    // UHT-created native script structs are transient reflection objects imported by
    // path from their /Script package. Keep Suzie's synthetic structs equivalent.
    UScriptStruct* NewStruct = NewObject<UScriptStruct>(
        Package, *ObjectName, RF_Public | RF_Transient | RF_MarkAsNative | RF_MarkAsRootSet);
    NewStruct->AddToRoot();

    // Set super script struct and copy inheritable flags first if this struct has a parent (most structs do not)
    if (SuperScriptStruct != nullptr)
    {
        NewStruct->SetSuperStruct(SuperScriptStruct);
        NewStruct->StructFlags = (EStructFlags) ((int32)NewStruct->StructFlags | (SuperScriptStruct->StructFlags & STRUCT_Inherit));
    }

    // Note that only flags that are set manually (e.g. non-computed flags) should be listed here
    static const TArray<TPair<FString, EStructFlags>> StructFlagNameLookup = {
        {TEXT("STRUCT_Atomic"), STRUCT_Atomic},
        {TEXT("STRUCT_Immutable"), STRUCT_Immutable},
    };

    // Convert struct flag names to the struct flags bitmask
    const TSet<FString> StructFlagNames = ParseFlags(StructDefinition->GetStringField(TEXT("struct_flags")));
    for (const auto& [StructFlagName, StructFlagBit] : StructFlagNameLookup)
    {
        if (StructFlagNames.Contains(StructFlagName))
        {
            NewStruct->StructFlags = (EStructFlags)((int32)NewStruct->StructFlags | StructFlagBit);
        }
    }

    // Initialize properties for the struct
    TArray<TSharedPtr<FJsonValue>> Properties = StructDefinition->GetArrayField(TEXT("properties"));
    for (const TSharedPtr<FJsonValue>& PropertyDescriptor : Properties)
    {
        // Make Struct only exposes members that are BlueprintVisible and not
        // BlueprintReadOnly. Recreate the writable editor-facing behaviour provided
        // by the old UHT compatibility headers.
        const EPropertyFlags ExtraPropertyFlags = CPF_Edit | CPF_BlueprintVisible;
        if (FProperty* CreatedProperty = AddPropertyToStruct(Context, NewStruct, PropertyDescriptor->AsObject(), ExtraPropertyFlags))
        {
            CreatedProperty->ClearPropertyFlags(CPF_BlueprintReadOnly | CPF_EditConst);
            CreatedProperty->SetPropertyFlags(CPF_Edit | CPF_BlueprintVisible);
        }
    }
    
    // Mark all dynamic script structs as blueprint types
    NewStruct->SetMetaData(FBlueprintMetadata::MD_AllowableBlueprintVariableType, TEXT("true"));
    if (IsWwiseCompatibilityScriptPath(StructPath))
    {
        NewStruct->SetMetaData(TEXT("SuzieNativeCompat"), TEXT("Wwise"));
    }

    // Bind the newly created struct and link it to assign property offsets and calculate the size
    NewStruct->Bind();
    NewStruct->PrepareCppStructOps();
    NewStruct->StaticLink(true);
    TryApplyJmapStructLayout(NewStruct, StructDefinition);

    // The engine does not gracefully handle empty structs, so force the struct size to be at least one byte
    if (NewStruct->GetPropertiesSize() == 0)
    {
        NewStruct->MinAlignment = 1;
        NewStruct->SetPropertiesSize(1);
    }


    // PR #15 cooked-DataTable fix:
    // Dynamic row structs can inherit from native structs such as FTableRowBase.
    // Those parents carry CppStructOps (including construction of their native/vtable
    // state), but a NewObject<UScriptStruct> child does not automatically get usable
    // ops for the complete derived row. Install synthetic ops that construct/destruct
    // the native parent and then initialize/destroy Suzie's reflected child fields.
    UScriptStruct::ICppStructOps* AncestorCppStructOps = FindNearestAncestorCppStructOps(NewStruct);

    // CppStructOps requires its reported size to exactly match the struct stride.
    // Do this after the safe jmap layout pass so the ops use the final layout.
    const int32 AlignedSize = NewStruct->GetStructureSize();
    if (NewStruct->GetPropertiesSize() != AlignedSize)
    {
        NewStruct->SetPropertiesSize(AlignedSize);
    }

    // NewObject<UScriptStruct> does not provide CppStructOps on its own. Install our
    // compatibility ops even when there is no native ancestor. This is required for
    // generated structs used as map/set keys because GetStructTypeHash() expects ops.
    FTopLevelAssetPath StructAssetPath(Package->GetFName(), *ObjectName);
    UScriptStruct::DeferCppStructOps(
        StructAssetPath,
        new FDynamicStructCppStructOps(
            NewStruct->GetPropertiesSize(),
            NewStruct->GetMinAlignment(),
            AncestorCppStructOps,
            NewStruct));

    // Re-run preparation so this dynamic struct picks up the deferred ops.
    NewStruct->ClearCppStructOps();
    NewStruct->PrepareCppStructOps();

    UE_LOG(
        LogSuzie,
        Verbose,
        TEXT("Installed synthetic CppStructOps for struct '%s' (native ancestor=%s, size=%d)"),
        *ObjectName,
        AncestorCppStructOps ? TEXT("true") : TEXT("false"),
        NewStruct->GetPropertiesSize());

    NewStruct->SetMetaData(TEXT("SuzieDynamicStruct"), TEXT("true"));
    
    UE_LOG(LogSuzie, Verbose, TEXT("Created struct: %s"), *ObjectName);

    // NewObject<UScriptStruct> bypasses the normal GetStaticStruct/UHT notification
    // path, so register it explicitly for cooked AsyncLoading2 imports.
    NotifyDynamicScriptObjectRegistration(NewStruct, ENotifyRegistrationType::NRT_Struct);

    // Struct properties using this struct can be created at this point
    return NewStruct;
}

UEnum* FSuziePluginModule::FindOrCreateEnum(FDynamicClassGenerationContext& Context, const FString& EnumPath)
{
    // Check if we have already created this enum
    if (UEnum* ExistingEnum = FindObject<UEnum>(nullptr, *EnumPath))
    {
        return ExistingEnum;
    }
    if (!IsSuzieReconstructibleScriptPath(EnumPath))
    {
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Leaving cooked non-/Script enum %s to the package loader"), *EnumPath);
        return nullptr;
    }

    const TSharedPtr<FJsonObject> EnumDefinition = Context.GlobalObjectMap->GetObjectField(EnumPath);
    checkf(EnumDefinition.IsValid(), TEXT("Failed to find enum object by path %s"), *EnumPath);
    
    const FString ObjectType = EnumDefinition->GetStringField(TEXT("type"));
    checkf(ObjectType == TEXT("Enum"), TEXT("FindOrCreateEnum expected Enum object %s, got object of type %s"), *EnumPath, *ObjectType);

    FString PackageName;
    FString ObjectName;
    ParseObjectPath(EnumPath, PackageName, ObjectName);

    // Create a package for the struct or reuse the existing package. Make sure it's marked as Native package
    UPackage* Package = FindOrCreatePackage(Context, PackageName);
    
    // Match native/UHT enum object flags so cooked packages retain this as a
    // /Script import instead of treating it like an editor-created package export.
    UEnum* NewEnum = NewObject<UEnum>(
        Package, *ObjectName, RF_Public | RF_Transient | RF_MarkAsNative | RF_MarkAsRootSet);
    NewEnum->AddToRoot();

    // Set CppType. It is generally not used by the engine, but is useful to determine whenever enum is namespaced or not for CppForm deduction
    NewEnum->CppType = EnumDefinition->GetStringField(TEXT("cpp_type"));

    TArray<TPair<FName, int64>> EnumNames;
    bool bContainsFullyQualifiedNames = false;

    // Parse enum constant names and values
    TArray<TSharedPtr<FJsonValue>> EnumNameJsonEntries = EnumDefinition->GetArrayField(TEXT("names"));
    for (const TSharedPtr<FJsonValue>& EnumNameAndValueArrayValue : EnumNameJsonEntries)
    {
        const TArray<TSharedPtr<FJsonValue>>& EnumNameAndValueArray = EnumNameAndValueArrayValue->AsArray();
        if (EnumNameAndValueArray.Num() == 2)
        {
            const FString EnumConstantName = EnumNameAndValueArray[0]->AsString();
            // TODO: Using numbers to represent enumeration values is not safe, large int64 values cannot be adequately represented as json double precision numbers
            const int64 EnumConstantValue = EnumNameAndValueArray[1]->AsNumber();

            EnumNames.Add({FName(*EnumConstantName), EnumConstantValue});
            bContainsFullyQualifiedNames |= EnumConstantName.Contains(TEXT("::"));
        }
    }

    // TODO: CppForm and Flags are not currently dumped, but we can assume flags None for most enums and guess CppForm based on names and CppType
    const bool bCppTypeIsNamespaced = NewEnum->CppType.Contains(TEXT("::"));
    const UEnum::ECppForm EnumCppForm = bContainsFullyQualifiedNames ? (bCppTypeIsNamespaced ? UEnum::ECppForm::Namespaced : UEnum::ECppForm::EnumClass) : UEnum::ECppForm::Regular;
    const EEnumFlags EnumFlags = EEnumFlags::None;

    // We do not need to generate _MAX key because it will always be present in the enum definition
    NewEnum->SetEnums(EnumNames, EnumCppForm, EnumFlags, false);

    // Mark all dynamic enums as blueprint types
    NewEnum->SetMetaData(*FBlueprintMetadata::MD_AllowableBlueprintVariableType.ToString(), TEXT("true"));
    
    UE_LOG(LogSuzie, Verbose, TEXT("Created enum: %s"), *ObjectName);

    // NewObject<UEnum> bypasses the normal GetStaticEnum/UHT notification path.
    NotifyDynamicScriptObjectRegistration(NewEnum, ENotifyRegistrationType::NRT_Enum);

    return NewEnum;
}

UFunction* FSuziePluginModule::FindOrCreateFunction(FDynamicClassGenerationContext& Context, const FString& FunctionPath)
{
    if (FunctionPath.IsEmpty()) return nullptr;

    // Check if the function already exists
    if (UFunction* ExistingFunction = FindObject<UFunction>(nullptr, *FunctionPath))
    {
        return ExistingFunction;
    }
    if (!IsSuzieReconstructibleScriptPath(FunctionPath))
    {
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Leaving cooked non-/Script function %s to the package loader"), *FunctionPath);
        return nullptr;
    }
    
    FString ClassPathOrPackageName;
    FString ObjectName;
    ParseObjectPath(FunctionPath, ClassPathOrPackageName, ObjectName);

    // Function can be outered either to a class or to a package, we can decide based on whenever there is a separator in the path
    UObject* FunctionOuterObject;
    int32 PackageNameSeparatorIndex{};
    if (ClassPathOrPackageName.FindChar('.', PackageNameSeparatorIndex))
    {
        // This is a class path because it is at least two levels deep. We do not need our outer to be registered, just to exist
        FunctionOuterObject = FindOrCreateUnregisteredClass(Context, ClassPathOrPackageName);
    }
    else
    {
        // This is a package and this function is a top level function (most likely a delegate signature)
        FunctionOuterObject = FindOrCreatePackage(Context, ClassPathOrPackageName);
    }

    // Check if the function already exists in its parent object
    if (UFunction* ExistingFunction = FindObjectFast<UFunction>(FunctionOuterObject, *ObjectName))
    {
        return ExistingFunction;
    }

    // Note that only flags that are set manually (e.g. non-computed flags) should be listed here
    static const TArray<TPair<FString, EFunctionFlags>> FunctionFlagNameLookup = {
        {TEXT("FUNC_Final"), FUNC_Final},
        {TEXT("FUNC_Native"), FUNC_Native},
        {TEXT("FUNC_BlueprintAuthorityOnly"), FUNC_BlueprintAuthorityOnly},
        {TEXT("FUNC_BlueprintCosmetic"), FUNC_BlueprintCosmetic},
        {TEXT("FUNC_Net"), FUNC_Net},
        {TEXT("FUNC_NetReliable"), FUNC_NetReliable},
        {TEXT("FUNC_NetRequest"), FUNC_NetRequest},
        {TEXT("FUNC_Exec"), FUNC_Exec},
        {TEXT("FUNC_Event"), FUNC_Event},
        {TEXT("FUNC_NetResponse"), FUNC_NetResponse},
        {TEXT("FUNC_Static"), FUNC_Static},
        {TEXT("FUNC_NetMulticast"), FUNC_NetMulticast},
        {TEXT("FUNC_UbergraphFunction"), FUNC_UbergraphFunction},
        {TEXT("FUNC_MulticastDelegate"), FUNC_MulticastDelegate},
        {TEXT("FUNC_Public"), FUNC_Public},
        {TEXT("FUNC_Private"), FUNC_Private},
        {TEXT("FUNC_Protected"), FUNC_Protected},
        {TEXT("FUNC_Delegate"), FUNC_Delegate},
        {TEXT("FUNC_NetServer"), FUNC_NetServer},
        {TEXT("FUNC_NetClient"), FUNC_NetClient},
        {TEXT("FUNC_BlueprintCallable"), FUNC_BlueprintCallable},
        {TEXT("FUNC_BlueprintEvent"), FUNC_BlueprintEvent},
        {TEXT("FUNC_BlueprintPure"), FUNC_BlueprintPure},
        {TEXT("FUNC_EditorOnly"), FUNC_EditorOnly},
        {TEXT("FUNC_Const"), FUNC_Const},
        {TEXT("FUNC_NetValidate"), FUNC_NetValidate},
        {TEXT("FUNC_HasOutParms"), FUNC_HasOutParms},
        {TEXT("FUNC_HasDefaults"), FUNC_HasDefaults},
    };

    const TSharedPtr<FJsonObject> FunctionDefinition = Context.GlobalObjectMap->GetObjectField(FunctionPath);
    checkf(FunctionDefinition.IsValid(), TEXT("Failed to find function object by path %s"), *FunctionPath);
    
    const FString ObjectType = FunctionDefinition->GetStringField(TEXT("type"));
    checkf(ObjectType == TEXT("Function"), TEXT("FindOrCreateFunction expected Function object %s, got object of type %s"), *FunctionPath, *ObjectType);
    
    // Convert struct flag names to the struct flags bitmask
    const TSet<FString> FunctionFlagNames = ParseFlags(FunctionDefinition->GetStringField(TEXT("function_flags")));
    EFunctionFlags FunctionFlags = FUNC_None;
    for (const auto& [FunctionFlagName, FunctionFlagBit] : FunctionFlagNameLookup)
    {
        if (FunctionFlagNames.Contains(FunctionFlagName))
        {
            FunctionFlags |= FunctionFlagBit;
        }
    }

    // Only native functions declared in /Script packages can be represented by Suzie's
    // synthetic native thunk. Cooked Blueprint functions under /Game are real script
    // exports whose bytecode is supplied by the retail package. Some dumps report
    // FUNC_Native on those generated functions, but preserving it would cause Unreal to
    // dispatch UserConstructionScript/EventGraph functions through the compatibility
    // thunk instead of executing their cooked bytecode.
    const bool bIsScriptFunction = FunctionPath.StartsWith(TEXT("/Script/"), ESearchCase::CaseSensitive);
    if (!bIsScriptFunction && (FunctionFlags & FUNC_Native) != 0)
    {
        FunctionFlags &= ~FUNC_Native;
        UE_LOG(LogSuzie, VeryVerbose,
            TEXT("Ignoring FUNC_Native on cooked non-/Script function %s; retail Blueprint bytecode must remain script-dispatched."),
            *FunctionPath);
    }

    // Have to temporarily mark the function as RF_ArchetypeObject to be able to create functions with UPackage as outer
    // Native reflected functions are transient, native-marked script objects. Keep
    // RF_ArchetypeObject only for the brief package-outer construction workaround.
    UFunction* NewFunction = NewObject<UFunction>(
        FunctionOuterObject,
        *ObjectName,
        RF_Public | RF_Transient | RF_MarkAsNative | RF_MarkAsRootSet | RF_ArchetypeObject);
    NewFunction->AddToRoot();
    NewFunction->ClearFlags(RF_ArchetypeObject);

    const bool bSyntheticNativeFunction = bIsScriptFunction && ((FunctionFlags & FUNC_Native) != 0);

    // Do not register the generic Suzie thunk in UClass::NativeFunctionLookupTable. That
    // table is name-based and is also consulted while cooked Blueprint UFunctions bind, so
    // a compatibility thunk placed there can leak into Blueprint-generated functions.
    // Instead bind this UFunction as script first, then attach the native thunk directly to
    // this exact UFunction after Bind/StaticLink.
    EFunctionFlags FlagsUsedForBind = FunctionFlags;
    if (bSyntheticNativeFunction)
    {
        FlagsUsedForBind &= ~FUNC_Native;
        NewFunction->SetMetaData(TEXT("SuzieSyntheticNative"), TEXT("true"));
    }
    NewFunction->FunctionFlags |= FlagsUsedForBind;

    // Give every dynamically-created function a valid script body while it is being bound.
    // Synthetic natives will stop using this body once FUNC_Native and the direct thunk are
    // restored below.
    NewFunction->Script.Append({EX_Return, EX_Nothing, EX_EndOfScript});

    // Create function parameter properties (and function return value property)
    TArray<TSharedPtr<FJsonValue>> Properties = FunctionDefinition->GetArrayField(TEXT("properties"));
    for (const TSharedPtr<FJsonValue>& PropertyDescriptor : Properties)
    {
        AddPropertyToStruct(Context, NewFunction, PropertyDescriptor->AsObject());
    }

    // This function will always be linked as a last element of the list, so it has no next element
    NewFunction->Next = nullptr;

    // Bind the function and calculate property layout and function locals size
    NewFunction->Bind();
    NewFunction->StaticLink(true);
    if (bSyntheticNativeFunction)
    {
        // Restore the retail native flag only after script binding is complete, then attach
        // the compatibility thunk directly to this UFunction. No class-wide name mapping is
        // installed, so cooked Blueprint functions cannot accidentally inherit the thunk.
        NewFunction->FunctionFlags |= FUNC_Native;
        NewFunction->SetNativeFunc(&ExecSuzieNativeStub);
        GSuzieSyntheticNativeFunctions.Add(NewFunction);
    }
    if (TryApplyJmapStructLayout(NewFunction, FunctionDefinition))
    {
        // UFunction caches parameter-frame layout separately from UStruct::PropertiesSize.
        // Only rebuild these cached offsets if the complete retail layout was safely applied.
        NewFunction->ParmsSize = static_cast<uint16>(FMath::Clamp(NewFunction->GetPropertiesSize(), 0, static_cast<int32>(MAX_uint16)));
        NewFunction->ReturnValueOffset = MAX_uint16;
        for (TFieldIterator<FProperty> ParameterIt(NewFunction, EFieldIterationFlags::None); ParameterIt; ++ParameterIt)
        {
            const FProperty* Parameter = *ParameterIt;
            if (Parameter->HasAnyPropertyFlags(CPF_ReturnParm))
            {
                NewFunction->ReturnValueOffset = static_cast<uint16>(Parameter->GetOffset_ForUFunction());
                break;
            }
        }
    }

    // Do some tagging of the function for convenience based on parameter types and names
    for (TFieldIterator<FProperty> PropertyIterator(NewFunction); PropertyIterator; ++PropertyIterator)
    {
        const FProperty* Property = *PropertyIterator;
        if (!Property->HasAllPropertyFlags(CPF_Parm) || Property->HasAnyPropertyFlags(CPF_ReturnParm)) continue;

        // Object properties called WorldContext/WorldContextObject are automatically tagged as world context for convenience
        if (Property->IsA<FObjectProperty>() && (Property->GetFName() == TEXT("WorldContext") || Property->GetFName() == TEXT("WorldContextObject")))
        {
            NewFunction->SetMetaData(FBlueprintMetadata::MD_WorldContext, *Property->GetName());

            // jmap does not carry UHT metadata. Keep these functions callable from
            // generated UObject/subsystem Blueprint parents; ShowWorldContextPin on
            // the class makes the otherwise-hidden context pin explicit.
            NewFunction->SetMetaData(FBlueprintMetadata::MD_CallableWithoutWorldContext, TEXT("true"));
        }
        // Latent Info struct parameter properties should always be tagged as LatentInfo and indicate async BP functions
        if (const FStructProperty* StructProperty = CastField<FStructProperty>(Property); StructProperty && StructProperty->Struct == FLatentActionInfo::StaticStruct())
        {
            NewFunction->SetMetaData(FBlueprintMetadata::MD_LatentInfo, *Property->GetName());
            NewFunction->SetMetaData(FBlueprintMetadata::MD_Latent, TEXT("true"));
        }
    }

    // Class-owned functions are discovered when their UClass is registered.
    // Package-owned functions (typically delegate signatures) have no class parent,
    // so they must be registered individually.
    if (FunctionOuterObject->IsA<UPackage>())
    {
        NotifyDynamicScriptObjectRegistration(NewFunction, ENotifyRegistrationType::NRT_NoExportObject);
    }

    UE_LOG(LogSuzie, VeryVerbose, TEXT("Created function %s in outer %s"), *ObjectName, *FunctionOuterObject->GetName());
    return NewFunction;
}

void FSuziePluginModule::ParseObjectPath(const FString& ObjectPath, FString& OutOuterObjectPath, FString& OutObjectName)
{
    int32 ObjectNameSeparatorIndex;
    if (ObjectPath.FindLastChar(':', ObjectNameSeparatorIndex))
    {
        // There is a sub-object separator in the path name, string past it is the object name
        OutOuterObjectPath = ObjectPath.Mid(0, ObjectNameSeparatorIndex);
        OutObjectName = ObjectPath.Mid(ObjectNameSeparatorIndex + 1);
    }
    else if (ObjectPath.FindLastChar('.', ObjectNameSeparatorIndex))
    {
        // This is a top level object (or this is a legacy path), string past the asset name separator is the object name
        OutOuterObjectPath = ObjectPath.Mid(0, ObjectNameSeparatorIndex);
        OutObjectName = ObjectPath.Mid(ObjectNameSeparatorIndex + 1);
    }
    else
    {
        // This is a top level object (UPackage) name
        OutOuterObjectPath = TEXT("");
        OutObjectName = ObjectPath;
    }
}

TSet<FString> FSuziePluginModule::ParseFlags(const FString& Flags)
{
    TArray<FString> FlagsArray;
    Flags.ParseIntoArray(FlagsArray, TEXT(" | "), true);
    TSet<FString> ReturnFlags;
    for (auto Flag : FlagsArray) ReturnFlags.Add(Flag);
    return ReturnFlags;
}

FProperty* FSuziePluginModule::AddPropertyToStruct(FDynamicClassGenerationContext& Context, UStruct* Struct, const TSharedPtr<FJsonObject>& PropertyJson, const EPropertyFlags ExtraPropertyFlags)
{
    if (FProperty* NewProperty = BuildProperty(Context, Struct, PropertyJson, ExtraPropertyFlags))
    {
        // This property will always be linked as a last element of the list, so it has no next element
        NewProperty->Next = nullptr;

        // Link new property to the end of the linked property list
        if (Struct->ChildProperties != nullptr)
        {
            FField* CurrentProperty = Struct->ChildProperties;
            while (CurrentProperty->Next)
            {
                CurrentProperty = CurrentProperty->Next;
            }
            CurrentProperty->Next = NewProperty;
        }
        else
        {
            // This is the first property in the struct, assign it as a head of the linked property list
            Struct->ChildProperties = NewProperty;
        }
        UE_LOG(LogSuzie, VeryVerbose, TEXT("Added property %s to struct %s"), *NewProperty->GetName(), *Struct->GetName());
        return NewProperty;
    }
    return nullptr;
}

void FSuziePluginModule::AddFunctionToClass(FDynamicClassGenerationContext& Context, UClass* Class, const FString& FunctionPath, const EFunctionFlags ExtraFunctionFlags)
{
    if (UFunction* NewFunction = FindOrCreateFunction(Context, FunctionPath))
    {
        // Append additional flags to the function
        NewFunction->FunctionFlags |= ExtraFunctionFlags;
        
        // This function will always be linked as a last element of the list, so it has no next element
        NewFunction->Next = nullptr;
    
        // Link new function to the end of the linked property list
        if (Class->Children != nullptr)
        {
            UField* CurrentFunction = Class->Children;
            while (CurrentFunction->Next)
            {
                CurrentFunction = CurrentFunction->Next;
            }
            CurrentFunction->Next = NewFunction;
        }
        else
        {
            // This is the first function in the class, assign it as a head of the linked function list
            Class->Children = NewFunction;
        }

        // Add the function to the function lookup for the class
        Class->AddFunctionToFunctionMap(NewFunction, NewFunction->GetFName());

        UE_LOG(LogSuzie, VeryVerbose, TEXT("Added function %s to class %s"), *NewFunction->GetName(), *Class->GetName());
    }
}

FProperty* FSuziePluginModule::BuildProperty(FDynamicClassGenerationContext& Context, FFieldVariant Owner, const TSharedPtr<FJsonObject>& PropertyJson, EPropertyFlags ExtraPropertyFlags)
{
    // Note that only flags that are set manually (e.g. non-computed flags) should be listed here
    static const TArray<TPair<FString, EPropertyFlags>> PropertyFlagNameLookup = {
        {TEXT("CPF_Edit"), CPF_Edit},
        {TEXT("CPF_ConstParm"), CPF_ConstParm},
        {TEXT("CPF_BlueprintVisible"), CPF_BlueprintVisible},
        {TEXT("CPF_ExportObject"), CPF_ExportObject},
        {TEXT("CPF_BlueprintReadOnly"), CPF_BlueprintReadOnly},
        {TEXT("CPF_Net"), CPF_Net},
        {TEXT("CPF_EditFixedSize"), CPF_EditFixedSize},
        {TEXT("CPF_Parm"), CPF_Parm},
        {TEXT("CPF_OutParm"), CPF_OutParm},
        {TEXT("CPF_ReturnParm"), CPF_ReturnParm},
        {TEXT("CPF_DisableEditOnTemplate"), CPF_DisableEditOnTemplate},
        {TEXT("CPF_NonNullable"), CPF_NonNullable},
        {TEXT("CPF_Transient"), CPF_Transient},
        {TEXT("CPF_DisableEditOnInstance"), CPF_DisableEditOnInstance},
        {TEXT("CPF_EditConst"), CPF_EditConst},
        {TEXT("CPF_DisableEditOnInstance"), CPF_DisableEditOnInstance},
        {TEXT("CPF_InstancedReference"), CPF_InstancedReference},
        {TEXT("CPF_DuplicateTransient"), CPF_DuplicateTransient},
        {TEXT("CPF_SaveGame"), CPF_SaveGame},
        {TEXT("CPF_NoClear"), CPF_NoClear},
        {TEXT("CPF_SaveGame"), CPF_SaveGame},
        {TEXT("CPF_ReferenceParm"), CPF_ReferenceParm},
        {TEXT("CPF_BlueprintAssignable"), CPF_BlueprintAssignable},
        {TEXT("CPF_Deprecated"), CPF_Deprecated},
        {TEXT("CPF_RepSkip"), CPF_RepSkip},
        {TEXT("CPF_Deprecated"), CPF_Deprecated},
        {TEXT("CPF_RepNotify"), CPF_RepNotify},
        {TEXT("CPF_Interp"), CPF_Interp},
        {TEXT("CPF_NonTransactional"), CPF_NonTransactional},
        {TEXT("CPF_EditorOnly"), CPF_EditorOnly},
        {TEXT("CPF_AutoWeak"), CPF_AutoWeak},
        // CPF_ContainsInstancedReference is actually computed, but it is set by the compiler and not in runtime,
        // so we need to either carry it over (like we do here), or manually set it on container properties when their
        // elements have CPF_ContainsInstancedReference
        {TEXT("CPF_ContainsInstancedReference"), CPF_ContainsInstancedReference},
        {TEXT("CPF_AssetRegistrySearchable"), CPF_AssetRegistrySearchable},
        {TEXT("CPF_SimpleDisplay"), CPF_SimpleDisplay},
        {TEXT("CPF_AdvancedDisplay"), CPF_AdvancedDisplay},
        {TEXT("CPF_Protected"), CPF_Protected},
        {TEXT("CPF_BlueprintCallable"), CPF_BlueprintCallable},
        {TEXT("CPF_BlueprintAuthorityOnly"), CPF_BlueprintAuthorityOnly},
        {TEXT("CPF_TextExportTransient"), CPF_TextExportTransient},
        {TEXT("CPF_NonPIEDuplicateTransient"), CPF_NonPIEDuplicateTransient},
        {TEXT("CPF_PersistentInstance"), CPF_PersistentInstance},
        {TEXT("CPF_UObjectWrapper"), CPF_UObjectWrapper},
        {TEXT("CPF_NativeAccessSpecifierPublic"), CPF_NativeAccessSpecifierPublic},
        {TEXT("CPF_NativeAccessSpecifierProtected"), CPF_NativeAccessSpecifierProtected},
        {TEXT("CPF_NativeAccessSpecifierPrivate"), CPF_NativeAccessSpecifierPrivate},
        {TEXT("CPF_SkipSerialization"), CPF_SkipSerialization},
#if (ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 5)
        // Added in 5.5, allows references to the current object from within the property
        {TEXT("CPF_AllowSelfReference"), CPF_AllowSelfReference},
#endif
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6
        {TEXT("CPF_RequiredParm"), CPF_RequiredParm},
        {TEXT("CPF_TObjectPtr"), CPF_TObjectPtr},
#endif
        // This is set automatically for most property types, but Kismet Compiler also tags properties with this manually so carry over the flag just in case
        {TEXT("CPF_HasGetValueTypeHash"), CPF_HasGetValueTypeHash},
    };

    // Convert struct flag names to the struct flags bitmask
    const TSet<FString> PropertyFlagNames = ParseFlags(PropertyJson->GetStringField(TEXT("flags")));
    EPropertyFlags PropertyFlags = ExtraPropertyFlags;
    for (const auto& [PropertyFlagName, PropertyFlagBit] : PropertyFlagNameLookup)
    {
        if (PropertyFlagNames.Contains(PropertyFlagName))
        {
            PropertyFlags |= PropertyFlagBit;
        }
    }

    const FString PropertyName = PropertyJson->GetStringField(TEXT("name"));
    const FString PropertyType = PropertyJson->GetStringField(TEXT("type"));

    FProperty* NewProperty = CastField<FProperty>(FField::Construct(FName(*PropertyType), Owner, FName(*PropertyName), RF_Public));
    if (NewProperty == nullptr)
    {
        UE_LOG(LogSuzie, Warning, TEXT("Failed to create property of type %s: not supported"), *PropertyType);
        return nullptr;
    }
    
    NewProperty->ArrayDim = PropertyJson->GetIntegerField(TEXT("array_dim"));
    NewProperty->PropertyFlags |= PropertyFlags;

    if (PropertyName == TEXT("MaxSlammedOpenAngle"))
    {
        UE_LOG(LogSuzie, Display,
            TEXT("[DoorPersistence] Reconstructed MaxSlammedOpenAngle retailFlags='%s' finalFlags=0x%016llX ArrayDim=%d"),
            *PropertyJson->GetStringField(TEXT("flags")),
            static_cast<unsigned long long>(NewProperty->GetPropertyFlags()),
            NewProperty->ArrayDim);
    }

    // FBoolProperty is not usable until its storage metadata has been initialized.
    // jmap preserves the original FieldSize/ByteOffset/ByteMask/FieldMask values,
    // so reconstruct the equivalent SetBoolSize() inputs before the property is linked.
    // This is required for unversioned property serialization, where malformed bool
    // metadata can produce an invalid zero-value serializer.
    if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(NewProperty))
    {
        const uint32 FieldSize = static_cast<uint32>(FMath::Max(1, PropertyJson->GetIntegerField(TEXT("field_size"))));
        const uint32 ByteOffset = static_cast<uint32>(FMath::Max(0, PropertyJson->GetIntegerField(TEXT("byte_offset"))));
        const uint32 ByteMask = static_cast<uint32>(PropertyJson->GetIntegerField(TEXT("byte_mask"))) & 0xFFu;
        const uint32 FieldMask = static_cast<uint32>(PropertyJson->GetIntegerField(TEXT("field_mask"))) & 0xFFu;

        const bool bIsNativeBool = FieldMask == 0xFFu;
        const uint32 BitMask = bIsNativeBool
            ? 1u
            : (ByteMask << (ByteOffset * 8u));

        BoolProperty->SetBoolSize(FieldSize, bIsNativeBool, BitMask);
    }

    if (FObjectPropertyBase* ObjectPropertyBase = CastField<FObjectPropertyBase>(NewProperty))
    {
        UClass* PropertyClass = FindOrCreateUnregisteredClass(Context, *PropertyJson->GetStringField(TEXT("property_class")));
        // Fall back to UObject class if property class could not be found
        ObjectPropertyBase->PropertyClass = PropertyClass ? PropertyClass : UObject::StaticClass();
        
        // Class properties additionally define MetaClass value
        if (FClassProperty* ClassProperty = CastField<FClassProperty>(NewProperty))
        {
            UClass* MetaClass = FindOrCreateUnregisteredClass(Context, *PropertyJson->GetStringField(TEXT("meta_class")));
            // Fall back to UObject meta-class if meta-class could not be found
            ClassProperty->MetaClass = MetaClass ? MetaClass : UObject::StaticClass();
        }
        else if (FSoftClassProperty* SoftClassProperty = CastField<FSoftClassProperty>(NewProperty))
        {
            UClass* MetaClass = FindOrCreateUnregisteredClass(Context, *PropertyJson->GetStringField(TEXT("meta_class")));
            // Fall back to UObject meta-class if meta-class could not be found
            SoftClassProperty->MetaClass = MetaClass ? MetaClass : UObject::StaticClass();
        }
    }
    else if (FInterfaceProperty* InterfaceProperty = CastField<FInterfaceProperty>(NewProperty))
    {
        UClass* InterfaceClass = FindOrCreateUnregisteredClass(Context, *PropertyJson->GetStringField(TEXT("interface_class")));
        // Fall back to UInterface if interface class could not be found
        InterfaceProperty->InterfaceClass = InterfaceClass ? InterfaceClass : UInterface::StaticClass();
    }
    else if (FStructProperty* StructProperty = CastField<FStructProperty>(NewProperty))
    {
        UScriptStruct* Struct = FindOrCreateScriptStruct(Context, PropertyJson->GetStringField(TEXT("struct")));
        // Fall back to FVector if struct class could not be found
        StructProperty->Struct = Struct ? Struct : TBaseStructure<FVector>::Get();
    }
    else if (FEnumProperty* EnumProperty = CastField<FEnumProperty>(NewProperty))
    {
        UEnum* Enum = FindOrCreateEnum(Context, PropertyJson->GetStringField(TEXT("enum")));
        // Fall back to EMovementMode if enum class could not be found
        EnumProperty->SetEnum(Enum ? Enum : StaticEnum<EMovementMode>());

        FProperty* UnderlyingProp = BuildProperty(Context, EnumProperty, PropertyJson->GetObjectField(TEXT("container")));
        EnumProperty->AddCppProperty(UnderlyingProp);
    }
    else if (FByteProperty* ByteProperty = CastField<FByteProperty>(NewProperty))
    {
        // Not all byte properties are enumerations so this field might not be set or be null
        if (PropertyJson->HasTypedField<EJson::String>(TEXT("enum")))
        {
            UEnum* Enum = FindOrCreateEnum(Context, PropertyJson->GetStringField(TEXT("enum")));
            // Fall back to EMovementMode if enum class could not be found
            ByteProperty->Enum = Enum ? Enum : StaticEnum<EMovementMode>();
        }
    }
    else if (FDelegateProperty* DelegateProperty = CastField<FDelegateProperty>(NewProperty))
    {
        UFunction* SignatureFunction = FindOrCreateFunction(Context, PropertyJson->GetStringField(TEXT("signature_function")));
        // Fall back to FOnTimelineEvent delegate signature in the engine if real delegate signature could not be found
        DelegateProperty->SignatureFunction = SignatureFunction ? SignatureFunction : FindObject<UFunction>(nullptr, TEXT("/Script/Engine.OnTimelineEvent__DelegateSignature"));
    }
    else if (FMulticastDelegateProperty* MulticastDelegateProperty = CastField<FMulticastDelegateProperty>(NewProperty))
    {
        UFunction* SignatureFunction = FindOrCreateFunction(Context, PropertyJson->GetStringField(TEXT("signature_function")));
        // Fall back to FOnTimelineEvent delegate signature in the engine if real delegate signature could not be found
        MulticastDelegateProperty->SignatureFunction = SignatureFunction ? SignatureFunction : FindObject<UFunction>(nullptr, TEXT("/Script/Engine.OnTimelineEvent__DelegateSignature"));
    }
    else if (FFieldPathProperty* FieldPathProperty = CastField<FFieldPathProperty>(NewProperty))
    {
        if (PropertyJson->HasTypedField<EJson::String>(TEXT("property_class")))
        {
            FFieldClass* const* PropertyClassPtr = FFieldClass::GetNameToFieldClassMap().Find(TEXT("property_class"));
            // Fall back to FProperty if property class could not be found
            FieldPathProperty->PropertyClass = PropertyClassPtr ? *PropertyClassPtr : FProperty::StaticClass();   
        }
    }
    else
    {
        // TODO: These can be handled together without special casing them by dumping array of FField::GetInnerFields instead of individual fields
        if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(NewProperty))
        {
            FProperty* Inner = BuildProperty(Context, NewProperty, PropertyJson->GetObjectField(TEXT("inner")));
            ArrayProperty->AddCppProperty(Inner);
        }
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
        else if (FOptionalProperty* OptionalProperty = CastField<FOptionalProperty>(NewProperty))
        {
            FProperty* ValueProperty = BuildProperty(Context, NewProperty, PropertyJson->GetObjectField(TEXT("inner")));
            OptionalProperty->AddCppProperty(ValueProperty);
        }
#endif
        else if (FSetProperty* SetProperty = CastField<FSetProperty>(NewProperty))
        {
            FProperty* KeyProp = BuildProperty(Context, NewProperty, PropertyJson->GetObjectField(TEXT("key_prop")));
            SetProperty->AddCppProperty(KeyProp);
        }
        else if (FMapProperty* MapProperty = CastField<FMapProperty>(NewProperty))
        {
            FProperty* KeyProp = BuildProperty(Context, NewProperty, PropertyJson->GetObjectField(TEXT("key_prop")));
            FProperty* ValueProp = BuildProperty(Context, NewProperty, PropertyJson->GetObjectField(TEXT("value_prop")));
        
            MapProperty->AddCppProperty(KeyProp);
            MapProperty->AddCppProperty(ValueProp);
        }
    }

    return NewProperty;
}

bool FSuziePluginModule::ParseObjectConstructionData(const FDynamicClassGenerationContext& Context, const FString& ObjectPath, FDynamicObjectConstructionData& ObjectConstructionData)
{
    // Retrieve the data for the object
    const TSharedPtr<FJsonObject> ObjectDefinition = Context.GlobalObjectMap->GetObjectField(ObjectPath);
    checkf(ObjectDefinition.IsValid(), TEXT("Failed to find data object by path %s"), *ObjectPath);

    FString OuterObjectPath;
    FString ObjectName;
    ParseObjectPath(ObjectPath, OuterObjectPath, ObjectName);
    ObjectConstructionData.ObjectName = FName(*ObjectName);

    // Find the class of this object
    const FString ObjectClassPath = ObjectDefinition->GetStringField(TEXT("class"));
    ObjectConstructionData.ObjectClass = FindObject<UClass>(nullptr, *ObjectClassPath);
    if (ObjectConstructionData.ObjectClass == nullptr)
    {
        UE_LOG(LogSuzie, Warning, TEXT("Failed to parse data object %s because its class %s was not found"), *ObjectPath, *ObjectClassPath);
        return false;
    }

    // Parse object flags. Flags determine how the object should be created
    static const TArray<TPair<FString, EObjectFlags>> ObjectFlagNameLookup = {
        {TEXT("RF_Public"), RF_Public},
        {TEXT("RF_Standalone"), RF_Standalone},
        {TEXT("RF_Transient"), RF_Transient},
        {TEXT("RF_Transactional"), RF_Transactional},
        {TEXT("RF_ArchetypeObject"), RF_ArchetypeObject},
        {TEXT("RF_ClassDefaultObject"), RF_ClassDefaultObject},
        {TEXT("RF_DefaultSubObject"), RF_DefaultSubObject},
    };

    // Convert struct flag names to the struct flags bitmask
    const TSet<FString> ObjectFlagNames = ParseFlags(ObjectDefinition->GetStringField(TEXT("object_flags")));
    ObjectConstructionData.ObjectFlags = RF_NoFlags;
    for (const auto& [ObjectFlagName, ObjectFlagBitmask] : ObjectFlagNameLookup)
    {
        if (ObjectFlagNames.Contains(ObjectFlagName))
        {
            ObjectConstructionData.ObjectFlags |= ObjectFlagBitmask;
        }
    }
    return true;
}

void FSuziePluginModule::DeserializeEnumValue(const FNumericProperty* UnderlyingProperty, void* PropertyValuePtr, const UEnum* Enum, const TSharedPtr<FJsonValue>& JsonPropertyValue)
{
    if (JsonPropertyValue->Type == EJson::String)
    {
        // If this is a string value, it is a name of the enum constant that we need to parse to an enum value
        int32 EnumIndex = Enum->GetIndexByNameString(JsonPropertyValue->AsString(), EGetByNameFlags::None);

        // Validate that the value was actually valid, and if it was not, reset to the first enum constant
        if (EnumIndex == INDEX_NONE)
        {
            UE_LOG(LogSuzie, Warning, TEXT("Unknown enum constant name %s for enum %s when parsing value of property %s"),
                *JsonPropertyValue->AsString(), *Enum->GetPathName(), *UnderlyingProperty->GetPathName());
            EnumIndex = 0;
        }

        // Retrieve the enum value for the constant index and set it to the property
        const int64 EnumValue = Enum->GetValueByIndex(EnumIndex);
        UnderlyingProperty->SetIntPropertyValue(PropertyValuePtr, EnumValue);
    }
    else
    {
        // If this is a numeric value, it could be a direct enum value as integer, so set it directly without parsing
        int64 EnumValue = (int64)JsonPropertyValue->AsNumber();

        // Validate the value as a valid enum constant and fallback to first enum constant if it is not
        if (!Enum->IsValidEnumValue(EnumValue))
        {
            UE_LOG(LogSuzie, Warning, TEXT("Invalid enum constant value %lld for enum %s when parsing value of property %s"),
                EnumValue, *Enum->GetPathName(), *UnderlyingProperty->GetPathName());
            EnumValue = Enum->GetValueByIndex(0);
        }
        UnderlyingProperty->SetIntPropertyValue(PropertyValuePtr, EnumValue);
    }
}

void FSuziePluginModule::DeserializePropertyValue(const FProperty* Property, void* PropertyValuePtr, const TSharedPtr<FJsonValue>& JsonPropertyValue)
{
    if (const FSoftObjectProperty* SoftObjectProperty = CastField<FSoftObjectProperty>(Property))
    {
        // We do not actually have to load or look for object pointed by soft object properties, we can just set the value as object path instead
        const FSoftObjectPtr SoftObjectPtr(FSoftObjectPath(JsonPropertyValue->AsString()));
        SoftObjectProperty->SetPropertyValue(PropertyValuePtr, SoftObjectPtr);
    }
    else if (const FObjectPropertyBase* ObjectProperty = CastField<FObjectPropertyBase>(Property))
    {
        if (!JsonPropertyValue->IsNull())
        {
            // For all other object properties, we must already have the object pointed at in memory, we will not load any objects here
            UObject* Object = StaticFindObject(ObjectProperty->PropertyClass, nullptr, *JsonPropertyValue->AsString());
            ObjectProperty->SetObjectPropertyValue(PropertyValuePtr, Object);
        }
    }
    else if (const FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
    {
        // Bool properties need special handling because they are represented as JSON booleans
        BoolProperty->SetPropertyValue(PropertyValuePtr, JsonPropertyValue->AsBool());
    }
    else if (const FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property); NumericProperty && !NumericProperty->IsEnum())
    {
        if (JsonPropertyValue->Type == EJson::Number)
        {
            // If this is a floating point property, just set it to the JSON value
            if (NumericProperty->IsFloatingPoint())
            {
                NumericProperty->SetFloatingPointPropertyValue(PropertyValuePtr, JsonPropertyValue->AsNumber());
            }
            else
            {
                // This is an integer property otherwise. Whenever its signed or unsigned does not matter here,
                // because for really large values they will be saved as text and not double
                NumericProperty->SetIntPropertyValue(PropertyValuePtr, (int64)JsonPropertyValue->AsNumber());
            }
        }
        else
        {
            // This is a string representation of the number, let the numeric property parse it
            NumericProperty->SetNumericPropertyValueFromString(PropertyValuePtr, *JsonPropertyValue->AsString());
        }
    }
    else if (const FNameProperty* NameProperty = CastField<FNameProperty>(Property))
    {
        NameProperty->SetPropertyValue(PropertyValuePtr, FName(*JsonPropertyValue->AsString()));
    }
    else if (const FStrProperty* StrProperty = CastField<FStrProperty>(Property))
    {
        StrProperty->SetPropertyValue(PropertyValuePtr, JsonPropertyValue->AsString());
    }
    else if (const FTextProperty* TextProperty = CastField<FTextProperty>(Property))
    {
        // TODO: Implement once dump format is known
        TextProperty->SetPropertyValue(PropertyValuePtr, FText::AsCultureInvariant(JsonPropertyValue->AsString()));
    }
    else if (const FEnumProperty* EnumProperty = CastField<FEnumProperty>(Property); EnumProperty && EnumProperty->GetEnum())
    {
        DeserializeEnumValue(EnumProperty->GetUnderlyingProperty(), PropertyValuePtr, EnumProperty->GetEnum(), JsonPropertyValue);
    }
    else if (const FByteProperty* ByteProperty = CastField<FByteProperty>(Property); ByteProperty && ByteProperty->Enum)
    {
        // Non enum byte properties are handled above as FNumericProperty case
        DeserializeEnumValue(ByteProperty, PropertyValuePtr, ByteProperty->Enum, JsonPropertyValue);
    }
    else if (const FStructProperty* StructProperty = CastField<FStructProperty>(Property); StructProperty && StructProperty->Struct)
    {
        // Deserialize nested struct properties payload
        DeserializeStructProperties(StructProperty->Struct, PropertyValuePtr, JsonPropertyValue->AsObject());
    }
    else if (const FFieldPathProperty* FieldPathProperty = CastField<FFieldPathProperty>(Property))
    {
        const TFieldPath<FProperty> FieldPath(*JsonPropertyValue->AsString());
        FieldPathProperty->SetPropertyValue(PropertyValuePtr, FieldPath);
    }
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
    else if (const FOptionalProperty* OptionalProperty = CastField<FOptionalProperty>(Property))
    {
        // If JSON property value is null, optional property is unset
        if (JsonPropertyValue->Type == EJson::Null)
        {
            OptionalProperty->MarkUnset(PropertyValuePtr);
        }
        else
        {
            // Deserialize the inner property value otherwise
            void* ValuePropertyValuePtr = OptionalProperty->MarkSetAndGetInitializedValuePointerToReplace(PropertyValuePtr);
            DeserializePropertyValue(OptionalProperty->GetValueProperty(), ValuePropertyValuePtr, JsonPropertyValue);
        }
    }
#endif
    else if (const FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
    {
        const TArray<TSharedPtr<FJsonValue>>& ArrayElementJsonValues = JsonPropertyValue->AsArray();
        FScriptArrayHelper ArrayValueHelper(ArrayProperty, PropertyValuePtr);

        ArrayValueHelper.Resize(ArrayElementJsonValues.Num());
        for (int32 ElementIndex = 0; ElementIndex < ArrayElementJsonValues.Num(); ElementIndex++)
        {
            // GetElementPtr does not exist in <5.3 and this one will inline
            // If inlining is undesirable, wrapper or ifdef can be used
            void* ElementValuePtr = ArrayValueHelper.GetRawPtr(ElementIndex);
            DeserializePropertyValue(ArrayProperty->Inner, ElementValuePtr, ArrayElementJsonValues[ElementIndex]);
        }
    }
    else if (const FSetProperty* SetProperty = CastField<FSetProperty>(Property))
    {
        const TArray<TSharedPtr<FJsonValue>>& SetElementJsonValues = JsonPropertyValue->AsArray();
        FScriptSetHelper SetValueHelper(SetProperty, PropertyValuePtr);
        
        for (const TSharedPtr<FJsonValue>& ElementJsonValue : SetElementJsonValues)
        {
            const int32 NewElementIndex = SetValueHelper.AddDefaultValue_Invalid_NeedsRehash();
            void* ElementValuePtr = SetValueHelper.GetElementPtr(NewElementIndex);
            DeserializePropertyValue(SetProperty->ElementProp, ElementValuePtr, ElementJsonValue);
        }
        SetValueHelper.Rehash();
    }
    else if (const FMapProperty* MapProperty = CastField<FMapProperty>(Property))
    {
        const TArray<TSharedPtr<FJsonValue>>& MapPairJsonValues = JsonPropertyValue->AsArray();
        FScriptMapHelper MapValueHelper(MapProperty, PropertyValuePtr);
        
        for (const TSharedPtr<FJsonValue>& ElementJsonValue : MapPairJsonValues)
        {
            const int32 NewPairIndex = MapValueHelper.AddDefaultValue_Invalid_NeedsRehash();
            void* KeyElementPtr = MapValueHelper.GetKeyPtr(NewPairIndex);
            void* ValueElementPtr = MapValueHelper.GetValuePtr(NewPairIndex);

            const TArray<TSharedPtr<FJsonValue>>& PairValue = ElementJsonValue->AsArray();
            if (PairValue.Num() == 2)
            {
                DeserializePropertyValue(MapProperty->KeyProp, KeyElementPtr, PairValue[0]);
                DeserializePropertyValue(MapProperty->ValueProp, ValueElementPtr, PairValue[1]);
            }
        }
        MapValueHelper.Rehash();
    }
}

void FSuziePluginModule::DeserializeStructProperties(const UStruct* Struct, void* StructData, const TSharedPtr<FJsonObject>& PropertyValues)
{
    for (TFieldIterator<FProperty> PropertyIterator(Struct, EFieldIterationFlags::IncludeAll); PropertyIterator; ++PropertyIterator)
    {
        const FProperty* Property = *PropertyIterator;
        if (!PropertyValues->HasField(Property->GetName())) continue;

        const TSharedPtr<FJsonValue> PropertyJsonValue = PropertyValues->Values.FindChecked(Property->GetName());
        if (Property->ArrayDim != 1)
        {
            // Handle static array properties here to avoid special handling in DeserializePropertyValue
            const TArray<TSharedPtr<FJsonValue>>& StaticArrayPropertyJsonValues = PropertyJsonValue->AsArray();
            for (int32 ArrayIndex = 0; ArrayIndex < FMath::Min(Property->ArrayDim, StaticArrayPropertyJsonValues.Num()); ArrayIndex++)
            {
                void* ElementValuePtr = Property->ContainerPtrToValuePtr<void>(StructData, ArrayIndex);
                const TSharedPtr<FJsonValue> ElementJsonValue = StaticArrayPropertyJsonValues[ArrayIndex];
                DeserializePropertyValue(Property, ElementValuePtr, ElementJsonValue);
            }
        }
        else
        {
            // This is a normal non-static-array property that can be serialized through DeserializePropertyValue
            void* PropertyValuePtr = Property->ContainerPtrToValuePtr<void>(StructData);
            DeserializePropertyValue(Property, PropertyValuePtr, PropertyJsonValue);
        }
    }
}

UClass* FSuziePluginModule::GetNativeParentClassForDynamicClass(const UClass* InDynamicClass)
{
    // Find native parent class for this polymorphic class, skipping any generated class parents
    UClass* NativeParentClass = InDynamicClass ? InDynamicClass->GetSuperClass() : nullptr;
    while (NativeParentClass && NativeParentClass->ClassConstructor == &FSuziePluginModule::PolymorphicClassConstructorInvocationHelper)
    {
        NativeParentClass = NativeParentClass->GetSuperClass();
    }
    return NativeParentClass;
}

UClass* FSuziePluginModule::GetDynamicParentClassForBlueprintClass(UClass* InBlueprintClass)
{
    // Find the polymorphic class we are currently constructing, in case this is a derived blueprint class
    UClass* CurrentClass = InBlueprintClass;
    while (CurrentClass->ClassConstructor == &FSuziePluginModule::PolymorphicClassConstructorInvocationHelper && !DynamicClassConstructionData.Contains(CurrentClass))
    {
        CurrentClass = CurrentClass->GetSuperClass();
    }
    return CurrentClass;
}

void FSuziePluginModule::CopySuzieDynamicDefaultsFromCDO(
    UObject* DestinationObject,
    const UClass* TopLevelDynamicClass)
{
    if (DestinationObject == nullptr || TopLevelDynamicClass == nullptr)
    {
        return;
    }

    UObject* ClassDefaultObject = TopLevelDynamicClass->ClassDefaultObject;
    if (ClassDefaultObject == nullptr || DestinationObject == ClassDefaultObject)
    {
        return;
    }

    // FObjectInitializer's optimized native-class path does not reliably copy
    // properties that Suzie appends dynamically to an otherwise native class.
    // The old InitializationArchetype__ duplicate forced that copy indirectly,
    // but duplicating arbitrary CDOs is unsafe for types such as UDataTable,
    // UAISubsystem and UChannel.
    //
    // Initialize direct Suzie-reflected properties from the REAL reconstructed
    // dynamic parent CDO instead. This is used both for exact Suzie instances and
    // for generated/Blueprint CDOs derived from a Suzie class. Leave instanced/exported
    // object references alone so normal default-subobject instancing and Blueprint
    // component templates remain authoritative. Package properties are deserialized
    // after construction and therefore still override these inherited defaults.
    const UClass* CurrentDynamicClass = TopLevelDynamicClass;
    while (CurrentDynamicClass != nullptr
        && CurrentDynamicClass->ClassConstructor == &FSuziePluginModule::PolymorphicClassConstructorInvocationHelper)
    {
        for (FField* Field = CurrentDynamicClass->ChildProperties; Field != nullptr; Field = Field->Next)
        {
            FProperty* Property = CastField<FProperty>(Field);
            if (Property == nullptr)
            {
                continue;
            }

            if (Property->HasAnyPropertyFlags(
                CPF_InstancedReference
                | CPF_ContainsInstancedReference
                | CPF_ExportObject))
            {
                continue;
            }

            Property->CopyCompleteValue_InContainer(DestinationObject, ClassDefaultObject);
        }

        CurrentDynamicClass = CurrentDynamicClass->GetSuperClass();
    }
}

void FSuziePluginModule::PolymorphicClassConstructorInvocationHelper(const FObjectInitializer& ObjectInitializer)
{
    const UClass* NativeParentClass = GetNativeParentClassForDynamicClass(ObjectInitializer.GetClass());
    const UClass* TopLevelDynamicClass = GetDynamicParentClassForBlueprintClass(ObjectInitializer.GetClass());

    // We must have valid construction data for all dynamic classes.
    checkf(DynamicClassConstructionData.Contains(TopLevelDynamicClass),
        TEXT("Failed to find dynamic class construction data for dynamic class %s"),
        *TopLevelDynamicClass->GetPathName());

    // Gather all dynamic classes that contribute to the object being constructed, starting at the top level one
    // We need this list BEFORE applying subobject overrides to handle the entire hierarchy
    TArray<const UClass*, TInlineAllocator<8>> DynamicClassHierarchyTree;
    const UClass* CurrentDynamicClass = TopLevelDynamicClass;
    while (CurrentDynamicClass->ClassConstructor == &FSuziePluginModule::PolymorphicClassConstructorInvocationHelper)
    {
        DynamicClassHierarchyTree.Add(CurrentDynamicClass);
        CurrentDynamicClass = CurrentDynamicClass->GetSuperClass();
    }

    const bool bConstructingExactDynamicClass = ObjectInitializer.GetClass() == TopLevelDynamicClass;
    UObject* ConstructedObject = ObjectInitializer.GetObj();

    // Exact dynamically reconstructed /Script instances need Suzie's appended reflected
    // properties initialized from the reconstructed class CDO. FObjectInitializer's
    // optimized native path does not reliably copy those dynamically-added properties.
    const bool bShouldCopyExactDynamicDefaults =
        bConstructingExactDynamicClass
        && ConstructedObject != nullptr
        && !ConstructedObject->HasAnyFlags(RF_ClassDefaultObject)
        && (ObjectInitializer.GetArchetype() == nullptr
            || ObjectInitializer.GetArchetype() == TopLevelDynamicClass->ClassDefaultObject);

    // A cooked Blueprint/generated class derived from a Suzie class has the same problem
    // while its CDO is being constructed. Retail Blueprint CDOs commonly omit inherited
    // values which equal the native parent CDO default. In the retail game those values
    // arrive from Default__SBZWhatever before the Blueprint's serialized CDO overrides are
    // applied. Because Suzie appends those parent properties dynamically, the generated CDO
    // can otherwise begin with zero memory for them (float 0, enum 0, null, etc.).
    //
    // Seed ONLY the inherited Suzie-reflected fields from the reconstructed dynamic parent
    // CDO. The Blueprint export is serialized after construction, so explicit Blueprint
    // defaults still win. Instanced/exported references are skipped by the copy helper,
    // preserving Blueprint component/default-subobject templates.
    const bool bShouldSeedDerivedClassCDO =
        !bConstructingExactDynamicClass
        && ConstructedObject != nullptr
        && ConstructedObject->HasAnyFlags(RF_ClassDefaultObject)
        && ObjectInitializer.GetClass()->IsChildOf(TopLevelDynamicClass);

    // Run logic necessary for the top level dynamic class object.
    {
        // Collect subobject overrides from the ENTIRE dynamic class hierarchy, not just the top-level class.
        // Child class overrides take precedence over parent class definitions, so we iterate from parent to child
        // and let later entries overwrite earlier ones.
        TMap<FName, UClass*> FinalSubobjectClasses;
        TSet<FName> AllSuppressedSubobjects;
        TArray<FNestedDefaultSubobjectOverrideData> AllNestedOverrides;

        // Iterate from furthest parent to top-level class (reverse order)
        for (int32 i = DynamicClassHierarchyTree.Num() - 1; i >= 0; i--)
        {
            const FDynamicClassConstructionData* ClassConstructionData = DynamicClassConstructionData.Find(DynamicClassHierarchyTree[i]);
            if (ClassConstructionData)
            {
                // Collect subobject classes - child overrides parent
                for (const FDynamicObjectConstructionData& SubobjectData : ClassConstructionData->DefaultSubobjects)
                {
                    FinalSubobjectClasses.Add(SubobjectData.ObjectName, SubobjectData.ObjectClass);
                }
                // Collect suppressed subobjects
                for (const FName& SuppressedName : ClassConstructionData->SuppressedDefaultSubobjects)
                {
                    AllSuppressedSubobjects.Add(SuppressedName);
                }
                // Collect nested overrides
                AllNestedOverrides.Append(ClassConstructionData->DefaultSubobjectOverrides);
            }
        }

        // Apply all subobject class overrides before running any constructor
        for (const auto& [SubobjectName, SubobjectClass] : FinalSubobjectClasses)
        {
            // ReSharper disable once CppExpressionWithoutSideEffects
            ObjectInitializer.SetDefaultSubobjectClass(SubobjectName, SubobjectClass);
        }

        // Disable creation of certain subobjects that any class in the hierarchy does not want to have
        for (const FName& DisabledSubobjectName : AllSuppressedSubobjects)
        {
            // ReSharper disable once CppExpressionWithoutSideEffects
            ObjectInitializer.DoNotCreateDefaultSubobject(DisabledSubobjectName);
        }

        // Apply overrides for nested subobject types
        for (const FNestedDefaultSubobjectOverrideData& SubobjectOverrideData : AllNestedOverrides)
        {
            // ReSharper disable once CppExpressionWithoutSideEffects
            ObjectInitializer.SetNestedDefaultSubobjectClass(SubobjectOverrideData.SubobjectPath, SubobjectOverrideData.OverridenClass);
        }
    }

    // Run the constructor for that parent native class now to get an initialized object of the parent class type and parent default subobjects
    NativeParentClass->ClassConstructor(ObjectInitializer);

    // Run constructors for each dynamic class in reverse order, e.g. from the furthest parent to the top level class
    for (int32 i = DynamicClassHierarchyTree.Num() - 1; i >= 0; i--)
    {
        ExecutePolymorphicClassConstructorFrameForDynamicClass(ObjectInitializer, DynamicClassHierarchyTree[i]);
    }

    if (bShouldSeedDerivedClassCDO)
    {
        CopySuzieDynamicDefaultsFromCDO(ConstructedObject, TopLevelDynamicClass);
        UE_LOG(LogSuzie, VeryVerbose,
            TEXT("Seeded derived class CDO %s with inherited Suzie defaults from %s"),
            *ConstructedObject->GetPathName(),
            *TopLevelDynamicClass->ClassDefaultObject->GetPathName());

        LogSuzieDoorPersistenceState(TEXT("SeededDerivedCDO"), ConstructedObject);
    }
    else if (bShouldCopyExactDynamicDefaults)
    {
        CopySuzieDynamicDefaultsFromCDO(ConstructedObject, TopLevelDynamicClass);
        UE_LOG(LogSuzie, VeryVerbose,
            TEXT("Initialized exact Suzie instance %s from reconstructed CDO %s"),
            *ConstructedObject->GetPathName(),
            *TopLevelDynamicClass->ClassDefaultObject->GetPathName());
    }
}

void FSuziePluginModule::ExecutePolymorphicClassConstructorFrameForDynamicClass(const FObjectInitializer& ObjectInitializer, const UClass* DynamicClass)
{
    // We must have valid construction data for all dynamic classes
    const FDynamicClassConstructionData* ClassConstructionData = DynamicClassConstructionData.Find(DynamicClass);
    checkf(ClassConstructionData, TEXT("Failed to find dynamic class construction data for dynamic class %s"), *DynamicClass->GetPathName());

    // Run property initializers for properties defined in this class that need constructor calls
    for (const FProperty* Property : ClassConstructionData->PropertiesToConstruct)
    {
        Property->InitializeValue_InContainer(ObjectInitializer.GetObj());
    }

    // Create missing default subobjects for this dynamic class type
    // NOTE: We check by NAME only (using UObject::StaticClass()), not by specific class type.
    // This is because a child class in the hierarchy may have overridden the subobject's class type,
    // and the subobject will have been created with the overridden type (via SetDefaultSubobjectClass).
    // If we checked by the original class type, we wouldn't find it and would try to create a duplicate.
    for (const FDynamicObjectConstructionData& SubobjectConstructionData : ClassConstructionData->DefaultSubobjects)
    {
        if (StaticFindObjectFast(UObject::StaticClass(), ObjectInitializer.GetObj(), SubobjectConstructionData.ObjectName) == nullptr)
        {
            ObjectInitializer.CreateDefaultSubobject(ObjectInitializer.GetObj(),
                SubobjectConstructionData.ObjectName, UObject::StaticClass(), SubobjectConstructionData.ObjectClass,
                true, EnumHasAnyFlags(SubobjectConstructionData.ObjectFlags, RF_Transient));
        }
    }

    // Create missing NESTED default subobjects while FObjectInitializer is still active.
    //
    // The retail jmap can describe native nested DSOs which do not exist in the closest
    // surviving parent constructor in this editor build. Previously Suzie recreated those
    // after the CDO constructor had finished with NewObject(). That produced the right object
    // path and made AsyncLoading2 script imports resolve, but it bypassed FObjectInitializer's
    // subobject-instancing bookkeeping. When a Blueprint-derived actor was instantiated,
    // references inside a nested USceneComponent (for example AttachParent) could therefore
    // remain pointed at the native CDO template instead of the matching instance component:
    //
    //   Parent 'SceneComponent' (Owner 'Default__SBZInteractableDoor')
    //   Self   'MinigameAudioComponent' (Owner 'BP_..._C_1')
    //
    // Creating the nested DSO through FObjectInitializer makes it a real constructor-created
    // default subobject, allowing UE's normal instancing graph to remap template references
    // to the instance equivalents. DefaultSubobjectOverrides already contains the complete
    // parent->child name path for every nested retail DSO, so it doubles as the construction
    // description here.
    for (const FNestedDefaultSubobjectOverrideData& NestedSubobjectData : ClassConstructionData->DefaultSubobjectOverrides)
    {
        if (NestedSubobjectData.SubobjectPath.Num() < 2 || NestedSubobjectData.OverridenClass == nullptr)
        {
            continue;
        }

        UObject* NestedOuter = ObjectInitializer.GetObj();
        bool bResolvedOuter = true;

        // Resolve every path element except the leaf. The first element is the top-level
        // DSO owned by the actor/object, later elements are nested DSOs. Parent-first
        // collection order means each required outer should already exist by this point.
        for (int32 PathIndex = 0; PathIndex < NestedSubobjectData.SubobjectPath.Num() - 1; ++PathIndex)
        {
            NestedOuter = StaticFindObjectFast(
                UObject::StaticClass(),
                NestedOuter,
                NestedSubobjectData.SubobjectPath[PathIndex]);

            if (NestedOuter == nullptr)
            {
                bResolvedOuter = false;
                break;
            }
        }

        if (!bResolvedOuter || NestedOuter == nullptr)
        {
            UE_LOG(LogSuzie, VeryVerbose,
                TEXT("Deferred nested default subobject %s for %s because its outer path is not constructed yet"),
                *NestedSubobjectData.SubobjectPath.Last().ToString(),
                *ObjectInitializer.GetObj()->GetPathName());
            continue;
        }

        const FName NestedObjectName = NestedSubobjectData.SubobjectPath.Last();
        if (StaticFindObjectFast(UObject::StaticClass(), NestedOuter, NestedObjectName) != nullptr)
        {
            continue;
        }

        UObject* CreatedNestedSubobject = ObjectInitializer.CreateDefaultSubobject(
            NestedOuter,
            NestedObjectName,
            UObject::StaticClass(),
            NestedSubobjectData.OverridenClass,
            true,
            false);

        if (CreatedNestedSubobject != nullptr)
        {
            UE_LOG(LogSuzie, VeryVerbose,
                TEXT("Constructor-created missing retail nested default subobject %s (class %s)"),
                *CreatedNestedSubobject->GetPathName(),
                *NestedSubobjectData.OverridenClass->GetPathName());
        }
        else
        {
            UE_LOG(LogSuzie, Warning,
                TEXT("Could not constructor-create retail nested default subobject %s under %s (class %s); post-construction fallback may be required"),
                *NestedObjectName.ToString(),
                *NestedOuter->GetPathName(),
                *NestedSubobjectData.OverridenClass->GetPathName());
        }
    }
}

void FSuziePluginModule::CollectNestedDefaultSubobjectTypeOverrides(FDynamicClassGenerationContext& Context, TArray<FName> SubobjectNameStack, const FString& SubobjectPath, TArray<FNestedDefaultSubobjectOverrideData>& OutSubobjectOverrideData)
{
    const TSharedPtr<FJsonObject> ObjectDefinition = Context.GlobalObjectMap->GetObjectField(SubobjectPath);
    checkf(ObjectDefinition.IsValid(), TEXT("Failed to find subobject object by path %s"), *SubobjectPath);
    
    // Parse construction data for this object first. Skip if this is not a subobject
    FDynamicObjectConstructionData ObjectConstructionData;
    if (!ParseObjectConstructionData(Context, SubobjectPath, ObjectConstructionData) || !EnumHasAnyFlags(ObjectConstructionData.ObjectFlags, RF_DefaultSubObject))
    {
        return;
    }
    // Class of the overriden default subobject might not have been finalized yet, in which case we have to finalize it now to have its archetype with correct values
    if (Context.ClassesPendingFinalization.Contains(ObjectConstructionData.ObjectClass))
    {
        FinalizeClass(Context, ObjectConstructionData.ObjectClass);
    }

    // Add the name of this object to the stack. If this is not a top level subobject, add it to the override list
    SubobjectNameStack.Add(ObjectConstructionData.ObjectName);
    if (SubobjectNameStack.Num() > 1)
    {
        OutSubobjectOverrideData.Add({SubobjectNameStack, ObjectConstructionData.ObjectClass});
    }

    // Iterate over children and collect nested default subobject overrides for them
    if (ObjectDefinition->HasTypedField<EJson::Array>(TEXT("children")))
    {
        const TArray<TSharedPtr<FJsonValue>>& Children = ObjectDefinition->GetArrayField(TEXT("children"));
        for (const TSharedPtr<FJsonValue>& ChildJsonValue : Children)
        {
            // CollectNestedDefaultSubobjectTypeOverrides will discard children that are not actually subobjects
            const FString ChildPath = ChildJsonValue->AsString();
            CollectNestedDefaultSubobjectTypeOverrides(Context, SubobjectNameStack, ChildPath, OutSubobjectOverrideData);
        }
    }
}

void FSuziePluginModule::EnsureDefaultSubobjectsFromJsonRecursive(FDynamicClassGenerationContext& Context, UObject* OuterObject, const TSharedPtr<FJsonObject>& ObjectDefinition)
{
    if (OuterObject == nullptr || !ObjectDefinition.IsValid() || !ObjectDefinition->HasTypedField<EJson::Array>(TEXT("children")))
    {
        return;
    }

    const TArray<TSharedPtr<FJsonValue>>& Children = ObjectDefinition->GetArrayField(TEXT("children"));
    for (const TSharedPtr<FJsonValue>& ChildJsonValue : Children)
    {
        const FString ChildPath = ChildJsonValue->AsString();

        FDynamicObjectConstructionData ObjectConstructionData;
        if (!ParseObjectConstructionData(Context, ChildPath, ObjectConstructionData)
            || !EnumHasAnyFlags(ObjectConstructionData.ObjectFlags, RF_DefaultSubObject))
        {
            continue;
        }

        if (Context.ClassesPendingFinalization.Contains(ObjectConstructionData.ObjectClass))
        {
            FinalizeClass(Context, ObjectConstructionData.ObjectClass);
        }

        // Find by name rather than exact class. A child class can override the class of a
        // default subobject while retaining the same object name.
        UObject* SubobjectInstance = StaticFindObjectFast(
            UObject::StaticClass(),
            OuterObject,
            ObjectConstructionData.ObjectName);

        if (SubobjectInstance == nullptr)
        {
            // Normally FObjectInitializer creates every DSO while the reconstructed class CDO
            // is being built. Some retail classes, however, contain nested native DSOs that
            // are not emitted by the closest surviving parent constructor in the editor build.
            // Recreate the missing archetype directly from the jmap so cooked TemplateIndex
            // imports still have the object graph that existed in the retail executable.
            UObject* Archetype = ObjectConstructionData.ObjectClass
                ? ObjectConstructionData.ObjectClass->GetDefaultObject()
                : nullptr;

            EObjectFlags CreationFlags = ObjectConstructionData.ObjectFlags;
            CreationFlags &= ~RF_ClassDefaultObject;
            CreationFlags |= RF_DefaultSubObject | RF_ArchetypeObject;

            SubobjectInstance = NewObject<UObject>(
                OuterObject,
                ObjectConstructionData.ObjectClass,
                ObjectConstructionData.ObjectName,
                CreationFlags,
                Archetype);

            if (SubobjectInstance)
            {
                UE_LOG(LogSuzie, Display,
                    TEXT("Reconstructed missing retail default subobject %s (class %s)"),
                    *SubobjectInstance->GetPathName(),
                    *ObjectConstructionData.ObjectClass->GetPathName());
            }
            else
            {
                UE_LOG(LogSuzie, Error,
                    TEXT("Failed to reconstruct retail default subobject %s under %s (class %s)"),
                    *ObjectConstructionData.ObjectName.ToString(),
                    *OuterObject->GetPathName(),
                    ObjectConstructionData.ObjectClass ? *ObjectConstructionData.ObjectClass->GetPathName() : TEXT("<null>"));
                continue;
            }
        }

        const TSharedPtr<FJsonObject> ChildDefinition = Context.GlobalObjectMap->GetObjectField(ChildPath);
        if (ChildDefinition.IsValid())
        {
            EnsureDefaultSubobjectsFromJsonRecursive(Context, SubobjectInstance, ChildDefinition);
        }
    }
}

void FSuziePluginModule::DeserializeObjectAndSubobjectPropertyValuesRecursive(const FDynamicClassGenerationContext& Context, UObject* Object, const TSharedPtr<FJsonObject>& ObjectDefinition)
{
    // Deserialize property values for this object first
    if (ObjectDefinition->HasTypedField<EJson::Object>(TEXT("property_values")))
    {
        const TSharedPtr<FJsonObject> PropertyValues = ObjectDefinition->GetObjectField(TEXT("property_values"));
        DeserializeStructProperties(Object->GetClass(), Object, PropertyValues);
    }

    // Iterate over children and deserialize values for the ones that already exist as default subobjects
    if (ObjectDefinition->HasTypedField<EJson::Array>(TEXT("children")))
    {
        const TArray<TSharedPtr<FJsonValue>>& Children = ObjectDefinition->GetArrayField(TEXT("children"));
        for (const TSharedPtr<FJsonValue>& ChildJsonValue : Children)
        {
            const FString ChildPath = ChildJsonValue->AsString();
            
            // Parse object construction data and check if it is a default subobject
            FDynamicObjectConstructionData ObjectConstructionData;
            if (ParseObjectConstructionData(Context, ChildPath, ObjectConstructionData) && EnumHasAnyFlags(ObjectConstructionData.ObjectFlags, RF_DefaultSubObject))
            {
                const TSharedPtr<FJsonObject> SubobjectDefinition = Context.GlobalObjectMap->GetObjectField(ChildPath);
                UObject* SubobjectInstance = StaticFindObjectFast(ObjectConstructionData.ObjectClass, Object, ObjectConstructionData.ObjectName);

                // If we have a constructed subobject instance, deserialize the properties into that instance
                if (SubobjectDefinition && SubobjectInstance && SubobjectInstance->HasAnyFlags(RF_DefaultSubObject))
                {
                    DeserializeObjectAndSubobjectPropertyValuesRecursive(Context, SubobjectInstance, SubobjectDefinition);   
                }
            }
        }
    }
}

void FSuziePluginModule::FinalizeClass(FDynamicClassGenerationContext& Context, UClass* Class)
{
    // Skip this class if it has already been finalized as a dependency of its child class
    if (!Context.ClassesPendingFinalization.Contains(Class))
    {
        return;
    }

    // Find the definition for the class default object
    const FString ClassDefaultObjectPath = Context.ClassesPendingFinalization.FindAndRemoveChecked(Class);

    // Finalize our parent class first since we require parent class CDO to be populated before CDO for this class can be created
    UClass* ParentClass = Class->GetSuperClass();
    if (ParentClass && Context.ClassesPendingFinalization.Contains(ParentClass))
    {
        FinalizeClass(Context, ParentClass);
    }

    const TSharedPtr<FJsonObject> ClassDefaultObjectDefinition = Context.GlobalObjectMap->GetObjectField(ClassDefaultObjectPath);
    checkf(ClassDefaultObjectDefinition.IsValid(), TEXT("Failed to find default object by path %s"), *ClassDefaultObjectPath);

    // Iterate child objects of the class default object to find default subobjects that we want to construct before we deserialize the data
    FDynamicClassConstructionData& ClassConstructionData = DynamicClassConstructionData.FindOrAdd(Class);
    TSet<FName> CreatedDefaultSubobjects;
    
    const TArray<TSharedPtr<FJsonValue>>& Children = ClassDefaultObjectDefinition->GetArrayField(TEXT("children"));
    for (const TSharedPtr<FJsonValue>& ChildObjectPathValue : Children)
    {
        FString ChildPath = ChildObjectPathValue->AsString();
        FDynamicObjectConstructionData ChildObjectConstructionData;
        if (ParseObjectConstructionData(Context, ChildPath, ChildObjectConstructionData) && EnumHasAnyFlags(ChildObjectConstructionData.ObjectFlags, RF_DefaultSubObject))
        {
            // Class of our default subobject might not have been finalized yet, in which case we have to finalize it now to have its archetype with correct values
            if (Context.ClassesPendingFinalization.Contains(ChildObjectConstructionData.ObjectClass))
            {
                FinalizeClass(Context, ChildObjectConstructionData.ObjectClass);
            }
            ClassConstructionData.DefaultSubobjects.Add(ChildObjectConstructionData);
            CreatedDefaultSubobjects.Add(ChildObjectConstructionData.ObjectName);
            
            // Collect subobject overrides for this subobject
            CollectNestedDefaultSubobjectTypeOverrides(Context, TArray<FName>(), ChildPath, ClassConstructionData.DefaultSubobjectOverrides);
        }
    }

    // Iterate default subobjects of our parent native class. If we have not created one of them,
    // it may have been explicitly disabled by the retail class. However, the jmap comes from a
    // cooked retail process and therefore cannot contain editor-only native subobjects that exist
    // only in this editor build. Treating those as explicitly suppressed is wrong and can also
    // trip FObjectInitializer's required-subobject guard (for example ANavLinkProxy's EdRenderComp).
    //
    // Preserve editor-only native subobjects and only suppress runtime subobjects that are genuinely
    // absent from the retail CDO definition.
    // TODO: This does not handle disabled nested default subobjects.
    const UClass* NativeParentClass = GetNativeParentClassForDynamicClass(Class);
    ForEachObjectWithOuter(NativeParentClass->GetDefaultObject(), [&](const UObject* ArchetypeDefaultSubobject)
    {
        if (!ArchetypeDefaultSubobject->HasAnyFlags(RF_DefaultSubObject)
            || CreatedDefaultSubobjects.Contains(ArchetypeDefaultSubobject->GetFName()))
        {
            return;
        }

        if (IsEditorOnlyObject(ArchetypeDefaultSubobject))
        {
            UE_LOG(LogSuzie, VeryVerbose,
                TEXT("Keeping editor-only native default subobject %s while reconstructing %s; retail jmap omission is not a suppression."),
                *ArchetypeDefaultSubobject->GetPathName(),
                *Class->GetPathName());
            return;
        }

        ClassConstructionData.SuppressedDefaultSubobjects.Add(ArchetypeDefaultSubobject->GetFName());
    }, false);
    
    // Assemble reference token stream for garbage collector
    Class->AssembleReferenceTokenStream(true);
    // Create class default object now that we have class object construction data
    UObject* ClassDefaultObject = Class->GetDefaultObject(true);
    if (ClassDefaultObject)
    {
        ClassDefaultObject->AddToRoot();
    }

    // Some retail native classes own nested DSOs that the closest surviving parent
    // constructor in this editor build does not create. Ensure the entire default-subobject
    // tree described by the jmap exists before copying retail property values into it.
    // This is generic and is not specific to doors or Wwise. For example, it restores
    // SBZMiniGameComponent's nested AkComponent named MinigameAudioComponent when that
    // template is present in the retail class definition.
    EnsureDefaultSubobjectsFromJsonRecursive(Context, ClassDefaultObject, ClassDefaultObjectDefinition);

    // Recursively deserialize property values for the default object and its subobjects (and their nested subobjects)
    DeserializeObjectAndSubobjectPropertyValuesRecursive(Context, ClassDefaultObject, ClassDefaultObjectDefinition);

    if (Class->GetPathName() == TEXT("/Script/Starbreeze.SBZInteractableDoor"))
    {
        LogSuzieDoorPersistenceState(TEXT("ReconstructedNativeCDO"), ClassDefaultObject);
    }

    // The initial native registration scan has already finished by the time Suzie runs.
    // Register the late-created CDO explicitly as a class CDO, matching the normal
    // compiled-in registration path. Cooked Blueprint exports can use the CDO itself
    // or one of its native default subobjects as their TemplateIndex.
    NotifyDynamicScriptObjectRegistration(ClassDefaultObject, ENotifyRegistrationType::NRT_ClassCDO);

    // Suzie creates the CDO and its default subobjects after the engine's ordinary
    // compiled-in registration pass. A cooked Blueprint export can use one of those
    // subobjects as its TemplateIndex, so every reconstructed RF_DefaultSubObject must
    // be explicitly visible to AsyncLoading2. Do not assume RF_Public children are
    // discovered by a late manual CDO notification: that recursion is part of the
    // normal boot registration flow, which Suzie has already missed.
    //
    // NotifyDynamicScriptObjectRegistration preserves the complete owner chain for
    // nested NRT_NoExportObject registrations. That is essential for paths such as
    // /Script/Starbreeze.Default__<Owner>:MinigameAudioComponent.
    ForEachObjectWithOuter(ClassDefaultObject, [&](UObject* DefaultSubobject)
    {
        if (DefaultSubobject == nullptr
            || !DefaultSubobject->HasAnyFlags(RF_DefaultSubObject))
        {
            return;
        }

        NotifyDynamicScriptObjectRegistration(
            DefaultSubobject,
            ENotifyRegistrationType::NRT_NoExportObject);

        // Keep one observed retail template visible at Display level so a normal cook log
        // proves both the reconstructed path and the exact script-import identity. The
        // reconstruction/registration logic itself remains fully generic.
        if (DefaultSubobject->GetFName() == FName(TEXT("MinigameAudioComponent")))
        {
            const FString FullScriptPath = DefaultSubobject->GetPathName();
            const uint64 ScriptImportId = FPackageObjectIndex::FromScriptPath(FullScriptPath).Value();
            UE_LOG(LogSuzie, Display,
                TEXT("MinigameAudioComponent template ready: %s | Class=%s | ScriptImport=0x%016llX"),
                *FullScriptPath,
                *DefaultSubobject->GetClass()->GetPathName(),
                static_cast<unsigned long long>(ScriptImportId));
        }
    }, true);

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSuziePluginModule, Suzie);
