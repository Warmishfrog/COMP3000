// Fill out your copyright notice in the Description page of Project Settings.


#include "NewGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "BasicEnemy.h"
#include "Navigation/PathFollowingComponent.h"
#include "BasicEnemyAIController.h"

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
		EnemySpawnTimer = 10.0f;
		UWorld* World = GetWorld();

		if (World)
		{
			FVector PlayerLocation = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPawn()->GetActorLocation();

			float randomDistance = FMath::RandRange(500.0f, 5000.0f);

			FVector SpawnLocation(PlayerLocation.X + randomDistance, PlayerLocation.Y + randomDistance, PlayerLocation.Z  + 100);

			FActorSpawnParameters SpawnParams;
			ABasicEnemy* SpawnEnemyActor = World->SpawnActor<ABasicEnemy>(EnemyToSpawn, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
			if (SpawnEnemyActor)
			{
				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Enemy Spawned")));
			}
			

		}
	}
}