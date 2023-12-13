// Fill out your copyright notice in the Description page of Project Settings.


#include "NewGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "BasicEnemy.h"
#include "Navigation/PathFollowingComponent.h"
#include "BasicEnemyAIController.h"
#include <cmath>

ANewGameModeBase::ANewGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANewGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    check(GEngine != nullptr);
}

void ANewGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnemySpawnTimer -= DeltaTime;

	
	if (EnemySpawnTimer <= 0.0f)
	{
		EnemySpawnTimer = 30.0f;
		UWorld* World = GetWorld();

		if (World)
		{
			FVector PlayerLocation = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPawn()->GetActorLocation();

			float DistanceLimitHigh = 5000.0f;
			float DistanceLimitLow = 1000.0f;

			float randomDistanceX = FMath::RandRange(DistanceLimitLow, DistanceLimitHigh);
			float randomDistanceY = FMath::RandRange(DistanceLimitLow, DistanceLimitHigh); //sqrt(pow((FMath::RandRange(DistanceLimitLow, DistanceLimitHigh)), 2) - pow(randomDistanceX, 2));

			int Quadrant = FMath::RandRange(1, 4);
			switch (Quadrant)
			{
			case 2:
				randomDistanceX = -randomDistanceX;
				break;

			case 3:
				randomDistanceX = -randomDistanceX;
				randomDistanceY = -randomDistanceY;
				break;

			case 4:
				randomDistanceY = -randomDistanceY;
				break;
			}

			FVector SpawnLocation(PlayerLocation.X + randomDistanceX, PlayerLocation.Y + randomDistanceY, PlayerLocation.Z  + 100);
			GEngine->AddOnScreenDebugMessage(-1, 120.0f, FColor::Yellow, FString::Printf(TEXT("X: %f, Y: %f"), SpawnLocation.X, SpawnLocation.Y)); FActorSpawnParameters SpawnParams;
			ABasicEnemy* SpawnEnemyActor = World->SpawnActor<ABasicEnemy>(EnemyToSpawn, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
			if (SpawnEnemyActor)
			{				
				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Enemy Spawned")));
				ABasicEnemyAIController* EnemyAIController = World->SpawnActor<ABasicEnemyAIController>(ABasicEnemyAIController::StaticClass(), FTransform::Identity);
				if (EnemyAIController)
				{
					EnemyAIController->Possess(SpawnEnemyActor);
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Failed to spawn AI Controller"));
				}
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Failed to spawn Enemy"));
			}
			

		}
	}
	
}