// Fill out your copyright notice in the Description page of Project Settings.


#include "NewGameModeBase.h"

void ANewGameModeBase::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr);

    // Display a debug message for five seconds. 
    // The -1 "Key" value argument prevents the message from being updated or refreshed.
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is MY GAME AHHAAHAHAH!"));
}