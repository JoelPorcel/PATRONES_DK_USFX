// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDragon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TorreTiempo.h"
#include "Publicador.h"

// Sets default values
AEnemigoDragon::AEnemigoDragon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/FourEvilDragonsHP/Meshes/DragonTheUsurper/DragonTheUsurperSK.DragonTheUsurperSK'"));
    if (MeshAsset.Succeeded())
    {
        SkeletalMesh->SetSkeletalMesh(MeshAsset.Object);
    }
    SkeletalMesh->SetupAttachment(RootComponent);
    SkeletalMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    SkeletalMesh->SetRelativeLocation(FVector(0.0f, 0.f, -400.0f));
    // Cargar la animaci�n
    static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimationAsset(TEXT("AnimSequence'/Game/FourEvilDragonsHP/Animations/DragonTheUsurper/FlyForwardAnim.FlyForwardAnim'"));
    if (AnimationAsset.Succeeded())
    {
        MyAnimationAsset = AnimationAsset.Object;
    }
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;
    //facade
    moverse = true;
    incremento = 6.0f;
}

// Called when the game starts or when spawned
void AEnemigoDragon::BeginPlay()
{
	Super::BeginPlay();
    if (MyAnimationAsset && SkeletalMesh)
    {
        SkeletalMesh->PlayAnimation(MyAnimationAsset, true);
    }
}

// Called every frame
void AEnemigoDragon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigoDragon::spawn(TMap<int, APlataforma*> _Posicion)
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

void AEnemigoDragon::atacar()
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
        GetWorld()->GetTimerManager().SetTimer(Timer, this, &AEnemigoDragon::atacar, 0.009f, true);  //activar para el FACADE
        //GetWorld()->GetTimerManager().SetTimer(Timer, [this, Player1]() {atacar(); }, 0.009f, true);
    }
}

void AEnemigoDragon::vigilar()
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
    GetWorld()->GetTimerManager().SetTimer(Timer, this, &AEnemigoDragon::vigilar, 0.001f, true); //activar para el FACADE
    //GetWorld()->GetTimerManager().SetTimer(Timer, [this]() {vigilar(); }, 0.001f, true);
}

void AEnemigoDragon::eliminar()
{
    GetWorld()->GetTimerManager().SetTimer(morir, this, &AEnemigoDragon::eliminarEnemigo, 20.0f, false);
}

void AEnemigoDragon::eliminarEnemigo()
{
    Destroy();
}

//patron observer
void AEnemigoDragon::Actualizar()
{
    Transformar();
}

void AEnemigoDragon::Transformar()
{
    if (TorreDelReloj->ObtenerTiempo() == "Noche")
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Noche te atacannnnnn"));
        PosicionInicial = GetActorLocation();
        LimiteInicial = PosicionInicial + FVector(0, 2000, 0);
        LimiteFinal = PosicionInicial + FVector(0, -2000, 0);
        GetWorld()->GetTimerManager().SetTimer(observar, this, &AEnemigoDragon::vigilar, 0.009f, true);
    }
    else if (TorreDelReloj->ObtenerTiempo() == "Dia")
    {
        GetWorld()->GetTimerManager().SetTimer(observar, this, &AEnemigoDragon::atacar, 0.009f, true);
    }
}

void AEnemigoDragon::cancelar()
{
    TorreDelReloj->CancelarSuscripcion(this);
}
