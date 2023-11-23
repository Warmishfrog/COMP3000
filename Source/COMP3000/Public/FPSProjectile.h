// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FPSProjectile.generated.h"

UCLASS()
class COMP3000_API AFPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sphere collision component.
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComponent;

	// Projectile movement component.
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	// Projectile mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	UStaticMeshComponent* ProjectileMeshComponent;

	// Projectile material
	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
	UMaterialInstanceDynamic* ProjectileMaterialInstance;

	// Function that initializes the projectile's velocity in the shoot direction.
    void FireInDirection(const FVector& ShootDirection);

	// Function that is called when the projectile hits something.
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere, Category = Projectile)
	float val_InitialSpeed = 1000.0f;
	UPROPERTY(EditAnywhere, Category = Projectile)
	float val_MaxSpeed = 3000.0f;
	UPROPERTY(EditAnywhere, Category = Projectile)
	bool val_bRotationFollowsVelocity = true;
	UPROPERTY(EditAnywhere, Category = Projectile)
	bool val_bShouldBounce = false;
	UPROPERTY(EditAnywhere, Category = Projectile)
	float val_Bounciness = 0.1f;
	UPROPERTY(EditAnywhere, Category = Projectile)
	float val_ProjectileGravityScale = .1f;
	UPROPERTY(EditAnywhere, Category = Projectile)
	float val_lifespan = 5.0f;

};
