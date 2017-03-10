//
// Created by thoma on 09-Mar-17.
//

#include "RoundRobMachine.h"
#include "Listen.h"
#include "Send.h"
#include "Init.h"

void RoundRobMachine::run() {
    this->state->run();
}

void RoundRobMachine::setState(State *state) {
    this->state = state;
}

State *RoundRobMachine::getInit() const {
    return init;
}

State *RoundRobMachine::getListen() const {
    return listen;
}

State *RoundRobMachine::getSend() const {
    return send;
}

RoundRobMachine::RoundRobMachine() {
    this->init = new Init(this);
    this->listen = new Listen(this);
    this->send = new Send(this);

    this->state = this->init;
}

RoundRobMachine::~RoundRobMachine() {
    delete init;
    delete listen;
    delete send;
}
