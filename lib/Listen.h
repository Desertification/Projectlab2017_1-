//
// Created by thoma on 09-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_RECEIVE_H
#define IMPERIAL_ROUND_MARCH_RECEIVE_H


#include "State.h"
#include "RoundRobMachine.h"

class Listen : public State {
private:
    RoundRobMachine *machine;
public:
    Listen(RoundRobMachine *machine);

    virtual ~Listen();

    virtual void run();
};


#endif //IMPERIAL_ROUND_MARCH_RECEIVE_H
