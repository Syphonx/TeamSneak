// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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
		: ItemMesh(nullptr)
	{
		
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType ItemType;
};
