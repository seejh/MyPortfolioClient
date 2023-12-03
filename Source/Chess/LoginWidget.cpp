// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginWidget.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include"MyGameInstance.h"

void ULoginWidget::NativeConstruct()
{
	Super::NativeConstruct();
	LoginBtn->OnClicked.AddDynamic(this, &ULoginWidget::OnClickedLogin);
}

void ULoginWidget::OnClickedLogin()
{
	//LoginBtn->SetIsEnabled(false);

	FString id(IdEditableTextBox->GetText().ToString());
	FString pw(PwEditableTextBox->GetText().ToString());

	UMyGameInstance* gameInstance = Cast<UMyGameInstance>(GetGameInstance());
	gameInstance->Login(id, pw);
	/*
	UE_LOG(LogTemp, Warning, TEXT("ID : %s"), *id);
	UE_LOG(LogTemp, Warning, TEXT("PW : %s"), *pw);
	UMyGameInstance* gameInstance = Cast<UMyGameInstance>(GetGameInstance());
	gameInstance->Login(id, pw);

	_startLoginTime = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Error, TEXT("%s"), *FString::SanitizeFloat(_startLoginTime));

	GetWorld()->GetTimerManager().SetTimer(_loginTimerHandle, FTimerDelegate::CreateLambda(
		[&](){
			// login recv ok
			if (Cast<UMyGameInstance>(GetGameInstance())->_isLogined) {

				GetWorld()->GetTimerManager().ClearTimer(_loginTimerHandle);
				LoginBtn->SetIsEnabled(true);
				return;
			}

			// timeout
			float nowTime = GetWorld()->GetTimeSeconds();
			if (nowTime - _startLoginTime > 3) {
				UE_LOG(LogTemp, Warning, TEXT("in"));
				GetWorld()->GetTimerManager().ClearTimer(_loginTimerHandle);
				LoginBtn->SetIsEnabled(true);
				return;
			}
			UE_LOG(LogTemp, Error, TEXT("not logined"));
			UE_LOG(LogTemp, Error, TEXT("%s"), *FString::SanitizeFloat(nowTime));
		}
	), 1.f, true);
	*/
}
