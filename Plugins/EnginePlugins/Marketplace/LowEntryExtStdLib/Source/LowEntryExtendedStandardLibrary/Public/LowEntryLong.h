#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryLong.generated.h"

class ULowEntryDouble;
class ULowEntryLong;

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLong : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Bytes;
    
    ULowEntryLong();

    UFUNCTION(BlueprintCallable)
    void SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    void LongBytes_Subtract(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LongBytes_LessThan(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LongBytes_GreaterThan(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LongBytes_Equals(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable)
    void LongBytes_Add(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable)
    void Integer_Subtract(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Integer_LessThan(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Integer_GreaterThan(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Integer_Equals(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void Integer_Add(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetBytes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Float_LessThan(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Float_GreaterThan(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoubleBytes_LessThan(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoubleBytes_GreaterThan(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryLong* CreateClone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CastToString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryDouble* CastToDoubleBytes();
    
};

