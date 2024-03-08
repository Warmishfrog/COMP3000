#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSProjectile.h"
#include "TimerManager.h"
#include "UpgradeComponent.h"
#include "FP_player.generated.h"

UCLASS()
class COMP3000_API AFP_player : public ACharacter
{
	GENERATED_BODY()	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;

	FTimerHandle  FireRateTimerHandle;
	FTimerHandle  AutoFireRateTimerHandle;


public:	

	// Sets default values for this character's properties
	AFP_player();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Movement
		// Handles input for moving forward and backward.
		UFUNCTION()
		void MoveForward(float Value);

		// Handles input for moving right and left.
		UFUNCTION()
		void MoveRight(float Value);

		// Sets jump flag when key is pressed.
		UFUNCTION()
		void StartJump();

		// Clears jump flag when key is released.
		UFUNCTION()
		void StopJump();


	//shooting
	
		// Function that handles firing projectiles.
		UFUNCTION()
		void Fire();

		UFUNCTION()
		void ResetCanFire();

		UFUNCTION()
		void StartFiring();

		UFUNCTION()
		void StopFiring();

		// Gun muzzle offset from the camera location.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

		bool CanFire = true;
		float FireRate = 0.25f;
		bool bIsFiring= false;
	

	//health
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float  Health = 100;

		float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	//XP
		UFUNCTION(BlueprintCallable, Category = "XP")
		void GainXP(float XPAmount);

		UFUNCTION(BlueprintCallable, Category = "XP")
		void LevelUp();

		UFUNCTION(BlueprintCallable, Category = "XP", BlueprintImplementableEvent)
		void LevelUpTRIGGER(); //for blueprint //ignore

		UPROPERTY(BlueprintReadWrite, Category = "XP")
			float XP = 0.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XP")
			int XPToLevel = 0.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XP")
			int Level = 0;

		UPROPERTY(VisibleAnywhere)
		class UUpgradeComponent* UpgradeComponent;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XP")
		TArray<FName> CurrentThreeUpgrades;

};
