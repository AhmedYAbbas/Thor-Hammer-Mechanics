// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mjolnir.generated.h"

UCLASS()
class UNREAL_MICKEY_API AMjolnir : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMjolnir();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Mjolnir)
		FVector StartPosition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Mjolnir)
		FVector EndPosition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Mjolnir)
		float FlightSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Mjolnir)
		bool bFinalLoop;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
