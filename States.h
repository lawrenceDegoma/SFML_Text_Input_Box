//
// Created by Lawrence Degoma on 4/10/24.
//

#ifndef GUI_LIBRARY_STATES_H
#define GUI_LIBRARY_STATES_H
#include <map>
#include "StateEnum.h"

class States {
private:
    std::map<StateEnum, bool> states;

public:
    States();

    bool checkState(StateEnum state) const;
    void disableState(StateEnum state);
    void enableState(StateEnum state);
    void toggleState(StateEnum state);
};


#endif //GUI_LIBRARY_STATES_H
