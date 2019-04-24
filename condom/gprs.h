/**
* @file gprs.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief gprs
* @note
*/
#include <condom.h>

class CondomGprs
{
    DigitalIn pinSta;
    DigitalOut pinPower;
    DigitalOut pinBaten;
    Serial uartPort;
public:
    CondomGprs() :
        uartPort(GPRS_TX, GPRS_RX),
        pinSta(GPRS_STA),
        pinPower(GPRS_PWR_ONOFF),
        pinBaten(GPRS_BAT_EN)
    {
    }
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
