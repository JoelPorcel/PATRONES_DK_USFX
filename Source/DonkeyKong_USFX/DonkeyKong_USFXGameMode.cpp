// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_USFXGameMode.h"
#include "DonkeyKong_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "TiendaMuros.h"
#include "FabricaMuros.h"
#include "Kismet/GameplayStatics.h"
#include "BuilderNiveles.h"
#include "BuilderTipoA.h"
#include "BuilderTipoB.h"
#include "Arquitecto.h"
#include "EnemigosFacade.h"
#include "DecoradorCorredor.h"
#include "DecoradorSaltador.h"
#include "AdaptadorProyectil.h"
//para el observer
#include "EnemigoAve.h"
#include "TorreTiempo.h"
#include "EnemigoDragon.h"
#include "EnemigoGargola.h"
//para el strategy
#include "EnemigoAve.h"
#include "EstrategiaZigzag.h"
#include "EstrategiaSenoidal.h"


ADonkeyKong_USFXGameMode::ADonkeyKong_USFXGameMode()
{
	// set default pawn class to our Blueprinted character
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//Paredes.Add(AMuroCongelado::StaticClass());
	//Paredes.Add(AMuroCongelado::StaticClass());
	//Paredes.Add(AMuroLadrillo::StaticClass());
	//Paredes.Add(AMuroPegajoso::StaticClass());
	//Paredes.Add(AMuroEspinoso::StaticClass());
}

void ADonkeyKong_USFXGameMode::BeginPlay()
{
	//metothd factory
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Constructor de GameMode en el mundo de DOnkey Kong")));
	AFabricaMuros* tienda = GetWorld()->SpawnActor<ATiendaMuros>(ATiendaMuros::StaticClass());
	AMuro* muro = tienda->EncargarMuro("Muro espinoso", FVector(580, 1040, 110), FRotator::ZeroRotator);
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Purple, FString::Printf(TEXT("%s"), *muro->ObtenerNombreDelMuro()));
	AMuro* muro2 = tienda->EncargarMuro("Muro ladrillo", FVector(580, 800, 110), FRotator::ZeroRotator);
	GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Purple, FString::Printf(TEXT("%s"), *muro2->ObtenerNombreDelMuro()));
	
	//builder
	Posicion = FVector(1206.8f, 1700.f, 180.f);
	Ingeniero = GetWorld()->SpawnActor<AArquitecto>(AArquitecto::StaticClass());
	Constructor = GetWorld()->SpawnActor<ABuilderTipoB>(ABuilderTipoB::StaticClass());
	Ingeniero->EstablecerConstructorNiveles(Constructor);
	Ingeniero->ConstruirNivel1(5, 10, Posicion, 1);
	PosicionMapa = Ingeniero->obtenerPlataformas();
	//segundos = 0;	


	//Facade
	Facade = GetWorld()->SpawnActor<AEnemigosFacade>(AEnemigosFacade::StaticClass());
	Facade->spawn("ave", 3, PosicionMapa);
	Facade->spawn("dragon", 3, PosicionMapa);

	//decorator
	APawn* Player1 = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	ADecoradorCorredor* corredor = GetWorld()->SpawnActor<ADecoradorCorredor>(ADecoradorCorredor::StaticClass());
	ADecoradorSaltador* saltador = GetWorld()->SpawnActor<ADecoradorSaltador>(ADecoradorSaltador::StaticClass());
	ADecoradorCorredor* corredor2 = GetWorld()->SpawnActor<ADecoradorCorredor>(ADecoradorCorredor::StaticClass());
	corredor->setJugador(Player1);
	Personaje = corredor;
	Personaje->setCorrer(1500);
	saltador->setJugador(corredor);
	Personaje = saltador;
	Personaje->setSaltar(2500);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Velocidad actual en el decorador       : %f"), Personaje->getCorrer()));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Velocidad actual en el decorador       : %f"), Personaje->getSaltar()));

	//adapter
	AAdaptadorProyectil* adaptador = GetWorld()->SpawnActor<AAdaptadorProyectil>(AAdaptadorProyectil::StaticClass());
	Player2 = Cast<ADonkeyKong_USFXCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Player2->setAdaptar(adaptador);


	//Observer
	torre = GetWorld()->SpawnActor<ATorreTiempo>(ATorreTiempo::StaticClass());
	dragonObserver = GetWorld()->SpawnActor<AEnemigoDragon>(AEnemigoDragon::StaticClass(), FVector(1550, -1210, 450), FRotator::ZeroRotator);
	gargolaObserver = GetWorld()->SpawnActor<AEnemigoGargola>(AEnemigoGargola::StaticClass(), FVector(1550, 1210, 700), FRotator::ZeroRotator);
	gargolaObserver->EstablecerTorreDelReloj(torre);
	dragonObserver->EstablecerTorreDelReloj(torre);
	torre->FijarLaHoraDelDia("Noche");
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Hora del dia: %s"), *torre->ObtenerTiempo()));



	//strategy
	zigzag = GetWorld()->SpawnActor<AEstrategiaZigzag>(AEstrategiaZigzag::StaticClass());
	senoidal = GetWorld()->SpawnActor<AEstrategiaSenoidal>(AEstrategiaSenoidal::StaticClass());
	gargolaEstrategy = GetWorld()->SpawnActor<AEnemigoGargola>(AEnemigoGargola::StaticClass(), FVector(1550, -1210, 700), FRotator::ZeroRotator);
	gargolaEstrategy->AlterarManiobras(zigzag);
	gargolaEstrategy->Emplear();
}

void ADonkeyKong_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	segundos += DeltaTime;
	if (segundos >= 20 && segundos <=20.01) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cambio con el FACADEEEEE")));
		//UGameplayStatics::OpenLevel(GetWorld(), FName("nivel2"));
		//segundos = 0;
		//Facade->vigilar();
		torre->FijarLaHoraDelDia("Dia");
		gargolaEstrategy->AlterarManiobras(senoidal);
	}
	if (segundos >= 20 && segundos <= 20.01) torre->FijarLaHoraDelDia("Noche");
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cambio de nivel")));
}