/**
* @file disp.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief disp
* @note
*/
#include <stdlib.h>
#include <stdio.h>
#include <mbed.h>

class CondomDisp
{
    SPI romPort;
    I2C lcdPort;

    DigitalOut lcdCS;
    DigitalOut lcdRS;
    DigitalOut lcdRst;
    DigitalOut lcdLed;

public:
    CondomDisp() : romPort(LCD_ROM_SI, LCD_ROM_SO, LCD_ROM_SCLK),
        lcdPort(LCD_SDA, LCD_SCLK),
        lcdCS(LCD_CS),
        lcdRS(LCD_RS),
        lcdRst(LCD_RST),
        lcdLed(LCD_LED)
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

