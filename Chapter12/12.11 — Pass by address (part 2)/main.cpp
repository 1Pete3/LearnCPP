#include <iostream>
#include <cstdlib>
#include <cstddef>

void printIDNumber(const int* id = nullptr) {
    if (id) {
        std::cout << "Your ID number is " << *id << std::endl;
    }
    else {
        std::cout << "Your ID number is not known" << std::endl;
    }
}

void print(int x) {
    std::cout << "print(int)  : " << x << std::endl;
}

void print(int* ptr) {
    std::cout << "print(int*) : " << (ptr ? "non-null\n" : "null\n");
}

int main()
{
    printIDNumber();
    int userID{ 34 };
    printIDNumber(&userID);

    int x{ 5 };
    int* ptr{ &x };
    print(ptr);
    print(0);
    print(NULL);
    print(nullptr);

    return EXIT_SUCCESS;
}