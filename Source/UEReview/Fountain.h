// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UEReview.h"
#include "GameFramework/Actor.h"
#include"GameFramework/RotatingMovementComponent.h"
#include "Fountain.generated.h"

UCLASS()
class UEREVIEW_API AFountain : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* water;


	UPROPERTY(VisibleAnywhere)
		UPointLightComponent* light;


	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* splash;

	UPROPERTY(EditAnywhere,Category=ID)
		int32 ID;


	UPROPERTY(VisibleAnywhere)
		URotatingMovementComponent* movement;

private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		float RotateSpeed;
};
