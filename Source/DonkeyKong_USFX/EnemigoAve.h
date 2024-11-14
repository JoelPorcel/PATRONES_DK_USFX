// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigos.h"
#include "ISuscriptor.h" //observer
#include "ITransfromar.h" //observer
#include "EnemigoAve.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AEnemigoAve : public AEnemigos, public IISuscriptor, public IITransfromar
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigoAve();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Componente de Malla Esquelética
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SkeletalMesh;

	// Asset de animación
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimSequence* MyAnimationAsset; // o UAnimMontage* MyAnimationAsset;

public:
	// Patron Facade
	void atacar() override;
	void vigilar() override;
	void eliminar() override;
	void eliminarEnemigo();
	void spawn(TMap<int, APlataforma*> _Posicion) override;

	//patron observer
	void Actualizar() override;
	void Transformar() override;
	void cancelar();
};