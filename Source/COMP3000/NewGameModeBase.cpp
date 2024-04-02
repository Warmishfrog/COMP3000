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


	CombatStarted = false; //debug

	//ABasicEnemyAIController* EnemyAIController = GetWorld()->SpawnActor<ABasicEnemyAIController>(ABasicEnemyAIController::StaticClass(), FTransform::Identity);

    check(GEngine != nullptr);
}

void ANewGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	static float EnemySpawnTimer = 0.0f;

	if (CombatStarted) {
		EnemySpawnTimer -= DeltaTime;
		CumulativeSpawnTime += DeltaTime; //Total time elapsed since combat started
		
		float spawnRate = 60/SpawningRate(CumulativeSpawnTime); //Calculate Spawn delay in seconds per enemy

		if (EnemySpawnTimer <= 0.0f)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 120.0f, FColor::Yellow, FString::Printf(TEXT("Cumulative Time: %f"), CumulativeSpawnTime));
			//GEngine->AddOnScreenDebugMessage(-1, 120.0f, FColor::Yellow, FString::Printf(TEXT("Spawning Rate: %f"), SpawningRate(CumulativeSpawnTime))); 
			//GEngine->AddOnScreenDebugMessage(-1, 120.0f, FColor::Yellow, FString::Printf(TEXT("Spawn Rate: %f"), spawnRate));
			EnemySpawnTimer = spawnRate;
			SpawnEnemy();
		}			
	}
}


// Define the spawning rate function
float ANewGameModeBase::SpawningRate(float t)
{
	return (MaxSpawnRate / (1.0f + exp(-GrowthRate * ((t/60) - SpawnAccelerate)))) + BaseSpawnRate; //Calculates Spawn rate per minute
}

void ANewGameModeBase::SpawnEnemy()
{
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

		FVector SpawnLocation(PlayerLocation.X + randomDistanceX, PlayerLocation.Y + randomDistanceY, PlayerLocation.Z + 100);
		//GEngine->AddOnScreenDebugMessage(-1, 120.0f, FColor::Yellow, FString::Printf(TEXT("X: %f, Y: %f"), SpawnLocation.X, SpawnLocation.Y));
		FActorSpawnParameters SpawnParams;

		ABasicEnemy* SpawnEnemyActor = World->SpawnActor<ABasicEnemy>(EnemyToSpawn, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
	}
}
