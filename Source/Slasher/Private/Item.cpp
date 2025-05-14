#include "Item.h"
#include "Slasher/Slasher.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector Location = GetActorLocation();

	DRAW_SPHERE(Location)
}


	
