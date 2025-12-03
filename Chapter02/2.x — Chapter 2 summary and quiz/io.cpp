#include "io.h"
#include <iostream>

int readNumber() {
    int userInput{};
    std::cout << "Please enter an integer: ";
    std::cin >> userInput;
    return userInput;
}

void writeAnswer(int userInput) {
    std::cout << "The numbers added up = " << userInput << std::endl;
}
