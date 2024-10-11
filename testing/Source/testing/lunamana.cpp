// Fill out your copyright notice in the Description page of Project Settings.


#include "lunamana.h"

// Sets default values
Alunamana::Alunamana()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Alunamana::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Alunamana::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Alunamana::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

