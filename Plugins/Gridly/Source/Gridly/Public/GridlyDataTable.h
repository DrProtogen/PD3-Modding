#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GridlyDataTable.generated.h"

UCLASS(Blueprintable)
class GRIDLY_API UGridlyDataTable : public UDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ViewId;
    
    UGridlyDataTable();

};

