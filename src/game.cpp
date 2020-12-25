#include <iostream>
#include <string>
#include "ClearScreen.h"

int main() {
    ClearScreen::clearTheScreen();
    system("color c0");
    std::cout << "Hello world" << std::endl;
    system("pause");


    return 0;
}
