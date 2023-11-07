// Fill out your copyright notice in the Description page of Project Settings.


#include "LandscapeGen.h"
#include "ProceduralMeshComponent.h"
#include "DiamondSquare.h"

ALandscapeGen::ALandscapeGen()
{
	PrimaryActorTick.bCanEverTick = false;
    
}

void ALandscapeGen::BeginPlay()
{
	Super::BeginPlay();

    // Add a debug message to check if BeginPlay is being called
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ALandscapeGen BeginPlay"));

    FActorSpawnParameters SpawnParams;
    ADiamondSquare* DiamondSquareActor = GetWorld()->SpawnActor<ADiamondSquare>(ADiamondSquare::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

     // Customize the actor's properties using SetChunkParameters
    DiamondSquareActor->SetChunkParameters(Size, ZMultiplier, NoiseScale, VertexDistance/Size, UVScale);
    DiamondSquareActor->SetMaterial(Material);
        
    // Attach the spawned actor to your landscape actor if necessary
    DiamondSquareActor->AttachToActor(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

