#include "Quiz.h"
#include <typeinfo>

int main()
{
    int x{ 5 };
    
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "*(&x) = " << *(&x) << std::endl;

    int* ptr{ &x };
    *ptr = 6;
    std::cout << "x = " << x << std::endl;
    std::cout << "*ptr = " << *ptr << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "typeid(&x).name() = " << typeid(&x).name() << std::endl;

    // Size of ptrs
    char* chPtr{};
    int* intPtr{};
    long double* ldPtr{};

    std::cout << "char* chPtr - " << sizeof(chPtr) << std::endl;
    std::cout << "char* intPtr - " << sizeof(intPtr) << std::endl;
    std::cout << "char* ldPtr - " << sizeof(ldPtr) << std::endl;

    question1();
   
    return EXIT_SUCCESS;
}