
#include "BasicEnemyAIController.h"

#include "NavigationSystem.h"


void ABasicEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

	RandomPatrol();
}

void ABasicEnemyAIController::RandomPatrol()
{
    
    if (NavArea)
    {
        APawn* ControlledPawn = GetPawn(); //error here no pawn found
        if (ControlledPawn)
        {
            FVector PawnLocation = ControlledPawn->GetActorLocation();
            NavArea->K2_GetRandomReachablePointInRadius(GetWorld(), PawnLocation, RandomLocation, 150.0f);
            MoveToLocation(RandomLocation);
        }
        else 
        {
            UE_LOG(LogTemp, Warning, TEXT("Pawn is not valid!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("NavArea is not valid!"));
    }
}