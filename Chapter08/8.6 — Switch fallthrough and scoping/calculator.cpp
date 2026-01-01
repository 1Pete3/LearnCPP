#include "calculator.h"
#include <cstdint>

int calculate(int x, char mathOperator, int y) {
	switch (mathOperator) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x * y;
	case '%':
		return x % y;
	default:
		std::cout << "Not a valid operator" << std::endl;
		return -1;
	}


	return mathOperator;
}