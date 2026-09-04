#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZZiplineAttachmentBone.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZZiplineAttachmentBone : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    USBZZiplineAttachmentBone();

};

