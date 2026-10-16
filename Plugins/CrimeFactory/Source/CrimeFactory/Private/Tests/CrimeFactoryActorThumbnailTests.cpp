#if WITH_DEV_AUTOMATION_TESTS

#include "AssetPalette/CrimeFactoryActorThumbnail.h"
#include "AssetPalette/CrimeFactoryPaletteModel.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "AssetThumbnail.h"
#include "AssetCompilingManager.h"
#include "Application/ThrottleManager.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Editor.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/StaticMesh.h"
#include "ImageUtils.h"
#include "EngineUtils.h"
#include "LevelEditor.h"
#include "LevelEditorViewport.h"
#include "SLevelViewport.h"
#include "ShaderCompiler.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/AutomationTest.h"
#include "Misc/CommandLine.h"
#include "Misc/ObjectThumbnail.h"
#include "Misc/Paths.h"
#include "Misc/ScopeExit.h"
#include "ObjectTools.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "UObject/StrongObjectPtr.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryActorThumbnailTest,
    "CrimeFactory.AssetPalette.ActorThumbnails", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryActorThumbnailTest::RunTest(const FString& Parameters)
{
    UPackage* Package = CreatePackage(*(TEXT("/Temp/CrimeFactoryThumbnail_") + FGuid::NewGuid().ToString(EGuidFormats::Digits)));
    UBlueprint* Blueprint = FKismetEditorUtilities::CreateBlueprint(AActor::StaticClass(), Package, TEXT("VisualActor"),
        BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
    if (!TestNotNull(TEXT("Actor fixture"), Blueprint)) return false;
    ON_SCOPE_EXIT { Blueprint->ClearFlags(RF_Standalone); Package->SetFlags(RF_Transient); };
    auto* Root = Blueprint->SimpleConstructionScript->CreateNode(USceneComponent::StaticClass(), TEXT("OffsetRoot"));
    auto* Child = Blueprint->SimpleConstructionScript->CreateNode(UStaticMeshComponent::StaticClass(), TEXT("VisualMesh"));
    Blueprint->SimpleConstructionScript->AddNode(Root);
    Root->AddChildNode(Child);
    auto* RootTemplate = CastChecked<USceneComponent>(Root->ComponentTemplate);
    auto* MeshTemplate = CastChecked<UStaticMeshComponent>(Child->ComponentTemplate);
    auto* Cube = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
    MeshTemplate->SetStaticMesh(Cube);
    MeshTemplate->SetRelativeLocation(FVector(15, 0, 0));
    RootTemplate->SetRelativeLocation(FVector(1000, 20, 0));
    FKismetEditorUtilities::CompileBlueprint(Blueprint);
    // Cooked shells need not satisfy the normal Blueprint renderer's editor regeneration flag.
    Blueprint->bHasBeenRegenerated = false;
    const bool bDirty = Package->IsDirty();
    const auto CountLiveLevelActors = []
    {
        int32 Count = 0;
        // Editor actor deletion leaves null slots in ULevel::Actors until compaction.
        for (const auto& Actor : GEditor->GetEditorWorldContext().World()->GetCurrentLevel()->Actors)
            if (IsValid(Actor.Get()) && !Actor->IsActorBeingDestroyed()) ++Count;
        return Count;
    };
    const int32 ActorsBefore = CountLiveLevelActors();
    TStrongObjectPtr<UCrimeFactoryActorThumbnail> Proxy(NewObject<UCrimeFactoryActorThumbnail>());
    Proxy->SourcePath = FSoftObjectPath(Blueprint);
    if (!TestTrue(TEXT("Actor meshes are found without spawning the class"), Proxy->Prepare())) return false;
    TestEqual(TEXT("SCS mesh snapshot count"), Proxy->Meshes.Num(), 1);
    if (!Proxy->Meshes.IsEmpty())
    {
        TestTrue(TEXT("SCS parent transform is included"), Proxy->Meshes[0].Transform.GetLocation().Equals(FVector(1015, 20, 0)));
        TestEqual(TEXT("Mesh identity is preserved"), Proxy->Meshes[0].StaticMesh.Get(), Cube);
        TestEqual(TEXT("Material slots are preserved"), Proxy->Meshes[0].Materials.Num(), MeshTemplate->GetNumMaterials());
    }
    TestFalse(TEXT("The original component is never registered"), MeshTemplate->IsRegistered());
    TestEqual(TEXT("Source package dirty state is unchanged"), Package->IsDirty(), bDirty);
    TestEqual(TEXT("No actor is added to the user's level"), CountLiveLevelActors(), ActorsBefore);
    TestTrue(TEXT("Generated classes use actor previews"), CrimeFactoryActorThumbnails::ShouldUsePreview(
        FAssetData(Blueprint->GeneratedClass, FAssetData::ECreationFlags::AllowBlueprintClass), false));
    TestFalse(TEXT("Ordinary meshes retain native thumbnails"), CrimeFactoryActorThumbnails::ShouldUsePreview(FAssetData(Cube), false));
    TStrongObjectPtr<UCrimeFactoryActorThumbnail> Empty(NewObject<UCrimeFactoryActorThumbnail>());
    Empty->SourcePath = FSoftObjectPath(AActor::StaticClass());
    TestFalse(TEXT("Nonvisual actors fall back to an icon"), Empty->Prepare());

    FString RetailPath;
    if (FParse::Value(FCommandLine::Get(), TEXT("CrimeFactoryThumbnailAsset="), RetailPath))
    {
        auto& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
        FCrimeFactoryPaletteAssetEntry Entry;
        Entry.Asset = TSoftObjectPtr<UObject>(FSoftObjectPath(RetailPath));
        const auto RetailItem = CrimeFactoryPalette::Resolve(Entry, Registry);
        TestTrue(TEXT("The palette selects an actor preview for retail registry metadata"),
            CrimeFactoryActorThumbnails::ShouldUsePreview(RetailItem.AssetData, RetailItem.bClassEntry));
        Proxy.Reset(NewObject<UCrimeFactoryActorThumbnail>());
        Proxy->SourcePath = FSoftObjectPath(RetailPath);
        if (!TestTrue(TEXT("Configured retail actor has visual mesh templates"), Proxy->Prepare())) return false;
        UObject* Source = Proxy->SourcePath.ResolveObject();
        if (!TestNotNull(TEXT("Retail source loaded"), Source)) return false;
        const bool bRetailDirty = Source->GetPackage()->IsDirty();
        if (FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryThumbnailRenderTest")))
        {
            FObjectThumbnail Pixels;
            ThumbnailTools::RenderThumbnail(Proxy.Get(), 256, 256, ThumbnailTools::EThumbnailTextureFlushMode::AlwaysFlush, nullptr, &Pixels);
            const auto& Bytes = Pixels.GetUncompressedImageData();
            TestEqual(TEXT("Retail actor thumbnail has pixels"), Bytes.Num(), 256 * 256 * 4);
            FString Output;
            if (FParse::Value(FCommandLine::Get(), TEXT("CrimeFactoryThumbnailOutput="), Output) && !Bytes.IsEmpty())
                TestTrue(TEXT("Preview image exported"), FImageUtils::SaveImageByExtension(*Output,
                    FImageView(reinterpret_cast<const FColor*>(Bytes.GetData()), 256, 256)));
        }
        TestEqual(TEXT("Retail source package was not modified"), Source->GetPackage()->IsDirty(), bRetailDirty);
    }
    if (FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryThumbnailRenderTest")))
    {
        bool bRendered = false;
        bool bRenderFailed = false;
        auto Pool = MakeShared<FAssetThumbnailPool>(8, 1.0, 0);
        Pool->OnThumbnailRendered().AddLambda([&bRendered](const FAssetData&) { bRendered = true; });
        Pool->OnThumbnailRenderFailed().AddLambda([&bRenderFailed](const FAssetData&) { bRenderFailed = true; });
        auto Thumbnail = MakeShared<FAssetThumbnail>(Proxy.Get(), 96, 96, Pool);
        auto Widget = Thumbnail->MakeThumbnailWidget();
        const auto RenderQueuedThumbnail = [&]
        {
            const bool bShadersBusy = GShaderCompilingManager && GShaderCompilingManager->IsCompiling();
            const bool bThrottled = !FSlateThrottleManager::Get().IsAllowingExpensiveTasks();
            if (bShadersBusy || bThrottled)
                AddInfo(FString::Printf(TEXT("Thumbnail test awaiting editor render readiness: shaders=%d, Slate throttle=%d"), bShadersBusy, bThrottled));
            FAssetCompilingManager::Get().FinishAllCompilation();
            if (GShaderCompilingManager && GShaderCompilingManager->IsCompiling()) GShaderCompilingManager->FinishAllCompilation();
            // The test invokes viewport handlers synchronously, without the real
            // mouse-up/frame that releases Slate's responsive-mode request.
            // Scope this test-only exemption; production pools retain normal throttling.
            FSlateThrottleManager::Get().DisableThrottle(true);
            ON_SCOPE_EXIT { FSlateThrottleManager::Get().DisableThrottle(false); };
            Pool->Tick(0.016f);
        };
        Thumbnail->GetViewportRenderTargetTexture();
        RenderQueuedThumbnail();
        TestTrue(TEXT("The native thumbnail pool renders the transient actor proxy"), bRendered);
        if (!RetailPath.IsEmpty() && FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPaletteViewportTest")))
        {
            auto Viewport = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor").GetFirstActiveLevelViewport();
            if (!TestTrue(TEXT("Viewport is available for thumbnail/drop regression"), Viewport.IsValid())) return false;
            auto& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
            FCrimeFactoryPaletteAssetEntry Entry;
            Entry.Asset = TSoftObjectPtr<UObject>(FSoftObjectPath(RetailPath));
            FText Error;
            auto Drag = CrimeFactoryPalette::CreateDrag(CrimeFactoryPalette::Resolve(Entry, Registry), Registry, Error);
            if (!TestTrue(TEXT("Retail actor has a native placement operation"), Drag.IsValid())) return false;
            TSharedRef<SWidget> Target = Viewport.ToSharedRef();
            const FGeometry Geometry = Target->GetTickSpaceGeometry();
            UWorld* World = Viewport->GetLevelViewportClient().GetWorld();
            const bool bWorldDirty = World->GetPackage()->IsDirty();
            ON_SCOPE_EXIT { World->GetPackage()->SetDirtyFlag(bWorldDirty); };
            const FVector2D Position = Geometry.LocalToAbsolute(Geometry.GetLocalSize() * 0.5f);
            const FPointerEvent Pointer(0, Position, Position, {EKeys::LeftMouseButton}, EKeys::LeftMouseButton, 0.0f, FModifierKeysState());
            const FDragDropEvent Event(Pointer, Drag.ToSharedRef());
            Target->OnDragEnter(Geometry, Event);
            TSet<AActor*> Previous;
            for (TActorIterator<AActor> Actor(World); Actor; ++Actor) Previous.Add(*Actor);
            TestTrue(TEXT("Retail actor drop is accepted"), Target->OnDrop(Geometry, Event).IsEventHandled());
            AActor* Placed = nullptr;
            for (TActorIterator<AActor> Actor(World); Actor; ++Actor)
                if (!Previous.Contains(*Actor) && IsValid(*Actor) && !Actor->IsActorBeingDestroyed()
                    && !Actor->HasAnyFlags(RF_Transient)) { Placed = *Actor; break; }
            if (!TestNotNull(TEXT("Retail actor was placed"), Placed)) return false;
            bRendered = false;
            Thumbnail->RefreshThumbnail();
            RenderQueuedThumbnail();
            TestTrue(TEXT("The thumbnail survives placing its retail actor"), bRendered);
            TestFalse(TEXT("Placement does not invalidate the thumbnail"), bRenderFailed);
            GEditor->SelectActor(Placed, false, true);
            World->EditorDestroyActor(Placed, true);
        }
        bRendered = false;
        Thumbnail->RefreshThumbnail();
        RenderQueuedThumbnail();
        TestTrue(TEXT("Refreshing an existing actor thumbnail renders it again"), bRendered);
        TestFalse(TEXT("Refresh does not replace the actor preview with an icon"), bRenderFailed);
        TestTrue(TEXT("The actor mesh snapshot remains valid after refresh"), Proxy->Prepare());
        for (int32 Refresh = 0; Refresh < 3; ++Refresh)
        {
            CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
            bRendered = false;
            Thumbnail->RefreshThumbnail();
            RenderQueuedThumbnail();
            TestTrue(TEXT("Repeated thumbnail refresh after GC succeeds"), bRendered);
            TestFalse(TEXT("GC/refresh does not switch to an icon"), bRenderFailed);
        }
        TStrongObjectPtr<UCrimeFactoryActorThumbnail> Rebuilt(NewObject<UCrimeFactoryActorThumbnail>());
        Rebuilt->SourcePath = Proxy->SourcePath;
        auto RebuiltThumbnail = MakeShared<FAssetThumbnail>(Rebuilt.Get(), 96, 96, Pool);
        auto RebuiltWidget = RebuiltThumbnail->MakeThumbnailWidget();
        bRendered = false;
        RebuiltThumbnail->GetViewportRenderTargetTexture();
        RenderQueuedThumbnail();
        TestTrue(TEXT("Recreating a palette tile still renders the actor"), bRendered);
        TestEqual(TEXT("Rendering adds no actor to the user's level"), CountLiveLevelActors(), ActorsBefore);
    }
    return true;
}

#endif
