// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChessPiece.h"
#include "ChessBoard.generated.h"

UCLASS()
class ATTEMPT7_API AChessBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChessBoard();

	UPROPERTY()
	AChessPiece* pieces [64];

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void movePiece(AChessPiece* piece, int destination);
	UFUNCTION(BlueprintCallable)
	void takePiece(AChessPiece* taker, AChessPiece* takee, int destination);

};
