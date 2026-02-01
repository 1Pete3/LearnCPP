#include <iostream>


struct Employee {
    int id{};
    int age{};
    int wage{};
};

void printEmployee(const Employee& e)
{
    std::cout << "ID   : "  << e.id   << std::endl;
    std::cout << "Age  : "  << e.age  << std::endl;
    std::cout << "Wage : "  << e.wage << std::endl;
}


int main()
{
    Employee joe{ 1, 34, 65000.0 };
    ++joe.age;
    joe.wage = 68000.0;
    printEmployee(joe);

    Employee* ptr{ &joe };
    std::cout << "Joe's ID: " << ptr->id << std::endl;
    return EXIT_SUCCESS;
}
