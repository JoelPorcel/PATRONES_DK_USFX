// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAve.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
//para el observer
#include "TorreTiempo.h"
#include "Publicador.h"

// Sets default values
AEnemigoAve::AEnemigoAve()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/AnimalVarietyPack/Crow/Meshes/SK_Crow.SK_Crow'"));
    if (MeshAsset.Succeeded())
    {
        SkeletalMesh->SetSkeletalMesh(MeshAsset.Object); 
    }
    SkeletalMesh->SetupAttachment(RootComponent);
	SkeletalMesh->SetRelativeScale3D(FVector(3.5f, 3.5f, 3.5f));
    SkeletalMesh->SetRelativeLocation(FVector(0.0f,0.f, -50.0f)); 
    // Cargar la animación
    static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimationAsset(TEXT("AnimSequence'/Game/AnimalVarietyPack/Crow/Animations/ANIM_Crow_Fly.ANIM_Crow_Fly'"));
    if (AnimationAsset.Succeeded())
    {
        MyAnimationAsset = AnimationAsset.Object;
    }
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;
    //facade
    moverse = true;
	incremento = 2.0f;
}

// Called when the game starts or when spawned
void AEnemigoAve::BeginPlay()
{
	Super::BeginPlay();
    if (MyAnimationAsset && SkeletalMesh)
    {
        SkeletalMesh->PlayAnimation(MyAnimationAsset, true);
    }
}

// Called every frame
void AEnemigoAve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigoAve::spawn(TMap<int, APlataforma*> _Posicion)
{
    TArray<int> Llaves;
    _Posicion.GetKeys(Llaves);
    int Llave = Llaves[FMath::RandRange(0, Llaves.Num() - 1)];
    if (_Posicion[Llave]) {
        Plataforma = _Posicion[Llave];
        if (Plataforma)
        {
            FVector Posicion3 = Plataforma->GetActorLocation();
            // Ajusta la posición nuevamente si es necesario
            Posicion3.Z += 400.0f;
            SetActorLocation(Posicion3);
        }
    }
    PosicionInicial = GetActorLocation();
    LimiteInicial = PosicionInicial + FVector(0, 2000, 0);
    LimiteFinal = PosicionInicial + FVector(0, -2000, 0);
}

void AEnemigoAve::atacar()
{
    APawn* Player1 = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (Player1) {
        FVector Direction = (Player1->GetActorLocation() - GetActorLocation()).GetSafeNormal();
        // Mover directamente el actor
        FVector NewLocation = GetActorLocation() + (Direction * 10.0f);
        SetActorLocation(NewLocation);
        FRotator NewRotation = Direction.Rotation();
        NewRotation.Pitch = 0.0f;
        NewRotation.Roll = 0.0f;
        NewRotation.Yaw > 0 ? NewRotation.Yaw = 0 : NewRotation.Yaw = 180;
        SetActorRotation(NewRotation);
		GetWorld()->GetTimerManager().SetTimer(Timer, this, &AEnemigoAve::atacar, 0.009f, true);  //activar para el FACADE
        //GetWorld()->GetTimerManager().SetTimer(Timer, [this, Player1]() {atacar(); }, 0.009f, true);
    }
}

void AEnemigoAve::vigilar()
{
	posicionActual = GetActorLocation();
	mirar = GetActorRotation();
    if (moverse)
    {
        if (posicionActual.Y <= LimiteInicial.Y) {
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moverse"));
            posicionActual.Y += incremento;
			mirar.Yaw = 0;
        }
        else moverse = false;
    }
    else
    {
        if (posicionActual.Y >= LimiteFinal.Y) {
            posicionActual.Y -= incremento;
			mirar.Yaw = 180;
        }
        else moverse = true;
    }
    SetActorLocation(posicionActual);
	SetActorRotation(mirar);
    GetWorld()->GetTimerManager().SetTimer(Timer, this, &AEnemigoAve::vigilar, 0.001f, true); //activar para el FACADE
	//GetWorld()->GetTimerManager().SetTimer(Timer, [this]() {vigilar(); }, 0.001f, true);
}

void AEnemigoAve::eliminar()
{
    GetWorld()->GetTimerManager().SetTimer(morir, this, &AEnemigoAve::eliminarEnemigo, 20.0f, false);
}

void AEnemigoAve::eliminarEnemigo()
{
	Destroy();
}

//patron observer

void AEnemigoAve::Actualizar()
{
	Transformar();
}

void AEnemigoAve::Transformar()
{
	if (TorreDelReloj->ObtenerTiempo() == "Noche")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Noche te atacannnnnn"));
        PosicionInicial = GetActorLocation();
        LimiteInicial = PosicionInicial + FVector(0.f, 2000.f, 0.f);
        LimiteFinal = PosicionInicial + FVector(0.f, -2000, 0.f);
		GetWorld()->GetTimerManager().SetTimer(observar, this, &AEnemigoAve::vigilar, 0.009f, true);
	} 
    else if(TorreDelReloj->ObtenerTiempo() == "Dia")
	{
		GetWorld()->GetTimerManager().SetTimer(observar, this, &AEnemigoAve::atacar, 0.009f, true);
	}
}

void AEnemigoAve::cancelar()
{
	TorreDelReloj->CancelarSuscripcion(this);
}
