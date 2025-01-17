// Fill out your copyright notice in the Description page of Project Settings.

#include "ChessBoard.h"
#include "PawnPiece.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values
AChessBoard::AChessBoard()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AChessBoard::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AChessBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChessBoard::movePiece(AChessPiece* piece, int destination)
{
	pieces[piece->getLocation()] = NULL;
	pieces[destination] = piece;
	piece->setLocation(destination);
}

void AChessBoard::takePiece(AChessPiece* taker, AChessPiece* takee, int destination)
{
	pieces[taker -> getLocation()] = NULL;
	takee->Destroy();
	pieces[destination] = taker;
	taker->setLocation(destination);
}
