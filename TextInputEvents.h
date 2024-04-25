//
// Created by Lawrence Degoma on 4/22/24.
//

#ifndef GUI_LIBRARY_TEXTINPUTEVENTS_H
#define GUI_LIBRARY_TEXTINPUTEVENTS_H
#include <SFML/Graphics.hpp>
#include "Word.h"

class TextInputBox;

class TextInputEvents {
public:
    static void handleTextInput(TextInputBox& inputBox, const sf::Event& event);
    static void bold(TextInputBox& inputBox, const sf::Event& event);
};


#endif //GUI_LIBRARY_TEXTINPUTEVENTS_H
