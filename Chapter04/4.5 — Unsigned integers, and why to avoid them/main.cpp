#include <iostream>
#include <iomanip>

//Forward declaration of functions
int twoByteShortAdding();
int twoByteShortSubtracting();
int signedUnsigned();

int main()
{
    twoByteShortAdding();
    std::cout << "\n";
    twoByteShortSubtracting();
    std::cout << "\n";
    signedUnsigned();
    return 0;
}

int twoByteShortAdding() {
    unsigned short  x{ 65535 };
    std::cout << "twoByteShortAdding()" << std::endl;
    std::cout << "x was : " << x << std::endl;
    x += 1;
    std::cout << "x(65536) is now: " << x << std::endl;
    x += 1;
    std::cout << "x(65537) is now: " << x << std::endl;
    return 0;
}

int twoByteShortSubtracting() {
    unsigned short  x{ 0 };
    std::cout << "twoByteShortSubtracting()" << std::endl;
    std::cout << "x was : " << x << std::endl;
    x -= 1;
    std::cout << "x(-1) is now: " << x << std::endl;
    x -= 1;
    std::cout << "x(-2) is now: " << x << std::endl;
    return 0;
}

int signedUnsigned() {
    unsigned int u{ 2 };
    signed int s{ 3 };
    std::cout << "signedUnsigned()" << std::endl;
    std::cout << "unsigned 2 - signed 3  = " << u - s << std::endl;
    return 0;
}