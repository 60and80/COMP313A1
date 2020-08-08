// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardTileActor.h"

//Wrapper class for a board tile, so that it can be clicked on/indexed. Can use a parameterised constructor,
//since it is only instantiated in the C++ code.

ABoardTileActor::ABoardTileActor() {
	isBlack = true;

	static ConstructorHelpers::FObjectFinder<UMaterial> LightMat(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Pine.M_Wood_Pine'"));
	if (LightMat.Object != NULL)
	{
		mat1 = (UMaterial*)LightMat.Object;
	}
	else {
		mat1 = NULL; //it complains without this?
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> DarkMat(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Walnut.M_Wood_Walnut'"));
	if (DarkMat.Object != NULL)
	{
		mat2 = (UMaterial*)DarkMat.Object;
	}
	else {
		mat2 = NULL; //it complains without this?
	}

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	tileMesh = (CreateDefaultSubobject<UStaticMeshComponent>(*FString("Mesh")));
	tileMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> tileAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	if (tileAsset.Succeeded())
	{
		tileMesh->SetStaticMesh(tileAsset.Object);
		
	}
}

bool ABoardTileActor::getIsBlack()
{
	return isBlack;
}

void ABoardTileActor::setIsBlack(bool newValue)
{
	isBlack = newValue;
	tileMesh->SetMaterial(0, isBlack ? mat1 : mat2);
	tileMesh->SetVisibility(true);
}

// Called when the game starts or when spawned
void ABoardTileActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoardTileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoardTileActor::setLocation(int newLocation) {
	location = newLocation;
}

int ABoardTileActor::getLocation(){
	return location;
}

