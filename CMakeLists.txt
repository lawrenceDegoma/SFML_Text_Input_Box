cmake_minimum_required(VERSION 3.26)
project(GUI_library)

set(CMAKE_CXX_STANDARD 17)

add_executable(GUI_library main.cpp
        Application.cpp
        Application.h
        FontManager.cpp
        FontManager.h
        FontEnums.h
        Word.cpp
        Word.h
        States.cpp
        States.h
        StateEnum.h
        MouseEvents.cpp
        MouseEvents.h
        TextInputEvents.cpp
        TextInputEvents.h
        TextInputBox.cpp
        TextInputBox.h)
target_link_libraries(GUI_library sfml-graphics sfml-audio)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)