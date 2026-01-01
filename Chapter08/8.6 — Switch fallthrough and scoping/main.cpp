#include "calculator.h"

void fallthrough() {
	switch (2) {
	case 1:
		std::cout << 1 << std::endl;
	case 2:
		std::cout << 2 << std::endl;
		[[fallthrough]];
	case 3:
		std::cout << 3 << std::endl;
		break;
	case 4:
		std::cout << 4 << std::endl;
		break;
	case 5:
		std::cout << 5 << std::endl;
		break;
	}

}

int main() {
	fallthrough();

	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
	char op{};
	std::cin >> op;
	int result{ calculate(x, op, y) };

	std::cout << x << ' ' << op << ' ' << y << " is " << result << std::endl;
	return EXIT_SUCCESS;
}