// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsWidget.generated.h"

/**
 *
 */
UCLASS()
class RLS_API USettingsWidget : public UUserWidget
{
  GENERATED_BODY()

  UFUNCTION(BlueprintPure, Category = "Input")
  bool GetInvertAxis(const FName axisName) const;

  UFUNCTION(BlueprintCallable, Category = "Input")
  void SetInvertAxis(const FName axisName, bool invert);

  UFUNCTION(BlueprintPure, Category = "Input")
  float GetScaleAxis(const FName axisName) const;

  UFUNCTION(BlueprintCallable, Category = "Input")
  void SetScaleAxis(const FName axisName, float scale);
};
