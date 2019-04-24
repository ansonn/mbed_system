/**
* @file disp.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief disp
* @note
*/
#include <condom.h>

class CondomDisp
{
    SPI spiPort;
    I2C i2cPort;

    DigitalOut pin_cs;
    DigitalOut pin_rs;
    DigitalOut pin_rst;
    DigitalOut pin_led;

public:
    CondomDisp() :
        spiPort(LCD_ROM_SI, LCD_ROM_SO, LCD_ROM_SCLK),
        i2cPort(LCD_SDA, LCD_SCLK),
        pin_cs(LCD_CS),
        pin_rs(LCD_RS),
        pin_rst(LCD_RST),
        pin_led(LCD_LED)
    {
    }
    ~CondomDisp() { }

    void init();
    void deinit(void);

    void test(void);
    void dump(void)
    {
        printf("CondomDisp dump:\n");
    }
private:
};

extern CondomDisp condomDisp;

