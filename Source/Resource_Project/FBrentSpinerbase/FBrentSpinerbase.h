// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FBrentSpinerbase.generated.h"

/**
*
*/

USTRUCT(blueprintType)
struct FCSVData_Items : public FTableRowBase

{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 StartingCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float BuildTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float HomoBuildPct;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Hut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Homo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Air;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 WaterBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Plains;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Forest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Mountain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 FlintknappingGrounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 FirePit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Altar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Water;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Fish;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Salt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 SeaMonster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Soil;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Clay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Sand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 EvilSpirit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Softwood;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 WildGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Fruit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 SaberToothTiger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Stone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Hammerstone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 GroundStone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Copper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 LithicFlake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 BasicTool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Pelt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 EnchantedWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Fire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Meat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Ash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 ClayPot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Medicine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 SpokenWord;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 God;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Rain;
};