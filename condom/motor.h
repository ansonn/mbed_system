/**
* @file motor.cpp
* @date 2019/04/20 22:38
*
* @author <a href="mailto:shuke.wang@memblaze.com">shuke.wang@memblaze.com</a>
*
* @brief motor
* @note
*/
#include <condom.h>

class Motor
{
    DigitalOut drvP;
    DigitalOut drvN;
    DigitalOut drvEn;

    DigitalIn limitP;
    DigitalIn limitN;

public:
    Motor(PinName _p, PinName _n, PinName _en, PinName _limitp, PinName _limitn)
        : drvP(_p), drvN(_n), drvEn(_en), limitP(_limitp), limitN(_limitn)
    {

    }
    ~Motor()
    {

    }

    void enable()  { drvEn.write(1); }
    void disable() { drvEn.write(0); }

    bool doForwardRotation(void)
    {
        if (limitP.read() == 1)
        {
            return true;
        }

        drvP.write(1);
        drvN.write(0);

        u32 timout = 100;
        while (limitP.read() == 0)
        {
            wait_ms(100);
            if (--timout == 0)
            {
                return false;
            }
        }

        return true;
    }

    bool doReverseRotation(void)
    {
        if (limitN.read() == 1)
        {
            return true;
        }

        drvN.write(1);
        drvP.write(0);

        u32 timout = 100;
        while (limitN.read() == 0)
        {
            wait_ms(100);
            if (--timout == 0)
            {
                return false;
            }
        }

        return true;
    }
};

class doorMotor
{

};

class CondomMotor
{
    Motor pathLMotor;
    Motor pathRMotor;
    Motor doorLMotor;
    Motor doorRMotor;
public:
    
    typedef enum
    {
        L_PATH,
        R_PATH
    } PathType_e;

    CondomMotor() :
        pathLMotor(L_PUSH_DRV_P, L_PUSH_DRV_N, L_PUSH_DRV_EN, L_LOAD_OUT_IR, L_LOAD_RST_IR),
        pathRMotor(R_PUSH_DRV_P, R_PUSH_DRV_N, R_PUSH_DRV_EN, R_LOAD_OUT_IR, R_LOAD_RST_IR),
        doorLMotor(L_DOOR_DRV_P, L_DOOR_DRV_N, L_DOOR_DRV_EN, L_DOOR_OPEN_IR, L_DOOR_CLOSE_IR),
        doorRMotor(R_DOOR_DRV_P, R_DOOR_DRV_N, R_DOOR_DRV_EN, R_DOOR_OPEN_IR, R_DOOR_CLOSE_IR)
    {
    }
    ~CondomMotor()
    {
    }

    void init();
    void deinit(void);

    void pushOut(PathType_e pathType);
    void openDoor(PathType_e pathType);
    void pullBack(PathType_e pathType);
    void closeDoor(PathType_e pathType);

    void test(void);
    void dump(void)
    {
        printf("CondomMotor dump:\n");
    }
private:
};

extern CondomMotor condomMotor;
