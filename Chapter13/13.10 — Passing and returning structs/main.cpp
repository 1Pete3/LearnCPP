#include "questions.h"

struct Employee {
    int id{};
    int age{};
    double wage{};
};

void printEmployee(const Employee& employee) {
    std::cout << "ID: "   << employee.id << std::endl;
    std::cout << "Age: "  << employee.age << std::endl;
    std::cout << "Wage: " << employee.wage << std::endl;
    std::cout << '\n';
}

int main()
{
    Employee joe{ 14,32,24.15 };
    Employee frank{ 15, 28, 18.27 };

    printEmployee(joe);
    printEmployee(Employee{ 14, 32, 24.15 }); // No joe variable as a parameter

    printEmployee(frank);
    printEmployee({ 15, 28, 18.27 }); // No frank variable as a parameter, considered implicit conversion

    question1::printAdRevenue(question1::AdRevenue{10,0.14,16.26 });
    question2::readFractions();

    return EXIT_SUCCESS;
}