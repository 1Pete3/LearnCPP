#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>

class Ball {
private:
    std::string color{"black"};
    double radius{10.0};
public:
    Ball() {
        print();
    }
    Ball(double radius) :
        radius{ radius } {
        print();
    }
    Ball(std::string_view color) :
        color{ color } {
        print();
    }
    Ball(std::string_view color, double radius) :
        color{ color },
        radius{ radius } {
        print();
    }

    void print() {
        std::cout << "Ball(" << color << ", " << radius << ")" << std::endl;
    }
};



class Employee {
private:
    std::string m_name{ "???" };
    int m_id{0};
public:
    Employee(std::string_view name)
        : Employee{ name, 0 }
    {
    }

    Employee(std::string_view name, int id)
        :m_name{ name }
        , m_id{ id } {
        std::cout << "Employee " << m_name << " created" << std::endl;
    }
};

int main()
{
    Employee e1{ "James" };
    Employee e2{ "Dave",42 };
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };
    return EXIT_SUCCESS;
}