//
// Created by Lawrence Degoma on 4/10/24.
//

#include "FontManager.h"


std::map<FontEnum, sf::Font> FontManager::fonts; // need a scope resolution "FontManager"

void FontManager::loadFont(FontEnum font) {
    // load font first
    // If not successful in loading the font:
    if (!fonts[font].loadFromFile(getFontPath(font)))
        exit(28);
}

std::string FontManager::getFontPath(FontEnum font) {
    switch(font){
        // you can hover over the switch param and press Create missing Switch cases
        case OPENSANS_BOLD:
            // Go to font in fonts folder, right click "copy path and reference"
            // Copy path from root content root
            return "fonts/OpenSans-Bold.ttf";
        case OPENSANS_REGULAR:
            return "fonts/OpenSans-Regular.ttf";
    }
}

sf::Font &FontManager::getFont(FontEnum font) {
    if(!fonts.count(font))
        loadFont(font);
    return fonts[font];
}
