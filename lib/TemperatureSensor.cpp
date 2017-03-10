//
// Created by thoma on 03-Mar-17.
//

#include <cstdint>
#include "TemperatureSensor.h"
TemperatureSensor::TemperatureSensor(LM75B* sensor) {
    this->sensor = sensor;
}

uint16_t TemperatureSensor::getRawTemp() {
    return sensor->rawTemp();
}
