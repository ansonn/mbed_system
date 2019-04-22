/**
* @file gprs.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief gprs
* @note
*/
#include <stdlib.h>
#include <stdio.h>
#include <mbed.h>

class CondomGprs
{
    DigitalIn sta;
    DigitalOut power;
    DigitalOut bat_en;
    Serial msgPort;
public:
    CondomGprs() : msgPort(GPRS_TX, GPRS_RX), sta(GPRS_STA), power(GPRS_PWR_ONOFF), bat_en(GPRS_BAT_EN) { }
    ~CondomGprs() { }

    void init();
    void deinit(void);

    void test(void);
    void dump(void)
    {
        printf("CondomGprs dump:\n");
    }
private:
};

extern CondomGprs condomGprs;
