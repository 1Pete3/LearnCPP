#include <iostream>
#include <cstdlib>

constexpr double calcCircumference(double radius) {
    constexpr double pi{ 3.14159265359 };
    return 2.0 * pi * radius;
}


constexpr int greater(int x, int y) {
    return (x > y) ? x : y;
}


int main()
{
    // Resolved at runtime instead of compile time
    int x{ 5 }; // not constexpr
    int y{ 6 }; // not constexpr

    constexpr double circumference{ calcCircumference(3.0)};
    std::cout << "Our circle has circumference " << circumference << std::endl;
    std::cout << "greater("<<x << " , " << y << " ) = " << greater(x,y)<< std::endl; // Evaluated at runtime
    return EXIT_SUCCESS;
}
