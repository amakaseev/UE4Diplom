// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsWidget.h"
#include "GameFramework/PlayerInput.h"

bool USettingsWidget::GetInvertAxis(const FName axisName) const {
  return GetWorld()->GetFirstPlayerController()->PlayerInput->GetInvertAxis(axisName);
}

void USettingsWidget::SetInvertAxis(const FName axisName, bool invert) {
  if (invert != GetInvertAxis(axisName)) {
    GetWorld()->GetFirstPlayerController()->PlayerInput->InvertAxis(axisName);
  }
}

float void USettingsWidget::GetScaleAxis(const FName axisName) const {

}

void void USettingsWidget::SetScaleAxis(const FName axisName, float scale) {

}

