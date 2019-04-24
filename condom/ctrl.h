/**
* @file ctrl.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief ctrl
* @note
*/
#include <condom.h>

class CondomCtrl
{
    DigitalIn batteryChargeSts;
public:
    CondomCtrl() : batteryChargeSts(BAT_CHARGE_STA) { }
    ~CondomCtrl() { }

    void init();
    void deinit(void);

    void test(void);
    void dump(void)
    {
        printf("CondomCtrl dump:\n");
    }
private:
};

extern CondomCtrl condomCtrl;

