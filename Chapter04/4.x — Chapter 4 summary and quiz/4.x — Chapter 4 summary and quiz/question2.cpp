#include "question2.h"
#include <iostream>
#include <typeinfo>

void print(double x, double y, char operation, double total) {
	std::cout << x << " " << operation << " " << y << " is " << total << std::endl;
}

void getValuesQ2() {
	double firstValue{};
	double secondValue{};
	char operation{};

	std::cout << "Enter a double value: ";
	std::cin >> firstValue;

	std::cout << "Enter a double value: ";
	std::cin >> secondValue;

	std::cout << "Enter +, -, *, or / : ";
	std::cin >> operation;

	switch (operation)
	{
	default:
		break;
	case '+':
		print(firstValue, secondValue, operation, firstValue + secondValue);
		break;
	case '-':
		print(firstValue, secondValue, operation, firstValue - secondValue);
		break;
	case '*':
		print(firstValue, secondValue, operation, firstValue * secondValue);
		break;
	case '/':
		if (secondValue != 0) {
			print(firstValue, secondValue, operation, firstValue / secondValue);
		}
		else {
			std::cout << "Division by 0 not allowed" << std::endl;
		}
		break;
	}
}

