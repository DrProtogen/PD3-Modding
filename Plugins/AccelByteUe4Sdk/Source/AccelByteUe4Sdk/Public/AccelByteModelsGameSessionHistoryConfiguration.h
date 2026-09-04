#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionConfigurationServerType.h"
#include "EAccelByteV2SessionJoinability.h"
#include "AccelByteModelsGameSessionHistoryConfiguration.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGameSessionHistoryConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionConfigurationServerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteV2SessionJoinability Joinability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MinPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InactiveTimeout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InviteTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Deployment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RequestedRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Persistent;
    
    FAccelByteModelsGameSessionHistoryConfiguration();
};

