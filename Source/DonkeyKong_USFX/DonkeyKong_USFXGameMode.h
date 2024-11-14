// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Plataforma.h"
#include "IJugador.h"
#include "DonkeyKong_USFXGameMode.generated.h"

class AMuro;

UCLASS(minimalapi)
class ADonkeyKong_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_USFXGameMode();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class AMono* mono;

private:
	class ABuilderTipoB* Constructor;


	//El Actor Ingeniero
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AArquitecto* Ingeniero;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	TArray<TSubclassOf<class AMuro>> Paredes;
	FVector Posicion;
	float segundos;
	AActor* Escenario;
	//para los enemigos
	TMap<int, APlataforma*> PosicionMapa;

	//para el decorador
	IIJugador* Personaje;

	class ATorreTiempo* torre;

	class AEnemigosFacade* Facade;

	//Observer
	class AEnemigoGargola* gargolaObserver;
	class AEnemigoDragon* dragonObserver;
	class AEnemigoAve* aveObserver;

	//Strategy
	class AEstrategiaZigzag* zigzag;
	class AEstrategiaSenoidal* senoidal;
	class AEnemigoAve* aveEstrategy;
	class AEnemigoDragon* dragonEstrategy;
	class AEnemigoGargola* gargolaEstrategy;


	class ADonkeyKong_USFXCharacter* Player2;

};



