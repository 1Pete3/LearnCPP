#include <iostream>
#include <cstdlib>
#include "max.h"

void foo();

int main()
{
    std::cout << max(3,2) << std::endl;
    foo();
    return EXIT_SUCCESS;
}