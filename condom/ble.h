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
public:
    CondomBle() { }
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
