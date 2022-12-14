#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMArticleItem.generated.h"

class UMaterialInstance;
class UTexture2D;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMArticleItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMArticleItem();
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageAsMaterial(UMaterialInstance* InMaterial, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Texture, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCaption(const FText& Text, ESlateVisibility WidgetVisibility);
    
};

