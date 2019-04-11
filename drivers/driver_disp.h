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

    //����Һ��������ʾ��ַ��page��column��
    void setAddress(u8 page, u8 column)
    {
        column = column - 1;
        page = page - 1;
        sendLcdCmd(0xb0 + page);   				            // ����ҳ��ַ��ÿҳ��8�С�һ�������64�б��ֳ�8��ҳ������ƽ����˵�ĵ�1ҳ����LCD����IC���ǵ�0ҳ�������������ȥ1
        sendLcdCmd(((column >> 4) & 0x0f) + 0x10);	        // �����е�ַ�ĸ�4λ
        sendLcdCmd(column & 0x0f);				            // �����е�ַ�ĵ�4λ
    }

    //ȫ������
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
        lcdRst.write(0);                // �͵�ƽ��λ
        wait_ms(500);
        lcdRst.write(1);                // ��λ���
        wait_ms(200);

        sendLcdCmd(0xe2);	            //��λ
        wait_ms(50);
        sendLcdCmd(0x2c);               //��ѹ����1
        wait_ms(50);
        sendLcdCmd(0x2e);               //��ѹ����2
        wait_ms(50);
        sendLcdCmd(0x2f);               //��ѹ����3
        wait_ms(50);
        sendLcdCmd(0x23);               //�ֵ��Աȶȣ������÷�Χ0x20��0x27
        sendLcdCmd(0x81);               //΢���Աȶ�
        sendLcdCmd(0x28);               //JLX12864G-086��΢���ĶԱȶ�ֵΪ0x28,΢���Աȶȵ�ֵ�����÷�ΧΪ0x00��0x3f
        sendLcdCmd(0xa2);               //1/9ƫѹ�ȣ�bias��
        sendLcdCmd(0xc8);               //��ɨ��˳�򣺴��ϵ���
        sendLcdCmd(0xa0);               //��ɨ��˳�򣺴�����
        sendLcdCmd(0x40);               //��ʼ�У���һ�п�ʼ
        sendLcdCmd(0xaf);               //����ʾ
    }

    //��ʾ128x64����ͼ��
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
