#include "SBZPostProcessComponent.h"

#include "Engine/World.h"

USBZPostProcessComponent::USBZPostProcessComponent(
	const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USBZPostProcessComponent::OnRegister()
{
    USceneComponent::OnRegister();
    GetWorld()->InsertPostProcessVolume(this);
}

void USBZPostProcessComponent::OnUnregister()
{
    USceneComponent::OnUnregister();
    GetWorld()->RemovePostProcessVolume(this);
}

void USBZPostProcessComponent::Serialize(FArchive& Ar)
{
    USceneComponent::Serialize(Ar);

#if WITH_EDITORONLY_DATA
    if (Ar.IsLoading())
    {
        Settings.OnAfterLoad();
    }
#endif
}
