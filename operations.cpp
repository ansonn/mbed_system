/**
* @file operations.cpp
* @date 2019/04/11 22:10
*
* @author <a href="mailto:shuke.wang@foxmail.com.com">shuke.wang@memblaze.com</a>
*
* @note
*/
#include <condom.h>
#include <driver.h>

DigitalOut motorTest(PA_1);



void operations_thread(void const *args)
{
    while (true)
	{
        motorTest = !motorTest;
        osDelay(1000);
    }
}
