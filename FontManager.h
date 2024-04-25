//
// Created by Lawrence Degoma on 4/10/24.
//

#ifndef GUI_LIBRARY_FONTMANAGER_H
#define GUI_LIBRARY_FONTMANAGER_H
#include <map>
#include <SFML/Graphics.hpp>    // BAD PRACTICE!
#include "FontEnums.h"

/*
 *  Maps!!!
 *
 *  Key : value
 *  Js     -> object
 *  Java   -> HashMap
 *  Php    -> associative arrays
 *  Python -> dictionary
 *
 *  arrays:
 *  index -> int
 *  ex-
 *  int array[5];
 *  array[2] = 20;
 *
 *  maps:
 *  index -> whatever we want
 *
 *  key:String
 *  value:string
 *  ex-
 *  array["Dave"] = "Smith";
 */

// All fonts contained in one class
// Using enum to normalize data and prevent user from putting in the wrong string
class FontManager {
private:
    // When creating static member variables, they are not created in the .h file
    // One map shared across the whole class
    // Font only needs to be created once -> in the .cpp
    static std::map<FontEnum, sf::Font> fonts;
    static void loadFont(FontEnum font);
    static std::string getFontPath(FontEnum font);
public:
    static sf::Font& getFont(FontEnum font);
};


#endif //GUI_LIBRARY_FONTMANAGER_H
