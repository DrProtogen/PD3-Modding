#pragma once
// Force-included (via ModuleRules.ForceIncludeFiles) for every translation unit in the Starbreeze
// module. The Starbreeze headers were reconstructed from a UHT reflection dump (see
// UE4GameProjectGenerator tooling) which captures class/property declarations but not the original
// per-file #include lists. Consequently, huge numbers of Starbreeze headers use base classes,
// interfaces and member types (UBoxComponent, UBTDecorator, UUserWidget, ACharacter, ...) without
// ever including their declarations. Rather than hand-patch hundreds of files, we force-include the
// small set of engine headers that cover every such type seen across the whole module.

// GameFramework
#include "GameFramework/Character.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/SpectatorPawn.h"
#include "GameFramework/HUD.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/GameState.h"
#include "GameFramework/CheatManager.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/OnlineSession.h"

// Engine/
#include "Engine/TriggerVolume.h"
#include "Engine/TriggerBox.h"
#include "Engine/GameEngine.h"
#include "Engine/Console.h"
#include "Engine/DebugCameraController.h"
#include "Engine/LevelScriptActor.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/ActorChannel.h"
#include "Engine/AssetManager.h"
#include "GameFramework/GameUserSettings.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Camera/CameraModifier.h"
#include "Components/InstancedStaticMeshComponent.h"

// Components
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SplineComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/BrushComponent.h"
#include "Components/LineBatchComponent.h"
#include "Camera/CameraComponent.h"

// Animation
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Animation/AnimMetaData.h"

// GameplayTags
#include "GameplayTagAssetInterface.h"

// AIModule
#include "AISystem.h"
#include "AISubsystem.h"
#include "AIController.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISightTargetInterface.h"
#include "Perception/AISense_Sight.h"
#include "Navigation/PathFollowingComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Navigation/CrowdManager.h"
#include "Navigation/NavLinkProxy.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

// NavigationSystem
#include "NavLinkCustomInterface.h"
#include "NavLinkHostInterface.h"
#include "NavModifierComponent.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "NavAreas/NavArea.h"
#include "NavAreas/NavArea_Default.h"
#include "NavAreas/NavArea_Null.h"
#include "AI/Navigation/NavEdgeProviderInterface.h"

// Niagara
#include "NiagaraComponent.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"

// LevelSequence
#include "LevelSequenceActor.h"

// UMG
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Components/WidgetComponent.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "Components/TileView.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "Components/GridPanel.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"

// GameplayAbilities
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
