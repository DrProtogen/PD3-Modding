#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZMainMenuAnimationName.h"
#include "PD3PlayerLoadout.h"
#include "SBZEquippableConfig.h"
#include "SBZMaskConfig.h"
#include "SBZMainMenuPlayerCharacter.generated.h"

class ASBZEquippable;
class ASBZMainMenuPlayerCharacter;
class ASBZMask;
class UObject;
class USBZModularCharacterComponent;
class USBZPlayerCharacterData;
class UWidgetComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMainMenuPlayerCharacter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZModularCharacterComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* NameplateWidgetComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZEquippable* Equippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMask* MaskEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfigEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* PlayerCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig AsyncEquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CachedWeaponObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CachedLoadoutObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout CachedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZMainMenuPlayerCharacter*> DuplicateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMainMenuAnimationName StartMontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredEquippableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
public:
    ASBZMainMenuPlayerCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnChunkInstall(bool bIsGameInstallPending);
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyEquippable();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetPlayerLoadoutForMultiplayerMannequin(int32 LoadoutIndex, int32 WeaponDisplayIndex);
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyIngameLoadout();
    
};

