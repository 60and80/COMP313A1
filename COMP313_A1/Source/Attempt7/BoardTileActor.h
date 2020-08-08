// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardTileActor.generated.h"

UCLASS()
class ATTEMPT7_API ABoardTileActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABoardTileActor();
	// Sets default values for this actor's properties

	UPROPERTY()
	bool isBlack;

	int location;

	UStaticMeshComponent* tileMesh;
	
	UMaterial* mat1;
	UMaterial* mat2;

	UFUNCTION(BlueprintCallable)
	bool getIsBlack();

	UFUNCTION(BlueprintCallable)
	void setIsBlack(bool newValue);

	UFUNCTION(BlueprintCallable)
	void setLocation(int newLocation);

	UFUNCTION(BlueprintCallable)
	int getLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
