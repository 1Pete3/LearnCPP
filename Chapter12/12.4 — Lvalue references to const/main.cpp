#include <iostream>
#include <cstdlib>
int main()
{
    const double& r1{5};
    std::cout << "r1 : " << r1 << std::endl;

    char  c{ 'a' };
    const int& r2{ c };
    std::cout << "r2 : " << r2 << std::endl;
    
    return EXIT_SUCCESS;
}