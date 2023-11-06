// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LandscapeGen.generated.h"

UCLASS()
class COMP3000_API ALandscapeGen : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALandscapeGen();


	UPROPERTY(EditAnywhere, Meta = (CLampMin = 0))
	int Size = 1;

	//Perlin Noise modifiers
	UPROPERTY(EditAnywhere, Meta = (CLampMin = 0))
	float ZMultiplier = 500.0f;
	UPROPERTY(EditAnywhere, Meta = (CLampMin = 0))
	float NoiseScale = 0.1f;

	//Material and Vertices Scaling
	UPROPERTY(EditAnywhere, Meta = (CLampMin = 0.000001))
	float VertexDistance = 100.0f;
	UPROPERTY(EditAnywhere, Meta = (CLampMin = 0.000001))
	float UVScale = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Material")
	UMaterialInterface* Material;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

};
