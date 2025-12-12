#include <iostream>

/*
The compiler would generate an executable that calculates the result of 3 + 4
at runtime. If the program were executed a million times 3 + 4 would be evaluated
a millions and the resulting value of 7 produced a million times
*/

void example()
{
    int x{3 + 4};
    /*
    Constant folding would have int x{7}; so 3 + 4 would not need to be calculated
    at runtime 

    Constant propagation: compiler would realize that x has the constant value of 7, replace 
    the x in the cout with 7
    */
    std::cout << x << std::endl;
}

int five()
{
    return 5;
}

int pass(const int x) // x is a runtime constant
{
    return x;
}

int main()
{
    // The following are non-constants:
    [[maybe_unused]] int a{ 5 };

    // The following are compile-time constants:
    [[maybe_unused]] const int b{ 5 };
    [[maybe_unused]] const double c{ 1.2 };
    [[maybe_unused]] const int d{ b };       // b is a compile-time constant

    // The following are runtime constants:
    [[maybe_unused]] const int e{ a };       // a is non-const
    [[maybe_unused]] const int f{ e };       // e is a runtime constant
    [[maybe_unused]] const int g{ five() };  // return value isn't known until runtime
    [[maybe_unused]] const int h{ pass(5) }; // return value isn't known until runtime
    example();
    return 0;
}