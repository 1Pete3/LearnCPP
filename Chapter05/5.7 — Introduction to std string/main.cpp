#include <string>
#include <iostream>
#include "Question1.h"

void stringUsage() {
    std::string name{"Alex"};
    name = "John";
    std::cout << "The name is " << name << std::endl;
}

void inputWhiteSpaceIssue() {
    std::cout << "Enter your full name ";
    std::string name{};
    std::cin >> name;

    std::cout << "Enter your favorite color ";
    std::string color{};
    std::cin >> color;

    std::cout << "Your name is " << name << " and your favorite color is " << color << std::endl;
}

void input() {
    std::cout << "Enter your full name ";
    std::string name{};
    std::getline(std::cin >> std::ws,name);

    std::cout << "Enter your favorite color ";
    std::string color{};
    std::getline(std::cin >> std::ws,color);

    std::cout << "Your name is " << name << " and your favorite color is " << color << std::endl;
}

void literals() {
    using namespace std::string_literals;
    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
}

int main()
{
    stringUsage();
    input();
    getInput();
    return 0;
}