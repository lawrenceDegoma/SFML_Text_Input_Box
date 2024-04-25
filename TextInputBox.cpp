//
// Created by Lawrence Degoma on 4/24/24.
//

#include "TextInputBox.h"
#include "TextInputEvents.h"

TextInputBox::TextInputBox() : TextInputBox(sf::Font()) {}

TextInputBox::TextInputBox(const sf::Font& font) : sf::Text(), typingModeEnabled(false) {
    setFont(font);
}

void TextInputBox::setPosition(float x, float y) {
    text.setPosition(x, y);
    // Adjust other properties if needed
}

void TextInputBox::setSize(const sf::Vector2f& size) {
    // Implement setSize() method to set the size of the text input box
    // For example:
    setCharacterSize(static_cast<unsigned int>(size.y)); // Set font size based on height
    setOrigin(0, getLocalBounds().top + getLocalBounds().height); // Set origin to top-left
    setPosition(getPosition().x, getPosition().y + size.y); // Adjust position for new size
}

void TextInputBox::setTypingModeEnabled(bool enabled) {
    typingModeEnabled = enabled;
}

bool TextInputBox::isTypingModeEnabled() const {
    return typingModeEnabled;
}

void TextInputBox::bold() {
    // Implementation of the bold() method
    // For example:
    sf::Text::setStyle(sf::Text::Bold);
}

void TextInputBox::handleTextInput(const sf::Event& event) {
    // Use TextInputEvents to handle text input events
    TextInputEvents::handleTextInput(*this, event);
}