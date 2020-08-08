// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnPiece.h"

APawnPiece::APawnPiece() 
{
	Super::pieceType = "PAWN"; //piece type
	Super::isBlack = true; //default value
	Super::isKing = false;

	UStaticMeshComponent* pawnMesh = CreateDefaultSubobject<UStaticMeshComponent>(*FString("PawnMesh"));
	pawnMesh -> SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UMaterial> LightMat(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Pine.M_Wood_Pine'"));
	if (LightMat.Object != NULL)
	{
		Super::lightMaterial = (UMaterial*)LightMat.Object;
	}
	else {
		Super::lightMaterial = NULL; //it complains without this?
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> DarkMat(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Walnut.M_Wood_Walnut'"));
	if (DarkMat.Object != NULL)
	{
		Super::darkMaterial = (UMaterial*)DarkMat.Object;
	}
	else {
		Super::darkMaterial = NULL; //it complains without this?
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> orangemat(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (orangemat.Object != NULL)
	{
		lightKingMat = (UMaterial*)orangemat.Object;
	}
	else {
		lightKingMat = NULL; //it complains without this?
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> bluemat(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Chrome.M_Metal_Chrome'"));
	if (bluemat.Object != NULL)
	{
		darkKingMat = (UMaterial*)bluemat.Object;
	}
	else {
		darkKingMat = NULL; //it complains without this?
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh> pawnAsset(TEXT("/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid"));

	if (pawnAsset.Succeeded()) {
		pawnMesh -> SetStaticMesh(pawnAsset.Object);
		pawnMesh -> SetMaterial(0, !isBlack ? (!isKing ? lightMaterial : lightKingMat) : (!isKing ? darkMaterial : darkKingMat));
		pawnMesh -> SetWorldScale3D(FVector(0.8, 0.8, 0.8));
	}

	Super::pieceModel = pawnMesh; //piece model
}