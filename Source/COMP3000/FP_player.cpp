
#include "FP_player.h"
#include <Kismet/GameplayStatics.h>

AFP_player::AFP_player() //constructor //initialises during editor time
{
	PrimaryActorTick.bCanEverTick = true;   
    
    PlayerUpgradeComponent = CreateDefaultSubobject<UUpgradeComponent>(TEXT("Player Upgrades C++")); // add component to player if (!PlayerUpgradeComponent)
    if (!PlayerUpgradeComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("UpgradeComponent is not set!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UpgradeComponent is set!"));

        PlayerUpgradeComponent->UpgradeDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/UpgradeDataTable"));
        if (!PlayerUpgradeComponent->UpgradeDataTable)
        {
            UE_LOG(LogTemp, Warning, TEXT("UpgradeComponentTable is not set!"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("UpgradeComponentTable is set!"));
        }
    }
    Tags.AddUnique("Player");
}

void AFP_player::BeginPlay() //initialises during runtime
{
	Super::BeginPlay();

    PlayerUpgradeComponent = NewObject<UUpgradeComponent>(this, UUpgradeComponent::StaticClass(), TEXT("Player Upgrades C++"), RF_NoFlags);
    PlayerUpgradeComponent->RegisterComponent(); // add component to player
    if (!PlayerUpgradeComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("UpgradeComponent is not set!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UpgradeComponent is set!"));

        PlayerUpgradeComponent->UpgradeDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/UpgradeDataTable"));
        if (!PlayerUpgradeComponent->UpgradeDataTable)
        {
            UE_LOG(LogTemp, Warning, TEXT("UpgradeComponentTable is not set!"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("UpgradeComponentTable is set!"));
        }
    }

    //starting player stats
    Health = 100;
    XP = 0;
    XPToLevel = 3.0f;
    Level = 0;
    FireRate = 0.25f;
    CanFire = true;
    bIsFiring = false;
    MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);
    ProjectileClass = AFPSProjectile::StaticClass();

    for (int32 i = 0; i < 3; ++i)
    {
        CurrentThreeUpgrades.Add(TEXT("Null Upgrade"));
    }
    if (PlayerUpgradeComponent)
    {
        PlayerUpgradeComponent->UnlockedUpgrades.Empty(); //wipe the map clean before starting;
    }
	else
	{
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("PLAYER UPGRADE COMPONENT NOT ATTACHED"));
	}



	check(GEngine != nullptr)
}

void AFP_player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    Seconds += DeltaTime;

    if (Seconds > 59.0f)
    {
        Minutes++;
        Seconds = 0;
    }
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
                Projectile = World->SpawnActor<AFPSProjectile>(
                    ProjectileClass, 
                    MuzzleLocation, 
                    MuzzleRotation, 
                    SpawnParams 
                    /*
                    val_Damage,
                    val_CollisionSphere,
                    val_ProjectileScale,
                    val_InitialSpeed,
                    val_MaxSpeed,
                    val_lifespan,
                    val_bShouldBounce,
                    val_Bounciness,
                    val_ExplosionRadius,
                    val_PierceCount
                    /**/
                );
                if (Projectile)
                {
                    //initial trajectory.
                    FVector LaunchDirection = MuzzleRotation.Vector();
                    Projectile->FireInDirection(LaunchDirection);

                    // Check for the "Extra Projectile" upgrade
                    int32 ExtraProjectiles = PlayerUpgradeComponent->QueryUpgrade("extra_projectile");
                    if (ExtraProjectiles > 0)
                    {
                        for (int32 i = 0; i < ExtraProjectiles; ++i)
                        {
                            // Offset the position of the extra projectiles slightly
                            //FVector Offset = FVector::RightVector * (i + 1) * 50.0f; // Adjust the offset as needed
                            //math random for y offset
                            float RandomYOffset = FMath::RandRange(-25.0f, 25.0f);
                            float RandomZOffset = FMath::RandRange(-25.0f, 25.0f);
                            MuzzleOffset.Set(125.0f, RandomYOffset, RandomZOffset); // x,y,z
                            MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

                            AFPSProjectile* ExtraProjectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
                            if (ExtraProjectile)
                            {
                                // Initial trajectory for the extra projectile
                                ExtraProjectile->FireInDirection(LaunchDirection);
                            }
                        }
                    }
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
    XP += XPAmount * XPModifier;
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
    if (PlayerUpgradeComponent)
    {
        CurrentThreeUpgrades = PlayerUpgradeComponent->FindThreeUpgrades();

        // Output the selected upgrade names to the console
        for (const FName& UpgradeName : CurrentThreeUpgrades)
        {
            FString UpgradeNameString = UpgradeName.ToString();
            UE_LOG(LogTemp, Warning, TEXT("Selected Upgrade Name : %s"), *UpgradeNameString);
        }

        LevelUpTRIGGER(); //event trigger for blueprint
        //ApplyUpgradeEffect();
    }
    else
    {
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("PLAYER UPGRADE COMPONENT NOT ATTACHED"));
	}
    //GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Player leveled up to level %d"), Level));

}

void AFP_player::ApplyUpgradeEffect() 
{    
    UE_LOG(LogTemp, Warning, TEXT("Upgrade ID: %d"), TempRow.UpgradeID);

    switch (TempRow.UpgradeID)
    {
    case 1://  Faster Fire Rate
        FireRate -= 0.025f;
        break;

    case 2://  Larger Projectile
        val_CollisionSphere += 3.0f;
        Projectile->CollisionComponent->InitSphereRadius(15.0f);
        val_ProjectileScale += 0.018f;
        Projectile->ProjectileMeshComponent->SetRelativeScale3D(FVector(val_ProjectileScale)); //visual size of projectile
        break;

    case 3://  Faster Projectile
        Projectile->ProjectileMovementComponent->InitialSpeed += 300.0f;
        Projectile->ProjectileMovementComponent->MaxSpeed += 300.0f;
        break;

    case 4://  Bouncing Projectile
        Projectile->ProjectileMovementComponent->bShouldBounce = true;
        Projectile->ProjectileMovementComponent->Bounciness += 1.0f;
        break;

    case 5://  Exploding Projectile
        break;

    case 6://  Extra Projectile
        val_ProjectileScale -= 0.01f;
        Projectile->ProjectileMeshComponent->SetRelativeScale3D(FVector(val_ProjectileScale)); //visual size of projectile

        //code is in the Fire function
        break;

    case 7://  More Damage
        Projectile->Damage += 5.0f;
        break;

    case 8://  Damage Over Time
        break;

    case 9://  Faster XP Gain
        XPModifier += 1.0f;
        break;

    case 10://  Super Rare
        break;

    default:
        // Unknown Upgrade
        // Handle unknown upgrade ID
        break;
    }
}
