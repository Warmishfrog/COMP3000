
#include "BasicEnemy.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "BasicEnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"
//#include "AIController.h"
#include "AITypes.h"
#include "Engine/DamageEvents.h"
#include <COMP3000/FP_player.h>

// Sets default values
ABasicEnemy::ABasicEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerCollisionDetection = CreateDefaultSubobject<USphereComponent>(TEXT("Player Collision Detection"));
	PlayerCollisionDetection->SetupAttachment(RootComponent);

	PlayerAttackCollisionDetection = CreateDefaultSubobject<USphereComponent>(TEXT("Player Attack Collision Detection"));
	PlayerAttackCollisionDetection->SetupAttachment(RootComponent);

	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	DamageCollision->SetupAttachment(GetMesh(), TEXT("RightHandSocket"));

}

// Called when the game starts or when spawned
void ABasicEnemy::BeginPlay()
{
	Super::BeginPlay();

	BasicEnemyAIController = Cast<ABasicEnemyAIController>(GetController());

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("basic enemy ai controller summoned")));
	if (BasicEnemyAIController)
	{
		UPathFollowingComponent* PathFollowingComp = BasicEnemyAIController->GetPathFollowingComponent();
		if (PathFollowingComp)
		{
			PathFollowingComp->OnRequestFinished.AddUObject(this, &ABasicEnemy::OnAIMoveCompleted);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("AI Move completed")));
		}
		else
		{
			// Handle case where PathFollowingComponent is not valid
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("PathFollowingComponent is NULL"));
		}
	}
	else
	{
		// Handle case where BasicEnemyAIController is not valid
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("BasicEnemyAIController is NULL"));
	}
	//BasicEnemyAIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &ABasicEnemy::OnAIMoveCompleted);
	
	PlayerCollisionDetection->OnComponentBeginOverlap.AddDynamic(this,
		&ABasicEnemy::OnPlayerDetectedOverlapBegin);

	PlayerAttackCollisionDetection->OnComponentBeginOverlap.AddDynamic(this,
		&ABasicEnemy::OnPlayerAttackOverlapBegin);

	PlayerAttackCollisionDetection->OnComponentEndOverlap.AddDynamic(this,
		&ABasicEnemy::OnPlayerAttackOverlapEnd);

	DamageCollision->OnComponentBeginOverlap.AddDynamic(this,
		&ABasicEnemy::OnDealDamageOverlapBegin);
}
void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicEnemy::OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if (PlayerDetected && CanAttackPlayer)
	{
		StopSeekingPlayer();

		// attack player
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow, TEXT("Enemy is attacking"));
		UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->TakeDamage(10.0f, FDamageEvent(), BasicEnemyAIController, this);
	}
	if (!PlayerDetected)
	{
		BasicEnemyAIController->RandomPatrol();
	}
}

void ABasicEnemy::MoveToPlayer()
{
	FVector PlayerLocation = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPawn()->GetActorLocation();
	if (BasicEnemyAIController)
	{
		BasicEnemyAIController->MoveToLocation(PlayerLocation, StoppingDistance, true);
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("BasicEnemyAIController is NULL"));
	}
}

void ABasicEnemy::SeekPlayer()
{
	MoveToPlayer();
	GetWorld()->GetTimerManager().SetTimer(SeekPlayerTimerHandle, this,
		&ABasicEnemy::SeekPlayer, 0.25f, true);
}

void ABasicEnemy::StopSeekingPlayer()
{
	GetWorld()->GetTimerManager().ClearTimer(SeekPlayerTimerHandle);
}

void ABasicEnemy::OnPlayerDetectedOverlapBegin(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("AI detected player")));

		PlayerDetected = true;
		SeekPlayer();
	}
}

void ABasicEnemy::OnPlayerDetectedOverlapEnd(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		PlayerDetected = false;
		StopSeekingPlayer();
		BasicEnemyAIController->RandomPatrol();
	}
}

void ABasicEnemy::OnPlayerAttackOverlapBegin(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		CanAttackPlayer = true;
	}
}

void ABasicEnemy::OnPlayerAttackOverlapEnd(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		CanAttackPlayer = false;
		SeekPlayer();
	}
}

void ABasicEnemy::OnDealDamageOverlapBegin(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0) && CanDealDamage)
	{
		// deal damage to player
	}
}

