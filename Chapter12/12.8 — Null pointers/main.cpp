#include <iostream>
#include <cstdlib>

int main()
{
    int* ptr{nullptr}; // ptr is a null pointer
    int x{ 5 };
    ptr = &x;
    int* ptr2{ &x };
    ptr2 = nullptr;
    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;
    return EXIT_SUCCESS;
}

