//
// Created by thoma on 09-Mar-17.
//

#ifndef IMPERIAL_ROUND_MARCH_ROUNDROBMACHINE_H
#define IMPERIAL_ROUND_MARCH_ROUNDROBMACHINE_H


#include "State.h"

class RoundRobMachine {
public:
    void run();

    virtual ~RoundRobMachine();

    RoundRobMachine();

    void setState(State *state);

    State *getInit() const;

    State *getListen() const;

    State *getSend() const;

private:
    State *state;
    State *init;
    State *listen;
    State *send;

    char target_ip[4];
};


#endif //IMPERIAL_ROUND_MARCH_ROUNDROBMACHINE_H
