// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Personagem.generated.h"

/**
 * 
 */
UCLASS()
class UNAKAKVINNE_API APersonagem : public APaperCharacter 
{
	GENERATED_BODY()
	
public:

	APersonagem();

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere) class USpringArmComponent* CameraBoom;
	UPROPERTY(EditAnywhere) class UCameraComponent* Camera;
	UPROPERTY(EditAnywhere) class UPaperFlipbook* MagoParado;
	UPROPERTY(EditAnywhere) class UPaperFlipbook* MagoAndando;
	
	
};