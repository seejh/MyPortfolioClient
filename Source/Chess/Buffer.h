// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */


class RecvBuffer {
public:
	RecvBuffer(int32 size);
	~RecvBuffer();

	bool OnRead(int32 len);
	bool OnWrite(int32 len);
	void Reset();

	uint8* BufferReadPos();
	uint8* BufferWritePos();

	int32 DataSize();
	int32 FreeSize();
public:
	uint8* _buffer;
	int32 _size;
	int32 _readPos;
	int32 _writePos;
};

class SendBuffer {
public:
	SendBuffer(int size);
	~SendBuffer();

	uint8* Buffer();
	int Size();

public:
	uint8* _buffer;
	int _size;
};