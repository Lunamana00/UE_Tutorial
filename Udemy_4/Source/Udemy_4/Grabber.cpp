// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	UWorld* World = GetWorld();
	float Time = World->TimeSeconds;
	UE_LOG(LogTemp, Display, TEXT(" %f"), Time);
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Cyan);

	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
	FHitResult HitResult;
	bool HasHit = World->SweepSingleByChannel(HitResult,Start,End,FQuat::Identity, ECC_GameTraceChannel2,Sphere);

	if (HasHit) {
		AActor* HitActor = HitResult.GetActor();
		UE_LOG(LogTemp, Display, TEXT("HITACTOR %s"), *HitActor->GetActorNameOrLabel());
	}

	// ...
}

