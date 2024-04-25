//
// Created by Lawrence Degoma on 4/10/24.
//

#include "Word.h"
#include "TextInputBox.h"
#include "TextInputEvents.h"


Word::Word() : Word(OPENSANS_REGULAR) {
    typingModeEnabled = false;
}


// Word is a text object and enum tells it what font to use
Word::Word(FontEnum font) : sf::Text() {
    setFont(FontManager::getFont(font));
    typingModeEnabled = false;
}

bool Word::isHovered(const sf::RenderWindow& window) {
    return getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
}

void Word::toggleTypingMode() {
    typingModeEnabled = !typingModeEnabled; // Toggle typing mode flag
}

void Word::eventHandler(sf::RenderWindow &window, const sf::Event event) {
    if (isHovered(window)) {
        this->enableState(HOVERED);
        TextInputEvents::handleTextInput(*this, event); // Handle text input events
    }
    else {
        this->disableState(HOVERED);
    }
}

void Word::handleTextInput(const sf::Event& event) {
    TextInputEvents::handleTextInput(*this, event); // Call handleTextInput from TextInputEvents
}

void Word::update() {
    if (this->checkState(HOVERED)) {
        this->setFillColor(sf::Color::Blue);
    }
    else {
        this->setFillColor(sf::Color::White);
    }
}

void Word::enableTypingMode() {
    typingModeEnabled = true; // Enable typing mode
}

void Word::disableTypingMode() {
    typingModeEnabled = false; // Disable typing mode
}

void Word::bold() {
    // Check if the text is already bold
    if (getStyle() & sf::Text::Bold) {
        setFont(FontManager::getFont(OPENSANS_REGULAR));
    } else {
        setFont(FontManager::getFont(OPENSANS_BOLD));
    }
}