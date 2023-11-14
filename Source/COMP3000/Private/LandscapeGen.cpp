// Fill out your copyright notice in the Description page of Project Settings.


#include "LandscapeGen.h"
#include "ProceduralMeshComponent.h"
#include "DiamondSquare.h"
#include "Kismet/GameplayStatics.h"


ALandscapeGen::ALandscapeGen()
{
	PrimaryActorTick.bCanEverTick = true;
    
}

void ALandscapeGen::BeginPlay()
{
    Super::BeginPlay();

    // debug for beginplay
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ALandscapeGen BeginPlay"));

    
}

void ALandscapeGen::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);

    // Get the player pawn
    APawn* PlayerPawn = PlayerController->GetPawn();

    // Get the player location
    FVector PlayerLocation = PlayerPawn->GetActorLocation();

    FVector SpawnLocation(Current.X, Current.Y, 0.0f);

    Current.X = FMath::RoundToInt((PlayerLocation.X)/VertexDistance);
    Current.Y = FMath::RoundToInt((PlayerLocation.Y)/VertexDistance); 


    for (int X = -Distance; X <= Distance; X++)
    {
        for (int Y = -Distance; Y <= Distance; Y++)
        {            
            Visible.X = (Current.X + X);
            Visible.Y = (Current.Y + Y);
            bool GenVis = Generated.Contains(FChunkPosition(Visible));
            
            if (!GenVis) 
            {
                FActorSpawnParameters SpawnParams;
                FVector Vector = FVector((Visible.X * VertexDistance), (Visible.Y * VertexDistance), 0);
                //UE_LOG(LogTemp, Warning, TEXT("Vector: %s"), *Vector.ToString());
                ADiamondSquare* DiamondSquareActor = GetWorld()->SpawnActor<ADiamondSquare>(ADiamondSquare::StaticClass(), Vector, FRotator::ZeroRotator, SpawnParams);
                
                //Setting Parameters
                XOffset = Size * Visible.X;
                YOffset = Size * Visible.Y;
                DiamondSquareActor->SetChunkParameters(Size, ZMultiplier, NoiseScale, VertexDistance / Size, UVScale, XOffset, YOffset);
                DiamondSquareActor->SetMaterial(Material);
                    
                //DiamondSquareActor->AttachToActor(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
                Generated.Add(FChunkPosition(Visible));
            }            
        }
    }
}

