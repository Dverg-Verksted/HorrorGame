// It is owned by the company Dverg Verksted.

#include "Game/HUD/GameHUD.h"

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	if (EnableDebugHUD)
	{
		AddText(TEXT("Test function AddText"), FText::FromString("This AddText"));
		AddFloat(TEXT("Test function AddFloat"), 1.488f);
		AddInt(TEXT("Test function AddInt"), 228);
		AddBool(TEXT("Test function AddBool"), false);
		AddBool(TEXT("Test function AddBool"), true);
	}
}
