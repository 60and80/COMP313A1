// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Runtime\InputCore\Classes\InputCoreTypes.h>
#include "ChessPiece.generated.h"

UCLASS()
class ATTEMPT7_API AChessPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChessPiece();

	UPROPERTY(EditAnywhere)
	FString pieceType; //What type of piece this is. Used for a hardcoded, hacky solution to moving

	UPROPERTY(EditAnywhere)
	bool isBlack; //whether the piece is black or white

	UFUNCTION(BlueprintCallable)
	void setIsBlack(bool newValue);

	UFUNCTION(BlueprintCallable)
	bool getIsBlack();

	UPROPERTY(Instanced, EditAnywhere)
	UStaticMeshComponent* pieceModel;

	UPROPERTY()
	UMaterial* lightMaterial;

	UPROPERTY()
	UMaterial* darkMaterial;

	UPROPERTY()
	UMaterial* lightKingMat;

	UPROPERTY()
	UMaterial* darkKingMat;

	//handling for position of piece
	int location;

	UFUNCTION(BlueprintCallable)
	void setLocation(int newLocation);

	UFUNCTION(BlueprintCallable)
	int getLocation();

	UPROPERTY()
	bool isKing;

	UFUNCTION(BlueprintCallable)
	void setIsKing(bool king);

	UFUNCTION(BlueprintCallable)
	bool getIsKing();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void PostEditChangeProperty(struct FPropertyChangedEvent& e);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
