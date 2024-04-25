//
// Created by Lawrence Degoma on 4/10/24.
//

#ifndef GUI_LIBRARY_WORD_H
#define GUI_LIBRARY_WORD_H
#include "FontManager.h"
#include "States.h"
#include "MouseEvents.h"
#include "TextInputEvents.h"
#include "TextInputBox.h"

// "Fuck it let's make it a child class"
class Word : public sf::Text, public States{
private:
    bool typingModeEnabled;

public:
    Word();
    Word(FontEnum font);

    void update();
    void eventHandler(sf::RenderWindow& window, const sf::Event event);

    void handleTextInput(const sf::Event& event);
    void toggleTypingMode();

    void enableTypingMode();
    void disableTypingMode();
    bool isHovered(const sf::RenderWindow& window);

    void bold();
};


#endif //GUI_LIBRARY_WORD_H
