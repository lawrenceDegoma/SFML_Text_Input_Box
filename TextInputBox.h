//
// Created by Lawrence Degoma on 4/24/24.
//

#ifndef GUI_LIBRARY_TEXTINPUTBOX_H
#define GUI_LIBRARY_TEXTINPUTBOX_H
#include "TextInputEvents.h"

class TextInputEvents;

class TextInputBox : public sf::Text{
private:
    bool typingModeEnabled;
    sf::Text text;
    sf::Font font;
    bool isFocused;

public:
    TextInputBox();
    TextInputBox(const sf::Font& font);

    void setPosition(float x, float y);

    void setTypingModeEnabled(bool enabled);
    bool isTypingModeEnabled() const;

    void bold();

    void setSize(const sf::Vector2f& size);
    void handleTextInput(const sf::Event& event);
};


#endif //GUI_LIBRARY_TEXTINPUTBOX_H
