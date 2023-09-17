// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floater.generated.h"

UCLASS()
class SECONDPROJECT_API AFloater : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AFloater();

	UPROPERTY(VisibleAnywhere, Category = "ActorMeshComponents")
	UStaticMeshComponent* StaticMesh;

	// Location used by SetActorLocation() when BeginPlay is called
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = floaterCategory)
	FVector InitLocation;

	// Location of the Actor when dragged in from the editor
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = floaterCategory)
	FVector PlacedLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = floaterCategory)
	bool bShouldFloat;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = floaterCategory)
	bool bInitializeFloaterLocations;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = floaterCategory)
	FVector WorldOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = floaterCategory)
	FVector InitialDirection;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FString floaterCategory = "Floater Variables";

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
