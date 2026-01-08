#include <iostream>
#include <cstdlib>

void numericConversion1() {
    short s = 3; // Convert int to short
    long l = 3; // Convert int to long
    char ch = s; // Convert short to char
    unsigned int u = 3; // Convert int to unsigned int
    std::cout << "Short         : " << s << std::endl;
    std::cout << "Long          : " << l << std::endl;
    std::cout << "Char          : " << ch << std::endl;
    std::cout << "Unsigned Int  : " << u << std::endl;
}

void numericConversion2() {
    float f = 3.0; // Convert double to float
    long double ld = 3.0; // Convert double to long double
    std::cout << "Float         : " << f << std::endl;
    std::cout << "Long Double   : " << ld << std::endl;
}

void numericConversion3() {
    int i = 3.5;
    std::cout << "Double to Int : " << i << std::endl;
}

void numericConversion4() {
    double d = 3;
    std::cout << "Int to Double : " << d << std::endl;
}

void numericConversion5() {
    bool b1 = 3;
    bool b2 = 3.0;
    std::cout << "Int to Bool   : " << b1 << std::endl;
}
int main()
{
    numericConversion1();
    numericConversion2();
    numericConversion3();
    numericConversion4();
    numericConversion5();

    return EXIT_SUCCESS;
}