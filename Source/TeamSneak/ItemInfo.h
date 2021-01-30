// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include <Materials/MaterialInstance.h>

#include "ItemInfo.generated.h"

UENUM(Blueprintable)
enum class EItemType : uint8
{
	Hat,
	Scarf,
	Backpack,
	Shoe,
	Book
};

UCLASS(Blueprintable)
class TEAMSNEAK_API UItemInfo : public UDataAsset
{
	GENERATED_BODY()
		
public:

	UItemInfo()
		: ItemMaterial(nullptr)
	{
		
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* ItemMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType ItemType;
};
