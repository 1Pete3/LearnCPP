#include <iostream>
#include <cstdlib>
#include "constants.h"

int main()
{
    std::cout << "Enter a radius" << std::endl;
    double radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2 * radius * constants::pi << std::endl;
    return EXIT_SUCCESS;
}

