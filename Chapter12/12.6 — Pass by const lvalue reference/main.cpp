#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>

// Comment out function below to see conversion to double if parameter is not double
void printRef(const int& y) {
    std::cout << y << std::endl;
}

void printVal(double d) {
    std::cout << "printVal(double d): " << d << std::endl;
}

void printRef(const double& d) {
    std::cout << "printRef(const double d): " << d << std::endl;
}

void foo(int a, int& b, const std::string& c) {
}

void printSV(std::string_view sv) {
    std::cout << "string_view : " << sv << std::endl;
}

void printS(std::string& s) {
    std::cout << "string_view : " << s << std::endl;
}

int main()
{
    int x{ 5 };
    
    printRef(x); // x is a modifiable lvalue y binds to x
    const int z{5}; 
    printRef(z); // z is a non modifiable lvalue 
    printRef(5); // y binds to a temporary object
    printVal(5);
    printRef(5); // Overloaded but if not would convert to temp double bound to parameter d
    
    const std::string s{ "Hello world!" };
    foo(5, x, s);

    std::string_view sv{ s };
    printSV(s); // Inexpensive
    printSV(sv); // Inexpensive
    printSV("Hello World"); // Inexpensive

    // Bad expensive
    /*printS(static_cast<std::string>(sv));
    printS("Hello, world");*/

    return EXIT_SUCCESS;
}
