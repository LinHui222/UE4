// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

void UMyBlueprintFunctionLibrary::GetLocalIP(FString& TheIP, FString& ThePort)
{
	if (!GConfig)
	{
		return;
	}
	GConfig->GetString(
		TEXT("HTTP"),
		TEXT("Plane"),
		TheIP,
		GGameIni
	);
	GConfig->GetString(
		TEXT("HTTP"),
		TEXT("NetWork"),
		TheIP,
		GGameIni
	);
}
