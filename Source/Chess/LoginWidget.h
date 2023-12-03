// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include <Components/TextBlock.h>
#include<Components/EditableTextBox.h>
#include<Components/Button.h>

#include "LoginWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHESS_API ULoginWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UEditableTextBox* IdEditableTextBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UEditableTextBox* PwEditableTextBox;
	UPROPERTY(meta = (BindWidget))
		class UButton* LoginBtn;

	UFUNCTION()
		void OnClickedLogin();
public:
	FTimerHandle _loginTimerHandle;
	float _startLoginTime;
};
