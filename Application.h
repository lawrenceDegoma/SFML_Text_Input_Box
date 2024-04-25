//
// Created by Lawrence Degoma on 4/10/24.
//

#ifndef GUI_LIBRARY_APPLICATION_H
#define GUI_LIBRARY_APPLICATION_H
#include "Word.h"
#include "MouseEvents.h"
#include <vector>

class Application {
private:
    static std::vector<Word> words;
public:
    static void push(const Word& word);
    static void run();
};


#endif //GUI_LIBRARY_APPLICATION_H
