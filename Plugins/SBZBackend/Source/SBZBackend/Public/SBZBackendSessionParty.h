#pragma once
#include "CoreMinimal.h"
#include "SBZBackendSessionParty.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBackendSessionParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    FSBZBackendSessionParty();
};

