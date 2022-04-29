// distiot-c-sdk.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <stdio.h>
#include <string.h>

//设备管理器结构体
typedef struct
{
	char token[37];
	char masterUrl[100];
	char userUrl[100];
}DeviceManager;

//单设备结构体
typedef struct
{
	unsigned int id;
	char token[37];
	char nodeAddr[100];
	int nodePort;
}Device;

//通过设备管理器创造一个设备
Device *NewDevice(DeviceManager *manager, int did) {
	Device device;
	device.id = did;
	strcpy(device.token, manager->token);


}

int getNode(DeviceManager* man, Device* device) {
	
}

