/**
* @file motor.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief motor
* @note
*/
#include <stdlib.h>
#include <stdio.h>
#include <mbed.h>

class CondomMotor
{
public:
    CondomMotor() { }
    ~CondomMotor() { }

    void init();
    void deinit(void);

    void test(void);
    void dump(void)
    {
        printf("CondomMotor dump:\n");
    }
private:
};

extern CondomMotor condomMotor;
