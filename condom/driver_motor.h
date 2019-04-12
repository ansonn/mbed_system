/**
* @file driver_motor.h
* @date 2019/04/10 17:10
*
* @author <a href="mailto:shuke.wang@foxmail.com.com">shuke.wang@memblaze.com</a>
*
* @note
*/
#pragma once
#include <condom.h>

class baseMotor
{
    DigitalOut pinEnable;
    DigitalOut pinPRotation;
    DigitalOut pinNRotation;

public:
    
    baseMotor(PinName _pinEnable, PinName _pinPRotation, PinName _pinNRotation)
        : pinEnable(_pinEnable), pinPRotation(_pinPRotation), pinNRotation(_pinNRotation)
    {
    }
    ~baseMotor() { }

    void enable() { pinEnable.write(1); }
    void disable() { pinEnable.write(0); }

    void pRotation(bool isStop)
    {
        if (isStop)
            pinPRotation.write(0);
        else
            pinPRotation.write(1);
    }

    void nRotation(bool isStop)
    {
        if (isStop)
            pinNRotation.write(0);
        else
            pinNRotation.write(1);
    }
};

class DriverPushMotor : public baseMotor
{
    DigitalIn pinPLimit;
    DigitalIn pinNLimit;
public:
    DriverPushMotor(PinName _pinEnable, PinName _pinPRotation, PinName _pinNRotation, PinName _pinPLimit, PinName _pinNLimit)
        : baseMotor(_pinEnable, _pinPRotation, _pinNRotation), pinPLimit(_pinPLimit), pinNLimit(_pinNLimit)
    {

    }
    ~DriverPushMotor() { }

    bool isReachPLimit(void) { return pinPLimit == 1; }
    bool isReachNLimit(void) { return pinNLimit == 1; }
};

class DriverLiftMotor : public baseMotor
{
    DigitalIn pinOpened;
    DigitalIn pinClosed;
public:
    DriverLiftMotor(PinName _pinEnable, PinName _pinPRotation, PinName _pinNRotation, PinName _pinOpened, PinName _pinClosed)
        : baseMotor(_pinEnable, _pinPRotation, _pinNRotation), pinOpened(_pinOpened), pinClosed(_pinClosed)
    {

    }
    ~DriverLiftMotor() { }

    bool isOpened(void) { return pinOpened == 1; }
    bool isClosed(void) { return pinClosed == 1; }
};

extern DriverPushMotor driverLPushMotor;
extern DriverPushMotor driverRPushMotor;
extern DriverLiftMotor driverLLiftMotor;
extern DriverLiftMotor driverRLiftMotor;
