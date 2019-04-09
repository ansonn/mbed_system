/**
* @file gsm_module.cpp
* @date 2019/04/10 17:10
*
* @author <a href="mailto:shuke.wang@foxmail.com.com">shuke.wang@memblaze.com</a>
*
* @note
*/
#include <stdlib.h>
#include <string.h>
#include <gsm_module.h>

GsmModule gsmModule;


bool GsmModule::sendCommand(char *str)
{
    serialPort.puts(str);
    if (strcmp(serialPort.gets(cmdBuffer, sizeof(cmdBuffer)), "ACK") != 0)
    {
        return false;
    }
    return true;
}

