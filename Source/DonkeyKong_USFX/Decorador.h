// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IJugador.h"
#include "Decorador.generated.h"

UCLASS()
class DONKEYKONG_USFX_API ADecorador : public AActor, public IIJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	IIJugador* Jugador;
	float saltar;
	float correr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void setJugador(AActor* jugador);


	void setCorrer(float _correr) override;
	void setSaltar(float _salto) override;
	float getCorrer() override;
	float getSaltar() override;
};
