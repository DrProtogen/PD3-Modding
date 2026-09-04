#pragma once
#include "CoreMinimal.h"
#include "Oauth2TokenNamespaceRole.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FOauth2TokenNamespaceRole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    FOauth2TokenNamespaceRole();
};

