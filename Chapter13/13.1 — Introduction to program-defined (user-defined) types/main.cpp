#include <iostream>
#include <cstdlib>
#include "Fraction.h"

int main()
{
    Fraction fraction(3, 4);
    std::cout << "Fraction fraction(3,4)" << std::endl;
    std::cout << "Numerator   : " << fraction.numerator << std::endl;
    std::cout << "Denominator : " << fraction.denominator << std::endl;
    return EXIT_SUCCESS;
}

