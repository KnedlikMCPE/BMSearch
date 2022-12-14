#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMYeastIngredientData_ColonyProperties.h"
#include "BMYeastIngredientData_ColonyRandomizationRanges.h"
#include "BMYeastIngredientData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMYeastIngredientData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName IngredientName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMYeastIngredientData_ColonyProperties BaselineColonyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMYeastIngredientData_ColonyRandomizationRanges ColonyRandomizationRanges;
    
    FBMYeastIngredientData();
};

