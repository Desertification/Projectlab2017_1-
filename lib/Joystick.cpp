//
// Created by thoma on 10-Mar-17.
//

#include "Joystick.h"
#include "../mbed/TARGET_LPC1768/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768/PinNames.h"

Joystick::~Joystick() {
    delete busIn;
}

void Joystick::wait_release(Joystick::KEY key) {
    while (busIn->read() & key);
}

Joystick::Joystick() {
    busIn = new BusIn(p12, p13, p14, p15, p16);
}

void Joystick::wait_hold(Joystick::KEY key) {
    while(!(busIn->read() & key));
}

void Joystick::wait_press(Joystick::KEY key) {
    wait_hold(key);
    wait_release(key);
}
