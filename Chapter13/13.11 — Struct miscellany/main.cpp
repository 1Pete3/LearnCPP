#include <iostream>

struct Employee {
    int id{};
    int age{};
    double wage{};
};

struct Company {
    int numberOfEmployees{};
    Employee CEO{};
};

struct Foo1 {
    short a{};
    int b{};
    short c{};
};

struct Foo2 {
    int b{};
    short a{};
    short c{};
};

int main()
{
    Company myCompany{ 7,{1,32,55000.0} };
    std::cout << "CEO wage: " << myCompany.CEO.wage << std::endl;
    std::cout << "Foo1 size: " << sizeof(Foo1) << std::endl;
    std::cout << "Foo2 size: " << sizeof(Foo2) << std::endl;
    
    return EXIT_SUCCESS;
}