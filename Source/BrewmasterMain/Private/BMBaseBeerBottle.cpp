#include "BMBaseBeerBottle.h"
#include "Components/StaticMeshComponent.h"

class UBMCarryableComponent;
class AActor;



void ABMBaseBeerBottle::SetBottleColour(EBMBottleColour BottleColour) {
}

void ABMBaseBeerBottle::SetBottleCapOn(bool bCapOn) {
}

void ABMBaseBeerBottle::CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee) {
}


ABMBaseBeerBottle::ABMBaseBeerBottle() {
    this->BottleCapOff = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_BottleCapOff"));
    this->BottleCapOn = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_BottleCapOn"));
    this->BottleLabel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_BottleLabel"));
    this->LabelComponentClass = NULL;
    this->LabelComponent = NULL;
    this->CapOn = true;
}

