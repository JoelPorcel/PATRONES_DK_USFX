// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigos.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
//para el observer
#include "TorreTiempo.h"
#include "Publicador.h"

// Sets default values
AEnemigos::AEnemigos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(100.f, 0.0f);
	GetCharacterMovement()->GravityScale = 20.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

// Called when the game starts or when spawned
void AEnemigos::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//FACADE
void AEnemigos::RealizarTareas(FString& _Tareas)
{
	if (_Tareas.Equals("atacar")) {
		atacar();
	}
	else if (_Tareas.Equals("Vigilar")) {
		vigilar();
	}
	else if (_Tareas.Equals("Eliminar")) {
		eliminar();
	}
	else if (_Tareas.Equals("aparecer")) {
		spawn(Posicion);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			FString::Printf(TEXT("No existe una tarea")));
	}
}

void AEnemigos::ValidarTareas(TArray<FString>& _Tareas, TMap<int, APlataforma*> _Posicion)
{
	Posicion = _Posicion;
	for (FString& mytarea : _Tareas) {
		RealizarTareas(mytarea);
	}
}


//OBSERVER
void AEnemigos::EstablecerTorreDelReloj(ATorreTiempo* _TorreDelReloj)
{
	TorreDelReloj = _TorreDelReloj;
	TorreDelReloj->Suscribirse(this);
}


//STRATEGY
void AEnemigos::AlterarManiobras(AActor* _EstrategiaDeBatalla)
{
	Estrategia = Cast<IIEstrategiaMovimiento>(_EstrategiaDeBatalla);
	if (!Estrategia) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Casteo no establecido")));
	}
	AsignarPosicion();
}

void AEnemigos::Emplear()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Emplear"));
	if (Estrategia) {
		Estrategia->Movimiento();
		GetWorld()->GetTimerManager().SetTimer(mover, this, &AEnemigos::Emplear, 0.009f, true);
	}
}

void AEnemigos::AsignarPosicion()
{
	if (Estrategia) {
		Estrategia->ObtenerPosicion(this);
	}
}