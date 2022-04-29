// distiot-c-sdk.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <stdio.h>

struct DeviceManager
{
	char token[37];
	char masterUrl[100];
	char userUrl[100];
};

struct Device
{
	unsigned int id;
	char token[37];
	char nodeAddr[100];
	int nodePort;
};

