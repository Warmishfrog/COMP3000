// Fill out your copyright notice in the Description page of Project Settings.


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

	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	// 
	// debug
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using my player."));
	
}

// Called every frame
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

