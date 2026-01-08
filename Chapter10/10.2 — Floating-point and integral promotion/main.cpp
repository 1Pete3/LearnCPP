#include <iostream>
#include <cstdlib>

// Numeric promotion reduces redundancy
// Can be used with other numeric data types as parameters so you don't need to write seperate functions for each type double, signed int, unsigned int, etc.

void printInt(int x) {
    std::cout << x << std::endl;
}

// Floating point promotions
void printDouble(double d) {
    std::cout << d << std::endl;
}



int main()
{
    short s{ 3 };
    printInt(s);
    printInt('a');
    printInt(true);

    printInt(3);
    printInt(5.0);
    printInt(9.0f);
    printDouble(6.1);
    printDouble(6.7f);
    return EXIT_SUCCESS;
}

