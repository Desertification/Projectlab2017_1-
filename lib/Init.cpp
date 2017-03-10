//
// Created by thoma on 09-Mar-17.
//

#include "Init.h"

void Init::run() {
    lcd->cls();
    lcd->printf("Connecting to network\n");
    eth.init("192.168.1.104", "255.255.255.255", "");
    eth.connect();
    char *ipAddress = eth.getIPAddress();
    lcd->printf("Connected to ");
    lcd->printf(ipAddress);
    lcd->printf("\n");
    lcd->printf("press joystick to continue");

    while(!joystick->read()){}
    while(joystick->read()){}

    lcd->cls();
    int target = 1;

    int down = 1;
    int left = 2;
    int center = 4;
    int up = 8;
    int right = 16;


    lcd->printf("Select the target\n");
    lcd->printf("192.168.1.");
    lcd->printf("%d",target);
    switch (joystick->read()){
        case 1:
            target--;
            break;
        case 2:
            break;
        default:
            break;
    }



}

Init::Init(RoundRobMachine *machine) {
    this->machine = machine;
    joystick = new BusIn(p12, p13, p14, p15, p16);
    lcd = new C12832(p5, p7, p6, p8, p11);
}

Init::~Init() {

}
