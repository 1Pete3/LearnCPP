#include <iostream>
#include <cstdlib>

using PrintError = int;

PrintError question1() {
    PrintError printData(1);
    return printData;
}

int main()
{
    typedef long miles;
    using Distance = double;
    Distance milesTraveled = 3.6;
    std::cout << "Miles traveled: " << milesTraveled << std::endl;

    std::cout << "Question 1: " << question1() << std::endl;

    return EXIT_SUCCESS;
}

