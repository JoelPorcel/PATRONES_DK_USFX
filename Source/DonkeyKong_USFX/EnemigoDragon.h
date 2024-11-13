// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigos.h"
#include "ISuscriptor.h" //observer
#include "ITransfromar.h" //observer
#include "EnemigoDragon.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AEnemigoDragon : public AEnemigos, public IISuscriptor, public IITransfromar
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoDragon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Componente de Malla Esquel�tica
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SkeletalMesh;

	// Asset de animaci�n
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
	void  Actualizar() override;
	void Transformar() override;
	void cancelar();
};
