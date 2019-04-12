/**
* @file driver_gsm.h
* @date 2019/04/10 17:10
*
* @author <a href="mailto:shuke.wang@foxmail.com.com">shuke.wang@memblaze.com</a>
*
* @note
*/
#pragma once
#include <condom.h>


class DriverGsm
{
    DigitalIn sta;
    Serial serialPort;
    char cmdBuffer[16];
public:

    DriverGsm() : sta(PA_7), serialPort(PA_3, PA_2, "GSM Serial Port") { }
    ~DriverGsm() { }

    bool sendCommand(char *str)
    {
        return true;
    }
};

extern DriverGsm driverGsm;
