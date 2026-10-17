#pragma once

#include "CoreMinimal.h"
#include "ThumbnailRendering/DefaultSizedThumbnailRenderer.h"
#include "CrimeFactoryActorThumbnail.generated.h"

struct FAssetData;
class FCrimeFactoryActorThumbnailScene;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT()
struct FCrimeFactoryThumbnailMesh
{
    GENERATED_BODY()
    UPROPERTY() TObjectPtr<UStaticMesh> StaticMesh;
    UPROPERTY() TObjectPtr<USkeletalMesh> SkeletalMesh;
    UPROPERTY() TArray<TObjectPtr<UMaterialInterface>> Materials;
    UPROPERTY() FTransform Transform;
};

/** Transient, tile-owned rendering input. Never registered or saved as a project asset. */
UCLASS(Transient)
class UCrimeFactoryActorThumbnail : public UObject
{
    GENERATED_BODY()
public:
    FSoftObjectPath SourcePath;
    bool Prepare();
    UPROPERTY() TArray<FCrimeFactoryThumbnailMesh> Meshes;
private:
    bool bPrepared = false;
};

UCLASS(Transient)
class UCrimeFactoryActorThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
    GENERATED_BODY()
public:
    virtual bool CanVisualizeAsset(UObject* Object) override;
    virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height,
        FRenderTarget* RenderTarget, FCanvas* Canvas, bool bAdditionalViewFamily) override;
    virtual EThumbnailRenderFrequency GetThumbnailRenderFrequency(UObject* Object) const override
    {
        // UE5.5's OnPropertyChange pool path renders only while LastUpdateTime <= 0;
        // later refreshes fall back to a package thumbnail, which transient proxies lack.
        // Render on each pool request instead. Tiles disable hover realtime rendering
        // and their pool's realtime-per-frame budget is zero.
        return EThumbnailRenderFrequency::Realtime;
    }
    virtual void BeginDestroy() override;
    void ReleaseScene();
private:
    // A single scene is reused by the serial native thumbnail render queue.
    TSharedPtr<FCrimeFactoryActorThumbnailScene> Scene;
};

namespace CrimeFactoryActorThumbnails
{
    bool ShouldUsePreview(const FAssetData& Asset, bool bClassEntry);
    void Register();
    void Unregister();
}
