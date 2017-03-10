//
// Created by thoma on 09-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_INIT_H
#define IMPERIAL_ROUND_MARCH_INIT_H


#include "State.h"
#include "RoundRobMachine.h"
#include "../EthernetInterface/EthernetInterface.h"
#include "../C12832/C12832.h"
#include "../mbed/TARGET_LPC1768/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768/PinNames.h"
#include "../mbed/mbed.h"

class Init : public State {
private:
    RoundRobMachine *machine;
    EthernetInterface eth;
    C12832 *lcd;
    BusIn *joystick;
public:
    Init(RoundRobMachine *machine);

    virtual ~Init();

    virtual void run();
};


#endif //IMPERIAL_ROUND_MARCH_INIT_H
