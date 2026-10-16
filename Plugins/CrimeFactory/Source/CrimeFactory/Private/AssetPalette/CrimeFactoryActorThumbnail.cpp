#include "AssetPalette/CrimeFactoryActorThumbnail.h"

#include "AssetRegistry/AssetData.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkeletalMesh.h"
#include "Materials/MaterialInterface.h"
#include "SceneView.h"
#include "ThumbnailHelpers.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#if __has_include("Misc/PD3CookedEditor.h")
#include "Misc/PD3CookedEditor.h"
#endif

namespace
{
    TWeakObjectPtr<UCrimeFactoryActorThumbnailRenderer> ActiveRenderer;
    TWeakObjectPtr<UThumbnailManager> RegisteredManager;
}

bool CrimeFactoryActorThumbnails::ShouldUsePreview(const FAssetData& Asset, bool bClassEntry)
{
    if (bClassEntry) return true;
    UClass* AssetClass = FindObject<UClass>(Asset.AssetClassPath);
    if (AssetClass && AssetClass->IsChildOf(UClass::StaticClass())) return true;
#if __has_include("Misc/PD3CookedEditor.h")
    return UE::PD3CookedEditor::IsEnabled() && Asset.HasAnyPackageFlags(PKG_Cooked | PKG_FilterEditorOnly)
        && AssetClass && AssetClass->IsChildOf(UBlueprint::StaticClass());
#else
    return false;
#endif
}

bool UCrimeFactoryActorThumbnail::Prepare()
{
    if (bPrepared) return !Meshes.IsEmpty();
    bPrepared = true;
    UObject* Source = SourcePath.TryLoad(); // Only visible tiles request these transient proxies.
    UClass* ActorClass = Cast<UClass>(Source);
    if (const UBlueprint* Blueprint = Cast<UBlueprint>(Source)) ActorClass = Blueprint->GeneratedClass;
    if (!IsValid(ActorClass) || !ActorClass->IsChildOf(AActor::StaticClass())
        || ActorClass->HasAnyClassFlags(CLASS_Deprecated | CLASS_NewerVersionExists)) return false;

    TArray<const USceneComponent*> Templates;
    TMap<FName, const USceneComponent*> Named;
    auto AddTemplate = [&](const UActorComponent* Component)
    {
        if (const auto* SceneComponent = Cast<USceneComponent>(Component))
        {
            Templates.AddUnique(SceneComponent);
            Named.FindOrAdd(SceneComponent->GetFName(), SceneComponent);
        }
    };
    AActor::ForEachComponentOfActorClassDefault<UActorComponent>(ActorClass,
        [&](const UActorComponent* Component) { AddTemplate(Component); return true; });

    // SCS attachment relationships are stored on nodes, often absent on the template itself.
    TMap<const USceneComponent*, const USceneComponent*> Parents;
    TArray<const USCS_Node*> Nodes;
    auto* LeafClass = Cast<UBlueprintGeneratedClass>(ActorClass);
    for (UClass* Class = ActorClass; Class; Class = Class->GetSuperClass())
    {
        if (auto* Generated = Cast<UBlueprintGeneratedClass>(Class))
        {
            if (Generated->SimpleConstructionScript)
            {
                for (const USCS_Node* Node : Generated->SimpleConstructionScript->GetAllNodes())
                {
                    Nodes.Add(Node);
                    if (const auto* Component = Cast<USceneComponent>(Node->GetActualComponentTemplate(LeafClass)))
                    {
                        AddTemplate(Component);
                        Named.FindOrAdd(Node->GetVariableName(), Component);
                    }
                }
            }
            else
            {
                // Some cooked classes retain runtime templates but no editor SCS.
                for (const UActorComponent* Component : Generated->ComponentTemplates) AddTemplate(Component);
            }
        }
    }
    for (const USCS_Node* Node : Nodes)
    {
        const auto* Parent = Cast<USceneComponent>(Node->GetActualComponentTemplate(LeafClass));
        if (!Parent) continue;
        if (const auto* const* ExternalParent = Named.Find(Node->ParentComponentOrVariableName))
            Parents.FindOrAdd(Parent, *ExternalParent);
        for (const USCS_Node* Child : Node->GetChildNodes())
            if (const auto* Component = Cast<USceneComponent>(Child->GetActualComponentTemplate(LeafClass)))
                Parents.Add(Component, Parent);
    }
    auto GetTransform = [&](const USceneComponent* Component)
    {
        FTransform Transform = Component->GetRelativeTransform();
        TSet<const USceneComponent*> Visited{Component};
        while (const USceneComponent* Parent = Parents.Contains(Component) ? Parents[Component] : Component->GetAttachParent())
        {
            if (Visited.Contains(Parent)) break;
            Visited.Add(Parent);
            Transform *= Parent->GetRelativeTransform();
            Component = Parent;
        }
        return Transform;
    };
    for (const USceneComponent* Component : Templates)
    {
        if (!FClassActorThumbnailScene::IsValidComponentForVisualization(Component)) continue;
        FCrimeFactoryThumbnailMesh Mesh;
        const UMeshComponent* MeshComponent = nullptr;
        if (const auto* Static = Cast<UStaticMeshComponent>(Component))
        {
            Mesh.StaticMesh = Static->GetStaticMesh();
            MeshComponent = Static;
        }
        else if (const auto* Skeletal = Cast<USkeletalMeshComponent>(Component))
        {
            Mesh.SkeletalMesh = Skeletal->GetSkeletalMeshAsset();
            MeshComponent = Skeletal;
        }
        if (!MeshComponent) continue;
        for (UMaterialInterface* Material : MeshComponent->GetMaterials()) Mesh.Materials.Add(Material);
        Mesh.Transform = GetTransform(Component);
        if (const auto* Instanced = Cast<UInstancedStaticMeshComponent>(Component))
        {
            for (int32 Index = 0; Index < Instanced->GetInstanceCount(); ++Index)
            {
                FTransform Instance;
                if (Instanced->GetInstanceTransform(Index, Instance, false))
                {
                    auto& Copy = Meshes.Add_GetRef(Mesh);
                    Copy.Transform = Instance * Mesh.Transform;
                }
            }
        }
        else Meshes.Add(MoveTemp(Mesh));
    }
    return !Meshes.IsEmpty();
}

/** Copies only visual mesh data into plain engine components. No actor is spawned,
 * no construction script runs, and no cooked component/CDO is registered or edited. */
class FCrimeFactoryActorThumbnailScene : public FThumbnailPreviewScene
{
public:
    void SetMeshes(const TArray<FCrimeFactoryThumbnailMesh>& Meshes)
    {
        for (UPrimitiveComponent* Component : Components) { RemoveComponent(Component); Component->DestroyComponent(); }
        Components.Reset();
        FBox Box(ForceInit);
        for (const auto& Mesh : Meshes)
        {
            UMeshComponent* Component = nullptr;
            if (Mesh.StaticMesh)
            {
                auto* Static = NewObject<UStaticMeshComponent>(GetTransientPackage(), NAME_None, RF_Transient);
                Static->SetStaticMesh(Mesh.StaticMesh);
                Component = Static;
            }
            else if (Mesh.SkeletalMesh)
            {
                Mesh.SkeletalMesh->WaitForPendingInitOrStreaming();
                auto* Skeletal = NewObject<USkeletalMeshComponent>(GetTransientPackage(), NAME_None, RF_Transient);
                Skeletal->SetSkeletalMesh(Mesh.SkeletalMesh);
                Component = Skeletal;
            }
            if (!Component) continue;
            Component->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            for (int32 Index = 0; Index < Mesh.Materials.Num(); ++Index) Component->SetMaterial(Index, Mesh.Materials[Index]);
            AddComponent(Component, Mesh.Transform);
            Component->UpdateBounds();
            Box += Component->Bounds.GetBox();
            Components.Add(Component);
        }
        const FBoxSphereBounds OriginalBounds(Box);
        const FVector Offset = -OriginalBounds.Origin + FVector(0, 0, GetBoundsZOffset(OriginalBounds));
        for (UPrimitiveComponent* Component : Components) Component->AddWorldOffset(Offset);
        Bounds = FBoxSphereBounds(OriginalBounds.Origin + Offset, OriginalBounds.BoxExtent, OriginalBounds.SphereRadius);
    }
protected:
    virtual void GetViewMatrixParameters(float FOV, FVector& Origin, float& Pitch, float& Yaw, float& Zoom) const override
    {
        Origin = -Bounds.Origin;
        Pitch = -11;
        Yaw = -157;
        Zoom = FMath::Max(1.0, Bounds.SphereRadius * 1.15 / FMath::Tan(FMath::DegreesToRadians(FOV * 0.5)));
    }
private:
    TArray<UPrimitiveComponent*> Components; // FPreviewScene owns/GC-references registered components.
    FBoxSphereBounds Bounds = FBoxSphereBounds(ForceInit);
};

bool UCrimeFactoryActorThumbnailRenderer::CanVisualizeAsset(UObject* Object)
{
    ActiveRenderer = this;
    auto* Thumbnail = Cast<UCrimeFactoryActorThumbnail>(Object);
    return Thumbnail && !Thumbnail->SourcePath.IsNull() && Thumbnail->Prepare();
}

void UCrimeFactoryActorThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
    FRenderTarget* RenderTarget, FCanvas* Canvas, bool bAdditionalViewFamily)
{
    auto* Thumbnail = Cast<UCrimeFactoryActorThumbnail>(Object);
    if (!Thumbnail || !Thumbnail->Prepare()) return;
    if (!Scene) Scene = MakeShared<FCrimeFactoryActorThumbnailScene>();
    Scene->SetMeshes(Thumbnail->Meshes);
    FSceneViewFamilyContext Family(FSceneViewFamily::ConstructionValues(RenderTarget, Scene->GetScene(), FEngineShowFlags(ESFIM_Game))
        .SetTime(GetTime()).SetAdditionalViewFamily(bAdditionalViewFamily));
    Family.EngineShowFlags.DisableAdvancedFeatures();
    Family.EngineShowFlags.MotionBlur = 0;
    RenderViewFamily(Canvas, &Family, Scene->CreateView(&Family, X, Y, Width, Height));
}

void UCrimeFactoryActorThumbnailRenderer::ReleaseScene() { Scene.Reset(); }
void UCrimeFactoryActorThumbnailRenderer::BeginDestroy() { ReleaseScene(); Super::BeginDestroy(); }

void CrimeFactoryActorThumbnails::Register()
{
    UThumbnailManager& Manager = UThumbnailManager::Get();
    RegisteredManager = &Manager;
    Manager.RegisterCustomRenderer(UCrimeFactoryActorThumbnail::StaticClass(), UCrimeFactoryActorThumbnailRenderer::StaticClass());
}

void CrimeFactoryActorThumbnails::Unregister()
{
    if (UObjectInitialized())
    {
        if (auto* Renderer = ActiveRenderer.Get()) Renderer->ReleaseScene();
        // TryGet returns a raw singleton that is not cleared when the manager is
        // destroyed during editor shutdown. Check our weak registration instead.
        if (auto* Manager = RegisteredManager.Get())
            if (!Manager->HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
                Manager->UnregisterCustomRenderer(UCrimeFactoryActorThumbnail::StaticClass());
    }
    ActiveRenderer.Reset();
    RegisteredManager.Reset();
}
