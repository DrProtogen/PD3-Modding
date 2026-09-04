#include "SBZExplosionComponent.h"

USBZExplosionComponent::USBZExplosionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentExplosionAvatarActor = NULL;
    this->CurrentExplosionInstigator = NULL;
}

void USBZExplosionComponent::Server_ReceivePredictedExplosion_Implementation(const FSBZExplosionResult& Result, const FPredictionKey& PredictionKey, const FGameplayAbilitySpecHandle& AbilitySpecHandle, uint8 ExplosionKey, const USBZExplosiveData* ExplosiveData) {
}

void USBZExplosionComponent::OnPredictingAbilityEnded(UGameplayAbility* Ability) {
}

void USBZExplosionComponent::Multicast_ReplicatePredictedExplosionWithData_Implementation(const FSBZExplosionResult& Result, const USBZExplosiveData* ExplosiveData) {
}

void USBZExplosionComponent::Multicast_ReplicateExplosionWithData_Implementation(const FSBZExplosionResult& Result, const USBZExplosiveData* ExplosiveData) {
}

void USBZExplosionComponent::InitiateExplosion(FSBZExplosionReturnData& OutExplosionReturnData, const FSBZExplosionParams& ExplosiveParams) {
}

USBZExplosiveData* USBZExplosionComponent::GetExplosiveData() const {
    return NULL;
}

FVector USBZExplosionComponent::GetExplosionLocation() const {
    return FVector{};
}


