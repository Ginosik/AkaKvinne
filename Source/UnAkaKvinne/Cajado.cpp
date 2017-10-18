// Fill out your copyright notice in the Description page of Project Settings.

#include "Cajado.h"
#include "PaperFlipbookComponent.h"
#include "Engine/World.h"
#include "Magia.h"


// Sets default values
ACajado::ACajado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Flipbook = CreateDefaultSubobject <UPaperFlipbookComponent>(TEXT("Flipbook"));
	Flipbook->SetCollisionProfileName("NoCollision");
	RootComponent = Flipbook;


}

// Called when the game starts or when spawned
void ACajado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACajado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACajado::StartFire()
{
}

void ACajado::StopFire()
{
}

void ACajado::DoFire()
{
}

void ACajado::SetAmmoAmount(int NewAmount)
{
}

int ACajado::GetAmmoAmount()
{
	return 0;
}

