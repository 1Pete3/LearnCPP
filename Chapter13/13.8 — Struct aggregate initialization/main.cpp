#include <iostream>
#include <cstdlib>

struct Employee {
    int id{};
    int age{};
    double wage{};
};

std::ostream& operator<<(std::ostream& out, const Employee& e) {
    out << "ID: " << e.id << " Age: " << e.age << " Wage: " << e.wage;
    return out;
}

struct Foo {
    int a{};
    int b{};
    int c{};
};

int main()
{
    Employee frank = { 1,32, 60000.0 }; // Copy-list initialization
    Employee joe{ 2,28,45000.0 };       // List initialization
    Employee robert(3, 45, 62500.0);    // Direct initialization
    Employee bob{ 2,28 };
    std::cout << bob << std::endl;
    
    Foo f1{ .a{1},.c{3} };
    Foo f2{ .a = 1,.c = 3 };
    //Foo f3{ .b{2},.a{1} }; // error: initialization order
    joe = { .id = joe.id, .age = 33, .wage = 66000.0 };

    Foo foo{ 1,2,3 };
    Foo x = foo;
    Foo y(foo);
    Foo z{ foo };

    return EXIT_SUCCESS;

}

