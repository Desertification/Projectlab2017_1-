//
// Created by thoma on 03-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_TEMPERATURESENSOR_H
#define IMPERIAL_ROUND_MARCH_TEMPERATURESENSOR_H


#include "LM75B.h"

class TemperatureSensor {
private:
    LM75B* sensor;
public:
    TemperatureSensor(LM75B* s);
    uint16_t getRawTemp();
};


#endif //IMPERIAL_ROUND_MARCH_TEMPERATURESENSOR_H
