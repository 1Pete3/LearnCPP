#include <iostream>
#include <cstdlib>

void printValue(int& y) {
    std::cout << y << std::endl;
}

int main()
{
    int x{ 5 };
    printValue(x);
    
    const int z{ 5 };
    //printValue(z); // error: z is a non modifiable value
    //printValue(5); // error: 5 is an rvalue
    return EXIT_SUCCESS;
}
