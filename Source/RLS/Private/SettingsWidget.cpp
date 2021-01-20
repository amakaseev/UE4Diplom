// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsWidget.h"
#include "GameFramework/PlayerInput.h"

bool USettingsWidget::GetInvertAxis(const FName axisName) const {
	return GetWorld()->GetFirstPlayerController()->PlayerInput->GetInvertAxis(axisName);
}

void USettingsWidget::SetInvertAxis(const FName axisName, bool invert) {
	auto playerInput = GetWorld()->GetFirstPlayerController()->PlayerInput;
	if (invert != GetInvertAxis(axisName)) {
		playerInput->InvertAxis(axisName);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
}
