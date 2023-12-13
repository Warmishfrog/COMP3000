#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NewGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COMP3000_API ANewGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	ANewGameModeBase();

	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	TSubclassOf<class ABasicEnemy> EnemyToSpawn;

	float EnemySpawnTimer;
};
