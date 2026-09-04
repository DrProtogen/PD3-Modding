#pragma once
#include "CoreMinimal.h"
#include "SBZBackendSessionParty.h"
#include "SBZBackendSessionTeam.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBackendSessionTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBackendSessionParty> Parties;
    
    FSBZBackendSessionTeam();
};

