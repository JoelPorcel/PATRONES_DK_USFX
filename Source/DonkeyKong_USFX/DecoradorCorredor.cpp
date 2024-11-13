// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorCorredor.h"
#include "DonkeyKong_USFXCharacter.h"
#include "IJugador.h"
#include "Decorador.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ADecoradorCorredor::ADecoradorCorredor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADecoradorCorredor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADecoradorCorredor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorCorredor::setCorrer(float _correr)
{
	//correr = Super::getCorrer() + _correr;
	//Jugador->setCorrer(correr);
	ADecorador::setCorrer( _correr);
}

void ADecoradorCorredor::setSaltar(float _salto)
{
	//saltar = Super::getSaltar() + _salto;
	//Jugador->setSaltar(correr);
	ADecorador::setSaltar(_salto);
}

float ADecoradorCorredor::getCorrer()
{
	return ADecorador::getCorrer();
}

float ADecoradorCorredor::getSaltar()
{
	return ADecorador::getSaltar();
}

