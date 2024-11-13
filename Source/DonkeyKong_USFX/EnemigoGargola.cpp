// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoGargola.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
//para el observer
#include "TorreTiempo.h"
#include "Publicador.h"

// Sets default values
AEnemigoGargola::AEnemigoGargola()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/QuadrapedCreatures/Griffon/Meshes/SK_Griffon.SK_Griffon'"));
    if (MeshAsset.Succeeded())
    {
        SkeletalMesh->SetSkeletalMesh(MeshAsset.Object);
    }
    SkeletalMesh->SetupAttachment(RootComponent);
    SkeletalMesh->SetRelativeScale3D(FVector(0.8f, 0.8f, 0.8f));
    SkeletalMesh->SetRelativeLocation(FVector(0.0f, 0.f, -50.0f));
    static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimationAsset(TEXT("AnimSequence'/Game/QuadrapedCreatures/Griffon/Animations/ANIM_Griffon_FlyNormal.ANIM_Griffon_FlyNormal'"));
    if (AnimationAsset.Succeeded())
    {
        MyAnimationAsset = AnimationAsset.Object;
    }
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;
    //facade
    moverse = true;
    incremento = 4.0f;
}

// Called when the game starts or when spawned
void AEnemigoGargola::BeginPlay()
{
	Super::BeginPlay();
    SkeletalMesh->PlayAnimation(MyAnimationAsset, true);
}

// Called every frame
void AEnemigoGargola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEnemigoGargola::spawn(TMap<int, APlataforma*> _Posicion)
{
    TArray<int> Llaves;
    _Posicion.GetKeys(Llaves);
    int Llave = Llaves[FMath::RandRange(0, Llaves.Num() - 1)];
    if (_Posicion[Llave]) {
        Plataforma = _Posicion[Llave];
        if (Plataforma)
        {
            FVector Posicion3 = Plataforma->GetActorLocation();
            Posicion3.Z += 400.0f;
            SetActorLocation(Posicion3);
        }
    }
    PosicionInicial = GetActorLocation();
    LimiteInicial = PosicionInicial + FVector(0, 2000, 0);
    LimiteFinal = PosicionInicial + FVector(0, -2000, 0);
}

void AEnemigoGargola::atacar()
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
        GetWorld()->GetTimerManager().SetTimer(Timer, this, &AEnemigoGargola::atacar, 0.009f, true);  //activar para el FACADE
        //GetWorld()->GetTimerManager().SetTimer(Timer, [this, Player1]() {atacar(); }, 0.009f, true);
    }
}

void AEnemigoGargola::vigilar()
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
    GetWorld()->GetTimerManager().SetTimer(Timer, this, &AEnemigoGargola::vigilar, 0.001f, true); //activar para el FACADE
    //GetWorld()->GetTimerManager().SetTimer(Timer, [this]() {vigilar(); }, 0.001f, true);
}

void AEnemigoGargola::eliminar()
{
    GetWorld()->GetTimerManager().SetTimer(morir, this, &AEnemigoGargola::eliminarEnemigo, 20.0f, false);
}

void AEnemigoGargola::eliminarEnemigo()
{
    Destroy();
}

//patron observer

void AEnemigoGargola::Actualizar()
{
    Transformar();
}

void AEnemigoGargola::Transformar()
{
    if (TorreDelReloj->ObtenerTiempo() == "Noche")
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Noche te atacannnnnn"));
        observer = true;
        PosicionInicial = GetActorLocation();
        LimiteInicial = PosicionInicial + FVector(0, 2000, 0);
        LimiteFinal = PosicionInicial + FVector(0, -2000, 0);
        GetWorld()->GetTimerManager().SetTimer(observar, this, &AEnemigoGargola::vigilar, 0.009f, observer);
    }
    else if (TorreDelReloj->ObtenerTiempo() == "Dia")
    {
        observer = false;
        GetWorld()->GetTimerManager().SetTimer(observar, this, &AEnemigoGargola::atacar, 0.009f, !observer);
    }
}

void AEnemigoGargola::cancelar()
{
    TorreDelReloj->CancelarSuscripcion(this);
}
