// Fill out your copyright notice in the Description page of Project Settings.


#include "Buffer.h"

/*---------------------------
	RecvBuffer
-----------------------------*/
RecvBuffer::RecvBuffer(int32 size = 1000) : _size(size), _readPos(0), _writePos(0)
{
	_buffer = new uint8[_size + 200];
}

RecvBuffer::~RecvBuffer()
{
	delete _buffer;
}

bool RecvBuffer::OnRead(int32 len)
{
	if (DataSize() < len) return false;

	_readPos += len;

	return true;
}

bool RecvBuffer::OnWrite(int32 len)
{
	if (FreeSize() < len) return false;

	_writePos += len;

	return true;
}

void RecvBuffer::Reset()
{
	if (_readPos == 0) return;

	if (_readPos == _writePos) {
		_readPos = _writePos = 0;
		return;
	}

	::memcpy(_buffer, &_buffer[_readPos], DataSize());

	_writePos -= _readPos;
	_readPos = 0;
}

uint8* RecvBuffer::BufferReadPos()
{
	return &_buffer[_readPos];
}

uint8* RecvBuffer::BufferWritePos()
{
	return &_buffer[_writePos];
}

int32 RecvBuffer::DataSize()
{
	return _writePos - _readPos;
}

int32 RecvBuffer::FreeSize()
{
	return _size - _writePos;
}

/*-----------------------------
	SendBuffer
-------------------------------*/

SendBuffer::SendBuffer(int size = 1000) : _size(size)
{
	_buffer = new uint8[_size + 200];
}

SendBuffer::~SendBuffer() {
	delete _buffer;
}

uint8* SendBuffer::Buffer()
{
	return _buffer;
}

int SendBuffer::Size()
{
	return _size;
}
