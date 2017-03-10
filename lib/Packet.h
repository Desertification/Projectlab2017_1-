//
// Created by thoma on 03-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_PACKET_H
#define IMPERIAL_ROUND_MARCH_PACKET_H


#include <cstdint>

class Packet {
public:
    Packet(char *packet);
private:
    uint16_t SOF = 0xAA55;
    uint8_t NUM;
    uint8_t  IDD;
    uint8_t PWM;
    uint8_t CRC;
    uint16_t EOF = 0x55AA;
};


#endif //IMPERIAL_ROUND_MARCH_PACKET_H
