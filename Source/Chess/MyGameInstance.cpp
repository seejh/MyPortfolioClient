// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include<Containers/UnrealString.h>
#include"proto/MyProtocol.pb.h"
#include"Buffer.h"

void UMyGameInstance::Shutdown()
{
	_netSession->Stop();
	
	Super::Shutdown();
}

void UMyGameInstance::Test()
{
	
}

void UMyGameInstance::Connect()
{
	if (!_netSession)
		_netSession = new NetSession();

	if (!_netSession->_isRun.Load())
		_netSession->Connect();
}

void UMyGameInstance::Login(FString id, FString pw)
{
	Connect();

	

	PROTOCOL::S_LOGIN pkt;
	pkt.set_playerid(56);
	pkt.set_success(true);

	int packetSize = static_cast<int>(pkt.ByteSizeLong());
	uint8* buffer2 = new uint8[packetSize + 1];
	pkt.SerializeToArray(buffer2, packetSize + 1);

	_netSession->Send(buffer2, packetSize);

	//PROTOCOL::C_LOGIN loginPkt;
	//loginPkt.set_id(id);
	//loginPkt.set_pw(pw);
	//TSharedPtr<SendBuffer> sendBuffer = ServerPacketHandler::MakeSendBuffer(loginPkt);

	//_netSession->Send(sendBuffer);
}
