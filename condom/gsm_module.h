/**
* @file gsm_module.h
* @date 2019/04/10 17:10
*
* @author <a href="mailto:shuke.wang@foxmail.com.com">shuke.wang@memblaze.com</a>
*
* @note
*/
#pragma once
#include "mbed.h"
#include "PinNames.h"

class GsmModule
{
    DigitalIn sta;
    Serial serialPort;
    char cmdBuffer[16];
public:
    
    GsmModule() : sta(PD_7), serialPort(PA_3, PA_2, "GSM Serial Port") { }
    ~GsmModule() { }
		
    bool sendCommand(char *str);
};
