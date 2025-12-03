#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int firstInput{};
    std::cin >> firstInput;

    std::cout << "Enter another integer: ";
    int secondInt{};
    std::cin >> secondInt;

    std::cout << firstInput << " + " << secondInt << " is " << firstInput + secondInt << std::endl;
    std::cout << firstInput << " - " << secondInt << " is " << firstInput - secondInt << std::endl;

}
