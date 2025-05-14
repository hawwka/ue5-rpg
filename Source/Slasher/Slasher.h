#pragma once

#include "CoreMinimal.h"
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 15, 20, FColor::Red, true);
