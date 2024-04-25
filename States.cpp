//
// Created by Lawrence Degoma on 4/10/24.
//

#include "States.h"

States::States() {
    for(int i=0; i<LAST_STATE; i++)
        states[static_cast<StateEnum>(i)] = false;
}

bool States::checkState(StateEnum state) const {
    // not allowed to use bracket since brackets aren't const. So we use .at
    return states.at(state);
}

void States::disableState(StateEnum state) {
    states[state] = false;
}

void States::enableState(StateEnum state) {
    states[state] = true;
}

void States::toggleState(StateEnum state) {
    states[state] = !states[state];
}
