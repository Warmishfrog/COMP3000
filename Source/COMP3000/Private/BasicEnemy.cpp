
#include "BasicEnemy.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "BasicEnemyAIController.h"
#include "FindPlayerPosition.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"

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
	BasicEnemyAIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject
	(this, &ABasicEnemy::OnAIMoveCompleted);
	PlayerCollisionDetection->OnComponentBeginOverlap.AddDynamic(this,
		&ABasicEnemy::OnPlayerDetectedOverlapBegin);

	PlayerCollisionDetection->OnComponentEndOverlap.AddDynamic(this,
		&ABasicEnemy::OnPlayerDetectedOverlapEnd);

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
	if (!PlayerDetected)
	{
		BasicEnemyAIController->RandomPatrol();
	}
	
	else if (PlayerDetected && CanAttackPlayer)
	{
		StopSeekingPlayer();

		// attack player
		UE_LOG(LogTemp, Warning, TEXT("Player ATTACKED"));
	}
	
}

void ABasicEnemy::MoveToPlayer()
{
	BasicEnemyAIController->MoveToLocation(FP_player_ref->GetActorLocation(), StoppingDistance, true);
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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("AI ping 1")));
	FP_player_ref = Cast<AFindPlayerPosition>(OtherActor);
	if (FP_player_ref)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("AI ping 2")));

		PlayerDetected = true;
		SeekPlayer();
	}
}

void ABasicEnemy::OnPlayerDetectedOverlapEnd(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	FP_player_ref = Cast<AFindPlayerPosition>(OtherActor);
	if (FP_player_ref)
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
	FP_player_ref = Cast<AFindPlayerPosition>(OtherActor);
	if (FP_player_ref)
	{
		CanAttackPlayer = true;
	}
}

void ABasicEnemy::OnPlayerAttackOverlapEnd(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	FP_player_ref = Cast<AFindPlayerPosition>(OtherActor);
	if (FP_player_ref)
	{
		CanAttackPlayer = false;

		SeekPlayer();
	}
}

void ABasicEnemy::OnDealDamageOverlapBegin(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	FP_player_ref = Cast<AFindPlayerPosition>(OtherActor);
	if (FP_player_ref && CanDealDamage)
	{
		// deal damage to player
		UE_LOG(LogTemp, Warning, TEXT("Player Damaged"));
	}
}

