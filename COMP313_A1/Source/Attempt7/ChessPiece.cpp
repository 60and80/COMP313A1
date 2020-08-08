// Fill out your copyright notice in the Description page of Project Settings.


#include "ChessPiece.h"

// Sets default values
AChessPiece::AChessPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AChessPiece::setLocation(int newLocation)
{
	location = newLocation;
}

int AChessPiece::getLocation()
{
	return location;
}

void AChessPiece::setIsKing(bool king)
{
	isKing = king;
}

bool AChessPiece::getIsKing()
{
	return isKing;
}

// Called when the game starts or when spawned
void AChessPiece::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChessPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//Updates the colour of the piece when "isBlack" is changed
void AChessPiece::PostEditChangeProperty(struct FPropertyChangedEvent& e) {
	Super::PostEditChangeProperty(e);
	FName PropertyName = e.Property->GetFName();
	if (PropertyName.Compare(FName("isBlack")) == 0)
	{
		pieceModel -> SetMaterial(0, !isBlack ? (!isKing ? lightMaterial : lightKingMat): (!isKing ? darkMaterial : darkKingMat));
		pieceModel -> SetVisibility(true);
	}
}

void AChessPiece::setIsBlack(bool newValue) {
	isBlack = newValue;
	pieceModel->SetMaterial(0, !isBlack ? (!isKing ? lightMaterial : lightKingMat) : (!isKing ? darkMaterial : darkKingMat));
	pieceModel->SetVisibility(true);
}

bool AChessPiece::getIsBlack()
{
	return isBlack;
}


