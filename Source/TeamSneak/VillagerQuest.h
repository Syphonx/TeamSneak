// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemInfo.h"
#include "VillagerQuest.generated.h"

USTRUCT(Blueprintable)
struct TEAMSNEAK_API FQuest
{
	GENERATED_BODY()

public:

	FQuest()
	{
		TargetItem = EItemType::Scarf;
		bFoundItem = false;
		bCompleted = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType TargetItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFoundItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCompleted;
};

UCLASS(Blueprintable)
class TEAMSNEAK_API UVillagerQuest : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> QuestDialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> CompletionDialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuest Quest;
};
