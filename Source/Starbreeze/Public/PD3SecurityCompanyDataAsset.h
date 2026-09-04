#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZSecurityCompany.h"
#include "PD3SecurityCompanyDataAsset.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class UPD3SecurityCompanyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecurityCompanyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* SecurityCompanyLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecurityCompanyDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecurityCompanyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSecurityCompany SecurityCompany;
    
    UPD3SecurityCompanyDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedDescriptionText() const;
    
};

