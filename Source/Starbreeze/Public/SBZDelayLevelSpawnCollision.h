#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDelayLevelSpawnCollision.generated.h"

UCLASS(Blueprintable)
class ASBZDelayLevelSpawnCollision : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ReplicatedActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDestroyDuration;
    
public:
    ASBZDelayLevelSpawnCollision(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedActorArray();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EnableCollisions(const TArray<AActor*>& InArray);
    
};

