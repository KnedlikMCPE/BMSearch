#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "Engine/EngineTypes.h"
#include "BMLidInteractionComponent.generated.h"

class UBMAudioAssetListBase;
class UAnimSequence;
class UBMDockingAnimationComponent;
class ABMBaseLid;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMLidInteractionComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool LidStartsOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OpenBeforePour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OpenInHand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Reclose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* MorpherAnimation;
    
    UPROPERTY()
    FTimerHandle MorpherAnimationTimerHandle;
    
protected:
    UPROPERTY(Instanced)
    UBMDockingAnimationComponent* DockingComponent;
    
    UPROPERTY()
    ABMBaseLid* Lid;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UBMLidInteractionComponent();
protected:
    UFUNCTION()
    void SetLidOpen(AActor* ActorCalledDocking);
    
    UFUNCTION()
    void SetLidClosed(AActor* ActorCalledDocking);
    
    UFUNCTION()
    void MorpherAnimationComplete();
    
public:
    UFUNCTION()
    bool GetLidAnimating();
    
};

