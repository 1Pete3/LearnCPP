#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int input{ };
    std::cin >> input;

    std::cout << "Double that number is: " << input * 2 << std::endl;

    return 0;
}
