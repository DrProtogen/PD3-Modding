#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "SBZPlayerReadyInfo.h"
#include "SBZPlayersReadyStatusStateArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayersReadyStatusStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerReadyInfo> SBZPlayersReadyInfo;
    
    STARBREEZE_API FSBZPlayersReadyStatusStateArray();
};

