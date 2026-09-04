#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryDouble.generated.h"

class ULowEntryDouble;
class ULowEntryLong;

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryDouble : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Bytes;
    
    ULowEntryDouble();

    UFUNCTION(BlueprintCallable)
    void SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LongBytes_LessThan(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LongBytes_GreaterThan(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Integer_LessThan(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Integer_GreaterThan(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetBytes();
    
    UFUNCTION(BlueprintCallable)
    void Float_Subtract(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Float_LessThan(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Float_GreaterThan(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Float_Equals(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void Float_Add(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void DoubleBytes_Subtract(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoubleBytes_LessThan(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoubleBytes_GreaterThan(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoubleBytes_Equals(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable)
    void DoubleBytes_Add(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryDouble* CreateClone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CastToString(const int32 MinFractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryLong* CastToLongBytes();
    
};

