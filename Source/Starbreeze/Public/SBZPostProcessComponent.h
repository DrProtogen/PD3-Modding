#pragma once
#include "CoreMinimal.h"
#include "SBZComponentSelector.h"
#include "Components/PostProcessComponent.h"
#include "SBZPostProcessComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector ShapeSelector;
    
public:
    USBZPostProcessComponent(const FObjectInitializer& ObjectInitializer);


    virtual void OnRegister() override;
    virtual void OnUnregister() override;
    virtual void Serialize(FArchive& Ar) override;
};

