//
// Created by thoma on 09-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_SEND_H
#define IMPERIAL_ROUND_MARCH_SEND_H


#include "State.h"
#include "RoundRobMachine.h"

class Send : public State {
private:
    RoundRobMachine *machine;
public:
    Send(RoundRobMachine *machine);

    virtual void run();

    virtual ~Send();
};


#endif //IMPERIAL_ROUND_MARCH_SEND_H
