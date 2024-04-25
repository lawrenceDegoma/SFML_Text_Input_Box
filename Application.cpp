//
// Created by Lawrence Degoma on 4/10/24.
//

#include "Application.h"
std::vector<Word> Application::words;

void Application::run() {
    sf::RenderWindow window({1000, 600, 32}, "GUI Library");
    window.clear(sf::Color::White);

    // Create a TextInputBox instance
    TextInputBox textBox;
    textBox.setPosition(100, 100);
    textBox.setSize(sf::Vector2f(200, 30)); // Set the size of the text input box

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // Handle text input events for the TextInputBox
            textBox.handleTextInput(event);
        }

        window.clear(sf::Color::White);

        // Render the TextInputBox
        window.draw(textBox);

        window.display();
    }
}

void Application::push(const Word &word) {
    words.push_back(word);
}
