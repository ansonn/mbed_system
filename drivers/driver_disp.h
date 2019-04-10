/**
* @file driver_disp.h
* @date 2019/04/10 17:10
*
* @author <a href="mailto:shuke.wang@foxmail.com.com">shuke.wang@memblaze.com</a>
*
* @note
*/
#pragma once
#include <condom.h>

class DriverDisp
{
    DigitalOut romCS;
    SPI romIntf;
    DigitalOut lcdCS;
    DigitalOut lcdRS;
    DigitalOut lcdRst;
    I2C lcdIntf;

    void sendLcdCmd(int cmd)
    {
        lcdCS.write(0);
        lcdRS.write(0);
        lcdIntf.write(cmd);
        lcdCS.write(1);
    }
    void sendLcdDat(int dat)
    {
        lcdCS.write(0);
        lcdRS.write(1);
        lcdIntf.write(dat);
        lcdCS.write(1);
    }

    //设置液晶屏的显示地址（page，column）
    void setAddress(u8 page, u8 column)
    {
        column = column - 1;
        page = page - 1;
        sendLcdCmd(0xb0 + page);   				            // 设置页地址。每页是8行。一个画面的64行被分成8个页。我们平常所说的第1页，在LCD驱动IC里是第0页，所以在这里减去1
        sendLcdCmd(((column >> 4) & 0x0f) + 0x10);	        // 设置列地址的高4位
        sendLcdCmd(column & 0x0f);				            // 设置列地址的低4位
    }

    //全屏清屏
    void clear_screen()
    {
        u32 i, j;
        for (i = 0; i < 9; i++)
        {
            setAddress(1 + i, 1);
            for (j = 0; j < 132; j++)
            {
                sendLcdDat(0x00);
            }
        }
    }

public:
    DriverDisp() : romCS(LCD_ROM_CS), romIntf(LCD_ROM_SI, LCD_ROM_SO, LCD_ROM_SCLK)
        , lcdCS(LCD_CS), lcdRS(LCD_RS), lcdRst(LCD_RESET), lcdIntf(LCD_SDA, LCD_SCLK)
    {
    }
    ~DriverDisp() { }

    void init(void)
    {
        lcdRst.write(0);                // 低电平复位
        wait_ms(500);
        lcdRst.write(1);                // 复位完毕
        wait_ms(200);

        sendLcdCmd(0xe2);	            //软复位
        wait_ms(50);
        sendLcdCmd(0x2c);               //升压步聚1
        wait_ms(50);
        sendLcdCmd(0x2e);               //升压步聚2
        wait_ms(50);
        sendLcdCmd(0x2f);               //升压步聚3
        wait_ms(50);
        sendLcdCmd(0x23);               //粗调对比度，可设置范围0x20～0x27
        sendLcdCmd(0x81);               //微调对比度
        sendLcdCmd(0x28);               //JLX12864G-086的微调的对比度值为0x28,微调对比度的值可设置范围为0x00～0x3f
        sendLcdCmd(0xa2);               //1/9偏压比（bias）
        sendLcdCmd(0xc8);               //行扫描顺序：从上到下
        sendLcdCmd(0xa0);               //列扫描顺序：从左到右
        sendLcdCmd(0x40);               //起始行：第一行开始
        sendLcdCmd(0xaf);               //开显示
    }

    //显示128x64点阵图像
    void displayGraphic_128x64(u8 page, u8 column, u8 *dp)
    {
        u32 i, j;
        for (j = 0; j < 8; j++)
        {
            setAddress(page + j, column);
            for (i = 0; i < 128; i++)
            {
                sendLcdDat(*dp);
                dp++;
            }
        }
    }

};

extern DriverDisp driverDisp;
