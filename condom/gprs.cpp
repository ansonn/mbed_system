/**
* @file gprs.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief gprs
* @note
*/
#include "gprs.h"

CondomGprs condomGprs;

void CondomGprs::init(void)
{
    uartPort.baud(115200);
}

void CondomGprs::deinit(void)
{

}

void CondomGprs::test(void)
{

}
