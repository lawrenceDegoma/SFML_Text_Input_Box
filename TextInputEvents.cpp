//
// Created by Lawrence Degoma on 4/22/24.
//

#include "TextInputEvents.h"
#include "TextInputBox.h"

void TextInputEvents::handleTextInput(TextInputBox& inputBox, const sf::Event& event) {
    if (event.type == sf::Event::TextEntered) {
        if (event.text.unicode < 128 && event.text.unicode != 8) { // 8 is backspace
            inputBox.setString(inputBox.getString() + static_cast<char>(event.text.unicode));
        }
        else if (event.text.unicode == 8 && !inputBox.getString().isEmpty()) {
            std::string str = inputBox.getString().toAnsiString();
            str.pop_back();
            inputBox.setString(str);
        }
    }
}

void TextInputEvents::bold(TextInputBox& inputBox, const sf::Event& event) {
    if (event.type == sf::Event::KeyPressed) {
        bool commandPressed = sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem) || sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem);
        bool controlPressed = sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) || sf::Keyboard::isKeyPressed(sf::Keyboard::RControl);
        bool bPressed = event.key.code == sf::Keyboard::B;

        if ((commandPressed && bPressed) || (controlPressed && bPressed)) {
            // Perform action for Command + B or Control + B
            // For example, bold text
            inputBox.bold();
        }
    }
}

