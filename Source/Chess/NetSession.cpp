// Fill out your copyright notice in the Description page of Project Settings.


#include "NetSession.h"

#include<Sockets.h>
#include<Runtime/Networking/Public/Interfaces/IPv4/IPv4Address.h>
#include<Runtime/Networking/Public/Interfaces/IPv4/IPv4Endpoint.h>
#include<SocketSubsystem.h>

#include"MyGameInstance.h"
#include"Buffer.h"

NetSession::NetSession()
{
}

NetSession::~NetSession()
{
	delete _recvBuffer;
}

bool NetSession::Init()
{
	return true;
}

uint32 NetSession::Run()
{
	while (_isRun) {
		Recv();
		UE_LOG(LogTemp, Error, TEXT("Recv!"));
		FPlatformProcess::Sleep(1);
	}

	return 0;
}

void NetSession::Stop()
{
	_isRun.Store(false);
}

void NetSession::Exit()
{
}

bool NetSession::Connect()
{
	_socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT(""), false);

	FIPv4Address ipAddr;
	FIPv4Address::Parse(TEXT("127.0.0.1"), ipAddr);
	FIPv4Endpoint endPoint = FIPv4Endpoint(ipAddr, 7777);

	_socket->SetNonBlocking(true);
	_socket->Connect(*endPoint.ToInternetAddr());

	ESocketConnectionState state = _socket->GetConnectionState();
	if (state != ESocketConnectionState::SCS_Connected) {
		UE_LOG(LogTemp, Error, TEXT("Socket Connect Error"));
		return false;
	}

	UE_LOG(LogTemp, Error, TEXT("Socket Connect OK"));
	_isRun.Store(true);
	_recvBuffer = new RecvBuffer(1000);
	_thread = FRunnableThread::Create(this, TEXT(""));

	return true;
}

void NetSession::Send(uint8* buffer, int len)
{
	int sendBytes;
	_socket->Send(buffer, len, sendBytes);

	if (sendBytes <= 0) {
		UE_LOG(LogTemp, Error, TEXT("SendBytes <= 0"));
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("SendBytes = %d"), sendBytes);
	}
}

void NetSession::Recv()
{
	int32 recvBytes;
	_socket->Recv(_recvBuffer->BufferWritePos(), _recvBuffer->FreeSize(), recvBytes);
	if (recvBytes > 0) {

	}
}



