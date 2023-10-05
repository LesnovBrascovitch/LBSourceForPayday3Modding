#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZCosmeticsDataAsset.h"
#include "SBZModularMeshContainer.h"
#include "SBZModularMeshData.h"
#include "SBZWeaponCharmData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZWeaponCharmData : public USBZCosmeticsDataAsset, public ISBZModularMeshContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularMeshData> ModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UClass> WeaponCharmClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachmentOffset;
    
    USBZWeaponCharmData();


    // Fix for true pure virtual functions not being implemented
};

