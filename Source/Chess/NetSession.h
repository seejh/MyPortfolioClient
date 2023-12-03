// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

class FSocket;
class UMyGameInstance;
class RecvBuffer;
class SendBuffer;
class CHESS_API NetSession : FRunnable
{
public:
	NetSession();
	~NetSession();

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;

	bool Connect();
	void Send(uint8* buffer, int len);
	void Recv();
public:
	FSocket* _socket;
	FRunnableThread* _thread;
	UMyGameInstance* _instance;
	RecvBuffer* _recvBuffer;
	
	TAtomic<bool> _isRun;
};

