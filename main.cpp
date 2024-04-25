#include <iostream>
#include <SFML/Graphics.hpp>
#include "Application.h"

/*
 *   Flow of SFML
 *   Event Happens
 *        |
 *        v
 *   Handle Event
 *        |
 *        v
 *        Put object in some state
 *
 *    update -> check the object's state
 *          => change the object to the state
 */

int main() {
    Application::run();
    return 0;
}
