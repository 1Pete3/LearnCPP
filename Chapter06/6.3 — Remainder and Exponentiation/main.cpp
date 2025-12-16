#include <iostream>

constexpr bool isEven(int x) {
    return x % 2 == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    
    int userInput{};
    std::cin >> userInput;
    if (isEven(userInput)) {
        std::cout << userInput << " is even" << std::endl;
    }
    else {
        std::cout << userInput << " is odd" << std::endl;
    }
    return 0;
}