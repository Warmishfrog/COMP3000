
#include "FP_player.h"

// Sets default values
AFP_player::AFP_player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFP_player::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr)
}

// Called every frame
void AFP_player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // debug log player location
    //FVector MyCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
    //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Player Location: %s"), *MyCharacter.ToString()));

}

// Called to bind functionality to input
void AFP_player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &AFP_player::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFP_player::MoveRight);
	// Set up "look" bindings.
	PlayerInputComponent->BindAxis("Turn", this, &AFP_player::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFP_player::AddControllerPitchInput);
	// Set up "action" bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFP_player::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFP_player::StopJump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFP_player::StartFiring);
    PlayerInputComponent->BindAction("Fire", IE_Released, this, &AFP_player::StopFiring);

    //

}

void AFP_player::StartFiring()
{
    bIsFiring = true;
    GetWorldTimerManager().SetTimer(AutoFireRateTimerHandle, this, &AFP_player::Fire, FireRate, true);
    Fire(); // Initial shot when button is pressed
}

void AFP_player::StopFiring()
{
    bIsFiring = false;
    GetWorldTimerManager().ClearTimer(AutoFireRateTimerHandle);
}

void AFP_player::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AFP_player::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AFP_player::StartJump()
{
	bPressedJump = true;
}

void AFP_player::StopJump()
{
	bPressedJump = false;
}

void AFP_player::Fire()
{
    
    // Attempt to fire a projectile.
    if (ProjectileClass)
    {
        // Get the camera transform.
        FVector CameraLocation;
        FRotator CameraRotation;
        GetActorEyesViewPoint(CameraLocation, CameraRotation);

        // Set MuzzleOffset to spawn projectiles slightly in front of the camera.
        MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

        // Transform MuzzleOffset from camera space to world space.
        FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

        // Skew the aim to be slightly upwards.
        FRotator MuzzleRotation = CameraRotation;
        MuzzleRotation.Pitch += 5.0f;

        UWorld* World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = GetInstigator();

            if (CanFire)
            {
                // Spawn the projectile at the muzzle.
                AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
                if (Projectile)
                {
                    // Set the projectile's initial trajectory.
                    FVector LaunchDirection = MuzzleRotation.Vector();
                    Projectile->FireInDirection(LaunchDirection);
                }

                CanFire = false; // Set to false to prevent firing during the cooldown period
                GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &AFP_player::ResetCanFire, FireRate, false);
            }
        }
    }
}

void AFP_player::ResetCanFire()
{
    CanFire = true; // Set to true to allow firing again after the cooldown period
}

