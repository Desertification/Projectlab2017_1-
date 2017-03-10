//
// Created by thoma on 10-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_JOYSTICK_H
#define IMPERIAL_ROUND_MARCH_JOYSTICK_H

#include "../mbed/mbed.h"
#include "../mbed/TARGET_LPC1768/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768/PinNames.h"

class Joystick {
private:
    BusIn *busIn;
public:
    Joystick();

    enum KEY {
        DOWN = 1,
        LEFT = 2,
        CENTER = 4,
        UP = 8,
        RIGHT = 16
    };

    void wait_release(KEY key);

    void wait_hold(KEY key);

    void wait_press(KEY key);

    virtual ~Joystick();
};


#endif //IMPERIAL_ROUND_MARCH_JOYSTICK_H
