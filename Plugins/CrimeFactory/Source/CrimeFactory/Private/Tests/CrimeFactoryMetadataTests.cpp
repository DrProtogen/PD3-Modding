#if WITH_DEV_AUTOMATION_TESTS

#include "Metadata/CrimeFactoryMetadataSync.h"
#include "Metadata/CrimeFactoryModIcon.h"
#include "CrimeFactoryModEntryList.h"
#include "CrimeFactoryModEntry.h"
#include "ModMetadataObject.h"
#include "Brushes/SlateDynamicImageBrush.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Containers/Ticker.h"
#include "Dom/JsonObject.h"
#include "Editor.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Framework/Application/SlateApplication.h"
#include "HAL/FileManager.h"
#include "ImageUtils.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/AutomationTest.h"
#include "Misc/FileHelper.h"
#include "Misc/CommandLine.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "Misc/ScopeExit.h"
#include "PluginUtils.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "ScopedTransaction.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/Package.h"
#include "UObject/StrongObjectPtr.h"
#include "UObject/UnrealType.h"
#include "Widgets/SWindow.h"
#include "Widgets/Text/STextBlock.h"

namespace
{
    FProperty* Field(UObject* Object, const TCHAR* Key)
    {
        for (TFieldIterator<FProperty> It(Object->GetClass()); It; ++It)
            if (It->GetName() == Key || It->GetDisplayNameText().ToString().Replace(TEXT(" "), TEXT("")) == Key) return *It;
        return nullptr;
    }

    void SetText(UObject* Object, const TCHAR* Key, const FString& Value)
    {
        auto* Property = Field(Object, Key);
        if (auto* Text = CastField<FTextProperty>(Property)) Text->SetPropertyValue_InContainer(Object, FText::FromString(Value));
        if (auto* Text = CastField<FStrProperty>(Property)) Text->SetPropertyValue_InContainer(Object, Value);
        if (auto* Text = CastField<FNameProperty>(Property)) Text->SetPropertyValue_InContainer(Object, FName(*Value));
    }

    FString GetText(UObject* Object, const TCHAR* Key)
    {
        auto* Property = Field(Object, Key);
        if (auto* Text = CastField<FTextProperty>(Property)) return Text->GetPropertyValue_InContainer(Object).ToString();
        if (auto* Text = CastField<FStrProperty>(Property)) return Text->GetPropertyValue_InContainer(Object);
        if (auto* Text = CastField<FNameProperty>(Property)) return Text->GetPropertyValue_InContainer(Object).ToString();
        return TEXT("<unsupported>");
    }

    void Notify(UObject* Object, const TCHAR* Key)
    {
        FPropertyChangedEvent Event(Field(Object, Key), EPropertyChangeType::ValueSet);
        Object->PostEditChangeProperty(Event);
    }

    FString Export(UObject* Object, FProperty* Property)
    {
        FString Value;
        Property->ExportText_InContainer(0, Value, Object, Object, Object, PPF_None);
        return Value;
    }

    bool WriteIcon(const FString& Filename, FColor Color)
    {
        TArray<FColor> Pixels;
        Pixels.Init(Color, 16 * 16);
        TArray64<uint8> Bytes;
        FImageUtils::PNGCompressImageArray(16, 16, Pixels, Bytes);
        return FFileHelper::SaveArrayToFile(Bytes, *Filename);
    }

    bool ContainsText(const TSharedRef<SWidget>& Widget, const FString& Name)
    {
        if (Widget->GetType() == TEXT("STextBlock") && StaticCastSharedRef<STextBlock>(Widget)->GetText().ToString() == Name) return true;
        for (int32 Index = 0; Index < Widget->GetChildren()->Num(); ++Index)
            if (ContainsText(Widget->GetChildren()->GetChildAt(Index), Name)) return true;
        return false;
    }

    TSharedPtr<SCrimeFactoryModEntry> FindCard(const TSharedRef<SWidget>& Widget, const FString& Name)
    {
        if (Widget->GetType() == TEXT("SCrimeFactoryModEntry") && ContainsText(Widget, Name)) return StaticCastSharedRef<SCrimeFactoryModEntry>(Widget);
        for (int32 Index = 0; Index < Widget->GetChildren()->Num(); ++Index)
            if (const auto Found = FindCard(Widget->GetChildren()->GetChildAt(Index), Name)) return Found;
        return nullptr;
    }
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryMetadataTest, "CrimeFactory.Metadata.SynchronizationAndRefresh",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryMetadataTest::RunTest(const FString& Parameters)
{
    const FString Name = TEXT("CrimeFactorySyncTest_") + FGuid::NewGuid().ToString(EGuidFormats::Digits);
    const FString Root = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Mods") / Name);
    const FString DescriptorFile = Root / (Name + TEXT(".uplugin"));
    auto List = SNew(SCrimeFactoryModEntryList);
    TestFalse(TEXT("Fixture does not exist when the window opens"), List->ContainsMod(Name));
    IFileManager::Get().MakeDirectory(*(Root / TEXT("Content")), true);
    IFileManager::Get().MakeDirectory(*(Root / TEXT("Resources")), true);
    FPluginDescriptor Descriptor;
    Descriptor.FriendlyName = TEXT("Descriptor name");
    Descriptor.Description = TEXT("Descriptor description");
    Descriptor.VersionName = TEXT("2.4.0");
    Descriptor.CreatedBy = TEXT("Author One, Author Two");
    Descriptor.bCanContainContent = true;
    FText Reason;
    if (!TestTrue(TEXT("External plugin descriptor written after window construction"), Descriptor.Save(DescriptorFile, Reason))) return false;
    ON_SCOPE_EXIT
    {
        FText Failure;
        // Only this disposable fixture changes flags for teardown: Unreal's unload
        // API refuses ordinary mounted plugins. The production refresh preserves flags.
        if (const auto FixturePlugin = IPluginManager::Get().FindPlugin(Name))
        {
            auto CleanupDescriptor = FixturePlugin->GetDescriptor();
            CleanupDescriptor.bExplicitlyLoaded = true;
            FixturePlugin->UpdateDescriptor(CleanupDescriptor, Failure);
        }
        FPluginUtils::UnloadPlugin(Name, &Failure);
        IPluginManager::Get().RemoveFromPluginsList(DescriptorFile, &Failure);
        const FString ModsRoot = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Mods"));
        if (FPaths::IsUnderDirectory(Root, ModsRoot) && FPaths::GetCleanFilename(Root) == Name && Name.StartsWith(TEXT("CrimeFactorySyncTest_")))
            IFileManager::Get().DeleteDirectory(*Root, false, true);
    };
    List->RefreshMods();
    TestTrue(TEXT("Refresh finds externally added plugin without restarting the window"), List->ContainsMod(Name));
    auto Plugin = FPluginUtils::FindLoadedPlugin(DescriptorFile);
    if (!TestTrue(TEXT("New content-only mod is loaded and mounted"), Plugin.IsValid())) return false;
    List->Filter(TEXT("nothing-matches"));
    List->RefreshMods();
    TestEqual(TEXT("Refresh preserves the current search"), List->GetLastFilter(), FString(TEXT("nothing-matches")));
    List->Filter(TEXT(""));

    auto* Blueprint = LoadObject<UBlueprint>(nullptr, TEXT("/PDML/Blueprints/PDA_ModMeta.PDA_ModMeta"));
    if (!TestNotNull(TEXT("Actual modkit PDA_ModMeta Blueprint loads"), Blueprint) || !TestNotNull(TEXT("Metadata class"), Blueprint->GeneratedClass.Get())) return false;
    auto* Package = CreatePackage(*(Plugin->GetMountedAssetPath() / (TEXT("DA_") + Name)));
    auto* Asset = NewObject<UObject>(Package, Blueprint->GeneratedClass, FName(*(TEXT("DA_") + Name)), RF_Public | RF_Standalone | RF_Transactional);
    FAssetRegistryModule::AssetCreated(Asset);
    TStrongObjectPtr<UObject> KeepAsset(Asset);
    ON_SCOPE_EXIT { Asset->ClearFlags(RF_Standalone); Package->SetDirtyFlag(false); };
    for (TFieldIterator<FProperty> It(Asset->GetClass()); It; ++It)
        AddInfo(FString::Printf(TEXT("Metadata field: %s (%s)"), *It->GetName(), *It->GetCPPType()));
    SetText(Asset, TEXT("ModPageURL"), TEXT("https://example.invalid/mod"));
    auto* Authors = CastField<FArrayProperty>(Field(Asset, TEXT("ModAuthors")));
    if (!TestNotNull(TEXT("Authors array"), Authors)) return false;
    FScriptArrayHelper AuthorValues(Authors, Authors->ContainerPtrToValuePtr<void>(Asset));
    AuthorValues.EmptyAndAddValues(2);
    if (auto* Text = CastField<FStrProperty>(Authors->Inner))
    {
        Text->SetPropertyValue(AuthorValues.GetRawPtr(0), TEXT("Author One"));
        Text->SetPropertyValue(AuthorValues.GetRawPtr(1), TEXT("Author Two"));
    }
    if (auto* Text = CastField<FTextProperty>(Authors->Inner))
    {
        Text->SetPropertyValue(AuthorValues.GetRawPtr(0), FText::FromString(TEXT("Author One")));
        Text->SetPropertyValue(AuthorValues.GetRawPtr(1), FText::FromString(TEXT("Author Two")));
    }
    if (auto* Text = CastField<FNameProperty>(Authors->Inner))
    {
        Text->SetPropertyValue(AuthorValues.GetRawPtr(0), FName(TEXT("Author One")));
        Text->SetPropertyValue(AuthorValues.GetRawPtr(1), FName(TEXT("Author Two")));
    }
    auto* Actors = CastField<FArrayProperty>(Field(Asset, TEXT("ModActors")));
    if (!TestNotNull(TEXT("Mod actors array"), Actors)) return false;
    FScriptArrayHelper ActorValues(Actors, Actors->ContainerPtrToValuePtr<void>(Asset));
    ActorValues.AddValue();
    TMap<FProperty*, FString> Gameplay;
    for (const TCHAR* Key : {TEXT("ModActors"), TEXT("Heists"), TEXT("PersistentObjects"), TEXT("Settings")})
        if (auto* Property = Field(Asset, Key)) Gameplay.Add(Property, Export(Asset, Property));
    FString Error;
    if (!TestTrue(TEXT("Descriptor-to-DA synchronization"), CrimeFactoryMetadataSync::SynchronizeAsset(*Plugin, *Asset, false, Error))) { AddError(Error); return false; }
    TestEqual(TEXT("Display name synchronized"), GetText(Asset, TEXT("ModName")), Descriptor.FriendlyName);
    TestEqual(TEXT("Version synchronized"), GetText(Asset, TEXT("ModVersion")), Descriptor.VersionName);
    TestEqual(TEXT("Legacy DA-only URL retained"), GetText(Asset, TEXT("ModPageURL")), FString(TEXT("https://example.invalid/mod")));
    TestEqual(TEXT("Author array retains its entries"), AuthorValues.Num(), 2);
    UModMetadataObject* Properties = NewObject<UModMetadataObject>();
    Properties->PopulateFromDescriptor(Plugin->GetDescriptor());
    CrimeFactoryMetadataSync::PopulateProperties(*Plugin, *Properties);
    TestEqual(TEXT("Properties dialog receives existing DA URL"), Properties->ModPageURL, FString(TEXT("https://example.invalid/mod")));
    TestEqual(TEXT("Properties dialog receives multiple authors"), Properties->ModAuthors.Num(), 2);
    TestFalse(TEXT("Properties dialog receives an enum value instead of clearing it"), Properties->ModEnvironment.IsEmpty());

    SetText(Asset, TEXT("ModName"), TEXT("Edited in metadata DA"));
    Notify(Asset, TEXT("ModName"));
    TestEqual(TEXT("DA edit immediately updates plugin descriptor"), Plugin->GetDescriptor().FriendlyName, FString(TEXT("Edited in metadata DA")));
    SetText(Asset, TEXT("ModVersion"), TEXT("3.5.1"));
    Notify(Asset, TEXT("ModVersion"));
    TestEqual(TEXT("DA version updates descriptor VersionName"), Plugin->GetDescriptor().VersionName, FString(TEXT("3.5.1")));
    FString SemVersion;
    auto Json = MakeShared<FJsonObject>();
    Plugin->GetDescriptor().UpdateJson(*Json);
    Json->TryGetStringField(TEXT("SemVersion"), SemVersion);
    TestEqual(TEXT("DA version also updates SemVersion"), SemVersion, FString(TEXT("3.5.1")));
    SetText(Asset, TEXT("ModID"), TEXT("NotThePluginMount"));
    Notify(Asset, TEXT("ModID"));
    TestEqual(TEXT("Plugin identity is retained"), GetText(Asset, TEXT("ModID")), Name);

    {
        FScopedTransaction Transaction(FText::FromString(TEXT("CrimeFactory metadata fixture edit")));
        Asset->Modify();
        SetText(Asset, TEXT("ModName"), TEXT("Undoable name"));
        Notify(Asset, TEXT("ModName"));
    }
    GEditor->UndoTransaction();
    CrimeFactoryMetadataSync::FlushPending();
    TestEqual(TEXT("Undo syncs the descriptor back to the DA"), Plugin->GetDescriptor().FriendlyName, GetText(Asset, TEXT("ModName")));
    GEditor->RedoTransaction();
    CrimeFactoryMetadataSync::FlushPending();
    TestEqual(TEXT("Redo syncs the descriptor"), Plugin->GetDescriptor().FriendlyName, FString(TEXT("Undoable name")));

    auto NewDescriptor = Plugin->GetDescriptor();
    NewDescriptor.Description = TEXT("Changed in config");
    TestTrue(TEXT("Config save succeeds"), Plugin->UpdateDescriptor(NewDescriptor, Reason));
    TestEqual(TEXT("Config edit updates the open DA immediately"), GetText(Asset, TEXT("ModDescription")), NewDescriptor.Description);
    NewDescriptor = Plugin->GetDescriptor();
    NewDescriptor.FriendlyName = TEXT("Changed externally");
    TestTrue(TEXT("External descriptor edit"), NewDescriptor.Save(DescriptorFile, Reason));
    List->RefreshMods();
    TestEqual(TEXT("Refresh reloads externally edited descriptor"), Plugin->GetDescriptor().FriendlyName, NewDescriptor.FriendlyName);
    TestEqual(TEXT("Refresh synchronizes the corresponding DA"), GetText(Asset, TEXT("ModName")), NewDescriptor.FriendlyName);
    for (const auto& Pair : Gameplay) TestEqual(TEXT("Gameplay data unchanged by all metadata edits"), Export(Asset, Pair.Key), Pair.Value);
    if (!TestTrue(TEXT("Synchronized metadata saved before cook"), CrimeFactoryMetadataSync::Synchronize(*Plugin, true, Error))) AddError(Error);
    TestTrue(TEXT("Synchronized DA package exists on disk"), FPackageName::DoesPackageExist(Package->GetName()));

    const FString IconPath = Root / TEXT("Resources/Icon128.png");
    TestTrue(TEXT("First icon written"), WriteIcon(IconPath, FColor::Red));
    List->RefreshMods();
    List->Filter(Name);
    auto Card = FindCard(List, NewDescriptor.FriendlyName);
    if (!TestTrue(TEXT("Fixture mod card is present"), Card.IsValid())) return false;
    const auto Window = SNew(SWindow).Title(FText::FromString(TEXT("CrimeFactory live icon preview"))).ClientSize(FVector2D(320, 560))[List];
    FSlateApplication::Get().AddWindow(Window);
    ON_SCOPE_EXIT { Window->RequestDestroyWindow(); };
    auto Capture = [this, Window](const TCHAR* Filename)
    {
        FSlateApplication::Get().Tick();
        TArray<FColor> Pixels;
        FIntVector Size;
        TestTrue(TEXT("Mod card rendered"), FSlateApplication::Get().TakeScreenshot(Window, Pixels, Size));
        FString Directory;
        if (FParse::Value(FCommandLine::Get(), TEXT("CrimeFactoryPackagingUIPreview="), Directory))
        {
            TArray64<uint8> Png;
            FImageUtils::PNGCompressImageArray(Size.X, Size.Y, Pixels, Png);
            TestTrue(TEXT("Mod icon preview saved"), FFileHelper::SaveArrayToFile(Png, *(Directory / Filename)));
        }
        return Pixels.FilterByPredicate([](FColor Color) { return Color.B > 200 && Color.R < 30 && Color.G < 30; }).Num();
    };
    const int32 BlueBefore = Capture(TEXT("ModIconBefore.png"));
    auto First = CrimeFactoryModIcon::Load(IconPath);
    if (!TestTrue(TEXT("First icon decodes"), First.IsValid())) return false;
    TestTrue(TEXT("Same-path replacement icon written"), WriteIcon(IconPath, FColor::Blue));
    Card->RefreshModIcon(); // Exact callback bound to the Mod Properties image picker.
    TestTrue(TEXT("The same open card displays the replacement icon pixels"), Capture(TEXT("ModIconAfter.png")) > BlueBefore + 1000);
    auto Second = CrimeFactoryModIcon::Load(IconPath);
    if (!TestTrue(TEXT("Replacement icon decodes"), Second.IsValid())) return false;
    TestNotEqual(TEXT("Replacement uses a fresh renderer resource rather than cached filename"), First->GetResourceName(), Second->GetResourceName());
    List->RefreshMods();
    TestEqual(TEXT("Repeated refresh does not duplicate mods"), List->GetModCount(), IPluginManager::Get().GetDiscoveredPlugins().FilterByPredicate([](const auto& Candidate)
    { return IFileManager::Get().FileExists(*Candidate->GetDescriptorFileName()) && FPaths::IsUnderDirectory(FPaths::ConvertRelativePathToFull(Candidate->GetBaseDir()), FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Mods"))); }).Num());
    TestTrue(TEXT("Delete fixture descriptor"), IFileManager::Get().Delete(*DescriptorFile));
    List->RefreshMods();
    TestFalse(TEXT("Deleted descriptors disappear even when the plugin was mounted"), List->ContainsMod(Name));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryDependencyTest, "CrimeFactory.Metadata.DependencyReferences",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryDependencyTest::RunTest(const FString& Parameters)
{
    auto* Blueprint = LoadObject<UBlueprint>(nullptr, TEXT("/PDML/Blueprints/PDA_ModMeta.PDA_ModMeta"));
    if (!TestNotNull(TEXT("Real metadata Blueprint"), Blueprint)) return false;
    const FString Prefix = TEXT("CrimeFactoryDepsTest_") + FGuid::NewGuid().ToString(EGuidFormats::Digits);
    const TArray<FString> Names = {Prefix + TEXT("Owner"), Prefix + TEXT("First"), Prefix + TEXT("Second")};
    const FString ModsRoot = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("Mods"));
    TArray<TStrongObjectPtr<UObject>> Assets;
    ON_SCOPE_EXIT
    {
        for (auto& Object : Assets)
        {
            Object->ClearFlags(RF_Standalone);
            Object->GetPackage()->SetDirtyFlag(false);
        }
        Assets.Reset();
        FString CleanupDirectories;
        for (const auto& Name : Names)
        {
            const FString Root = ModsRoot / Name;
            // Background AssetSearch hashes saved DAs after the test returns. Keep
            // their files and mounts alive until editor exit; hide them from the mod list.
            IFileManager::Get().Delete(*(Root / (Name + TEXT(".uplugin"))));
            CleanupDirectories += Root + TEXT("\n");
        }
        FString Directory;
        if (FParse::Value(FCommandLine::Get(), TEXT("CrimeFactoryPackagingUIPreview="), Directory))
            FFileHelper::SaveStringToFile(CleanupDirectories, *(Directory / TEXT("DependencyFixtureDirectories.txt")));
    };
    for (int32 Index = 0; Index < Names.Num(); ++Index)
    {
        const FString Root = ModsRoot / Names[Index];
        IFileManager::Get().MakeDirectory(*(Root / TEXT("Content")), true);
        FPluginDescriptor Descriptor;
        Descriptor.bExplicitlyLoaded = true;
        Descriptor.bCanContainContent = true;
        Descriptor.FriendlyName = Names[Index];
        Descriptor.VersionName = TEXT("1.0.0");
        Descriptor.Plugins.Emplace(TEXT("PDML"), true);
        if (Index == 0)
        {
            Descriptor.Plugins.Emplace(Names[1], true);
            Descriptor.Plugins.Last().bOptional = true;
            Descriptor.Plugins.Emplace(Names[2], false);
            Descriptor.Plugins.Last().bOptional = true;
            Descriptor.Plugins.Last().AdditionalFieldsToWrite.Add(TEXT("SemVersion"), MakeShared<FJsonValueString>(TEXT("2.x")));
            Descriptor.Plugins.Emplace(TEXT("Niagara"), true);
            Descriptor.Plugins.Last().AdditionalFieldsToWrite.Add(TEXT("BasePlugin"), MakeShared<FJsonValueBoolean>(true));
            // Reproduce the obsolete field written by the earlier implementation.
            Descriptor.AdditionalFieldsToWrite.Add(TEXT("ModDependencies"), MakeShared<FJsonValueArray>(TArray<TSharedPtr<FJsonValue>>{MakeShared<FJsonValueString>(TEXT("PDML"))}));
        }
        const FString Filename = Root / (Names[Index] + TEXT(".uplugin"));
        FText Reason;
        if (!TestTrue(TEXT("Fixture descriptor saved"), Descriptor.Save(Filename, Reason))) return false;
        if (!TestTrue(TEXT("Fixture plugin registered"), IPluginManager::Get().AddToPluginsList(Filename, &Reason))) return false;
    }
    for (const auto& Name : Names) IPluginManager::Get().MountExplicitlyLoadedPlugin(Name);
    auto Owner = IPluginManager::Get().FindPlugin(Names[0]);
    const auto CreateMetadata = [this, &Assets, Blueprint](const FString& Name)
    {
        auto* Package = CreatePackage(*(TEXT("/") + Name + TEXT("/DA_") + Name));
        auto* Object = NewObject<UObject>(Package, Blueprint->GeneratedClass, FName(*(TEXT("DA_") + Name)), RF_Public | RF_Standalone | RF_Transactional);
        FAssetRegistryModule::AssetCreated(Object);
        Assets.Emplace(Object);
        Object->MarkPackageDirty();
        TestTrue(TEXT("Dependency fixture metadata saved on disk"), GEditor->GetEditorSubsystem<UEditorAssetSubsystem>()->SaveLoadedAsset(Object));
        return Object;
    };
    UObject* First = CreateMetadata(Names[1]);
    UObject* Asset = CreateMetadata(Names[0]);
    auto* Array = CastField<FArrayProperty>(Field(Asset, TEXT("Dependencies")));
    if (!TestNotNull(TEXT("Metadata dependency array"), Array)) return false;
    auto* Inner = CastField<FObjectPropertyBase>(Array->Inner);
    if (!TestNotNull(TEXT("Real Dependencies inner property is an object reference"), Inner)) return false;
    AddInfo(TEXT("Dependencies inner type: ") + Inner->GetCPPType());
    const auto GetObjects = [Array, Inner](UObject* Object)
    {
        FScriptArrayHelper Helper(Array, Array->ContainerPtrToValuePtr<void>(Object));
        TArray<UObject*> Values;
        for (int32 Index = 0; Index < Helper.Num(); ++Index) Values.Add(Inner->GetObjectPropertyValue(Helper.GetRawPtr(Index)));
        return Values;
    };
    const auto SetObjects = [Array, Inner, Asset](TArray<UObject*> Values)
    {
        FScriptArrayHelper Helper(Array, Array->ContainerPtrToValuePtr<void>(Asset));
        Helper.EmptyAndAddValues(Values.Num());
        for (int32 Index = 0; Index < Values.Num(); ++Index) Inner->SetObjectPropertyValue(Helper.GetRawPtr(Index), Values[Index]);
    };
    FString Error;
    if (!TestTrue(TEXT("Plugin dependencies resolve to real metadata DAs"), CrimeFactoryMetadataSync::SynchronizeAsset(*Owner, *Asset, false, Error)))
    { AddError(Error); return false; }
    auto Objects = GetObjects(Asset);
    TestEqual(TEXT("PDML/base/disabled dependencies are excluded"), Objects.Num(), 1);
    if (Objects.Num() == 1) TestTrue(TEXT("Dependency is the other mod's actual DA"), Objects[0] == First);

    FText Reason;
    auto Descriptor = Owner->GetDescriptor();
    auto* EnabledDependency = Descriptor.Plugins.FindByPredicate([&Names](const auto& Reference) { return Reference.Name == Names[2]; });
    EnabledDependency->bEnabled = true;
    EnabledDependency->bOptional = true; // Unreal does not persist Optional for a disabled reference.
    TestTrue(TEXT("External config enables an unavailable metadata dependency"), Descriptor.Save(Owner->GetDescriptorFileName(), Reason));
    TestFalse(TEXT("Missing dependency metadata fails synchronization"), CrimeFactoryMetadataSync::SynchronizeAsset(*Owner, *Asset, false, Error));
    TestTrue(TEXT("Failure identifies the missing dependency and expected DA"), Error.Contains(Names[2]) && Error.Contains(TEXT("DA_")));
    TestTrue(TEXT("Failure retains original valid reference array"), GetObjects(Asset) == Objects);
    UObject* Second = CreateMetadata(Names[2]);
    if (!TestTrue(TEXT("Synchronization recovers after metadata becomes available"), CrimeFactoryMetadataSync::SynchronizeAsset(*Owner, *Asset, false, Error)))
    { AddError(Error); return false; }
    TestEqual(TEXT("Both enabled mods become DA dependencies"), GetObjects(Asset).Num(), 2);

    SetObjects({Second, Second});
    Notify(Asset, TEXT("Dependencies"));
    Objects = GetObjects(Asset);
    TestEqual(TEXT("Duplicate references normalize to one DA"), Objects.Num(), 1);
    if (Objects.Num() == 1) TestTrue(TEXT("Correct dependency DA survives"), Objects[0] == Second);
    const auto& References = Owner->GetDescriptor().Plugins;
    TestTrue(TEXT("PDML remains enabled in plugin configuration"), References.ContainsByPredicate([](const auto& Reference) { return Reference.Name == TEXT("PDML") && Reference.bEnabled; }));
    TestFalse(TEXT("Removed metadata dependency is removed from plugin config"), References.ContainsByPredicate([&Names](const auto& Reference) { return Reference.Name == Names[1]; }));
    const auto* Retained = References.FindByPredicate([&Names](const auto& Reference) { return Reference.Name == Names[2]; });
    TestTrue(TEXT("Retained dependency keeps optional flag"), Retained && Retained->bOptional);
    auto Json = MakeShared<FJsonObject>();
    if (Retained && Retained->CachedJson) FJsonObject::Duplicate(Retained->CachedJson, Json);
    if (Retained) Retained->UpdateJson(*Json);
    FString SemVersion;
    Json->TryGetStringField(TEXT("SemVersion"), SemVersion);
    TestEqual(TEXT("Retained dependency keeps version requirements"), SemVersion, FString(TEXT("2.x")));
    TestTrue(TEXT("Base engine plugin remains in configuration"), References.ContainsByPredicate([](const auto& Reference) { return Reference.Name == TEXT("Niagara"); }));
    UModMetadataObject* Properties = NewObject<UModMetadataObject>();
    Properties->PopulateFromDescriptor(Owner->GetDescriptor());
    CrimeFactoryMetadataSync::PopulateProperties(*Owner, *Properties);
    TestTrue(TEXT("Read-only summary derives from plugin dependencies"), Properties->ModDependencies == TArray<FString>{Names[2]});

    TArray<uint8> Bytes;
    FMemoryWriter Writer(Bytes);
    FObjectAndNameAsStringProxyArchive SaveArchive(Writer, false);
    Asset->Serialize(SaveArchive);
    auto* Reloaded = NewObject<UObject>(GetTransientPackage(), Blueprint->GeneratedClass);
    FMemoryReader Reader(Bytes);
    FObjectAndNameAsStringProxyArchive LoadArchive(Reader, false);
    Reloaded->Serialize(LoadArchive);
    TestTrue(TEXT("Actual UObject serialization retains the dependency DA reference"), GetObjects(Reloaded) == GetObjects(Asset));
    if (!TestTrue(TEXT("Metadata including dependency refs saves before forging"), CrimeFactoryMetadataSync::SynchronizeAsset(*Owner, *Asset, true, Error))) AddError(Error);
    TestTrue(TEXT("Saved owner metadata package exists"), FPackageName::DoesPackageExist(Asset->GetPackage()->GetName()));

    SetObjects({Asset});
    TestFalse(TEXT("Self dependency fails with an actionable error"), CrimeFactoryMetadataSync::SynchronizeAsset(*Owner, *Asset, false, Error));
    TestTrue(TEXT("Self dependency error is explicit"), Error.Contains(TEXT("own metadata")));
    SetObjects({});
    Notify(Asset, TEXT("Dependencies"));
    TestTrue(TEXT("All DA dependencies can be removed"), GetObjects(Asset).IsEmpty());
    TestEqual(TEXT("Only PDML and engine/base dependencies remain"), Owner->GetDescriptor().Plugins.Num(), 2);
    return true;
}

#endif
