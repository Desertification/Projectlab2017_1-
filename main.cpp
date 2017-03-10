#include "mbed/mbed.h"
#include "mbed/TARGET_LPC1768/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768/PinNames.h"
#include "C12832/C12832.h"
#include "LM75B.h"
#include "lib/RoundRobMachine.h"
#include "lib/Joystick.h"

#define ECHO_SERVER_PORT 7

//DigitalOut led1(LED1);
//C12832 lcd(p5, p7, p6, p8, p11);
//LM75B sensor(p28, p27);

int main(void) {

    DigitalIn *in = new DigitalIn(p14);
    RoundRobMachine *machine = new RoundRobMachine();
//    machine->run();
    Joystick *joystick = new Joystick();

    

    


//    lcd.printf("%i",sensor.rawTemp());
//    EthernetInterface eth;
//    eth.init(); //Use DHCP
//    eth.connect();
//    lcd.printf("\nServer IP Address is %s\n", eth.getIPAddress());
//
//    TCPSocketServer server;
//    server.bind(ECHO_SERVER_PORT);
//    server.listen();
//
//    while (true) {
//        printf("\nWait for new connection...\n");
//        TCPSocketConnection client;
//        server.accept(client);
//        client.set_blocking(false, 1500); // Timeout after (1.5)s
//
//        printf("Connection from: %s\n", client.get_address());
//        char buffer[256];
//        while (true) {
//            int n = client.receive(buffer, sizeof(buffer));
//            if (n <= 0) break;
//
//            // print received message to terminal
//            buffer[n] = '\0';
//            printf("Received message from Client :'%s'\n",buffer);
//
//            // reverse the message
//            char temp;
//            for(int f = 0, l = n-1; f<l; f++,l--){
//                temp = buffer[f];
//                buffer[f] = buffer[l];
//                buffer[l] = temp;
//            }
//
//            // print reversed message to terminal
//            printf("Sending message to Client: '%s'\n",buffer);
//
//            // Echo received message back to client
//            client.send_all(buffer, n);
//            if (n <= 0) break;
//        }
//
//        client.close();
//    }
}
