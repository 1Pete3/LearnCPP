#include "Question1.h"
#include <string>
#include <iostream>

void getInput() {
	std::cout << "Enter your full name ";
	std::string name{};
	std::getline(std::cin >> std::ws,name);

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;
	std::cout << "Your age + length of is: " << static_cast<int>(name.length()) + age << std::endl;
}