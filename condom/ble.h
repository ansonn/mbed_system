/**
* @file ble.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief ble
* @note
*/
#include <stdlib.h>
#include <stdio.h>
#include <mbed.h>

class CondomBle
{
    DigitalIn pinInt;
    DigitalOut pinReset;
    DigitalOut pinWakeup;
    I2C i2cPort;
public:
    CondomBle() :
        i2cPort(BLE_SDA, BLE_SCL),
        pinInt(BLE_INT),
        pinReset(BLE_RESET),
        pinWakeup(BLE_WAKEUP)
    {
    }
    ~CondomBle() { }

    void init();
    void deinit(void);

    void test(void);
    void dump(void)
    {
        printf("CondomBle dump:\n");
    }
private:
};

extern CondomBle condomBle;
