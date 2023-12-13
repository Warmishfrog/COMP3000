// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectile.h"
#include <BasicEnemy.h>
#include "Engine/DamageEvents.h"

// Sets default values
AFPSProjectile::AFPSProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    if (!RootComponent)
    {
        RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
    }

    if (!CollisionComponent)
    {
        // Use a sphere as a simple collision representation.
        CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
        // Set the sphere's collision profile name to "Projectile".
        CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
        // Event called when component hits something.
        CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnHit);
        // Set the sphere's collision radius.
        CollisionComponent->InitSphereRadius(15.0f);
        // Set the root component to be the collision component.
        RootComponent = CollisionComponent;
    }

    if (!ProjectileMovementComponent)
    {
        // Use this component to drive this projectile's movement.
        ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
        ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
        ProjectileMovementComponent->InitialSpeed = val_InitialSpeed;
        ProjectileMovementComponent->MaxSpeed = val_MaxSpeed;
        ProjectileMovementComponent->bRotationFollowsVelocity = val_bRotationFollowsVelocity;
        ProjectileMovementComponent->bShouldBounce = val_bShouldBounce;
        ProjectileMovementComponent->Bounciness = val_Bounciness;
        ProjectileMovementComponent->ProjectileGravityScale = val_ProjectileGravityScale;
    }
    if (!ProjectileMeshComponent)
    {
        ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
        static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("/Script/Engine.StaticMesh'/Game/Sphere.Sphere'"));
        if (Mesh.Succeeded())
        {
            ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
        }
        static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("/Script/Engine.Material'/Game/SphereMaterial.SphereMaterial'"));
        if (Material.Succeeded())
        {
            ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
        }
        ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
        ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
        ProjectileMeshComponent->SetupAttachment(RootComponent);
    }
    // Delete the projectile after X seconds.
    InitialLifeSpan = val_lifespan;
}

// Called when the game starts or when spawned
void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function that initializes the projectile's velocity in the shoot direction.
void AFPSProjectile::FireInDirection(const FVector& ShootDirection)
{
    ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

// Function that is called when the projectile hits something.
void AFPSProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    if (OtherActor != this)
    {
        //if (OtherComponent->IsSimulatingPhysics())
        {
            //OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
           

            ABasicEnemy* HitBasicEnemy = Cast<ABasicEnemy>(OtherActor);
            if (HitBasicEnemy)
            {

                AController* ProjectileInstigatorController = GetInstigatorController(); // Get the controller of the actor that fired the projectile

                HitBasicEnemy->TakeDamage(10.0f, FDamageEvent(), ProjectileInstigatorController, this);
                Destroy();

            }
        }
    }    
    else {
        Destroy();
    }
}

