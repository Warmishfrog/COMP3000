
#include "FP_player.h"
#include <Kismet/GameplayStatics.h>

AFP_player::AFP_player()
{
	PrimaryActorTick.bCanEverTick = true;

    UpgradeComponent = CreateDefaultSubobject<UUpgradeComponent>(TEXT("Player Upgrades")); // add component to player

}

void AFP_player::BeginPlay()
{
	Super::BeginPlay();

    //starting player stats
    Health = 100;
    XP = 0;
    XPToLevel = 5.0f;
    Level = 0;
    FireRate = 0.25f;
    CanFire = true;
    bIsFiring = false;
    MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);
    ProjectileClass = AFPSProjectile::StaticClass();




	check(GEngine != nullptr)
}

void AFP_player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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
                // spawn from muzzle
                AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
                if (Projectile)
                {
                    //initial trajectory.
                    FVector LaunchDirection = MuzzleRotation.Vector();
                    Projectile->FireInDirection(LaunchDirection);
                }

                CanFire = false; // start of cooldown period
                GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &AFP_player::ResetCanFire, FireRate, false);
            }
        }
    }
}

void AFP_player::ResetCanFire()
{
    CanFire = true; // end of cooldown period
}

float AFP_player::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    float DamageCaused = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
    
    DamageCaused =  FMath::Min(Health, DamageCaused);
	Health -= DamageCaused;
    //UE_LOG(LogTemp, Log, TEXT("Damage amount: %f"), DamageAmount);
    GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Player is taking damage"));
    if (Health <= 0)
    {
        GEngine->AddOnScreenDebugMessage(-1, 99.f, FColor::Red, TEXT("Player is DEAD"));
        UGameplayStatics::OpenLevel(GetWorld(), FName("Menu")); //temp fix //change this later to be more smooth
	}
    return 0.0f;
}

void AFP_player::GainXP(float XPAmount)
{
    XP += XPAmount;
        //GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Player gained %f XP"), XPAmount));
        //GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Player has %f XP"), XP));
	if (XP >= XPToLevel)
	{
		LevelUp();
	}
}

void AFP_player::LevelUp()
{
    Level++;
    XP -= XPToLevel;
    XPToLevel *= 1.5f;

    CurrentThreeUpgrades = UpgradeComponent->FindThreeUpgrades();

    // Output the selected upgrade names to the console
    for (const FName& UpgradeName : CurrentThreeUpgrades)
    {
        FString UpgradeNameString = UpgradeName.ToString();
        UE_LOG(LogTemp, Warning, TEXT("Selected Upgrade Name : %s"), *UpgradeNameString);
    }

    LevelUpTRIGGER(); //event trigger for blueprint
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Player leveled up to level %d"), Level));
   
}

