#include <iostream>
#include "Constants.h"

int question1() {
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num < 0) {
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;
	}

	std::cout << "You entered: " << num << '\n';

	return 0;
}

int question2() {
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;


	if (students > Constants::maxClassSize)
		std::cout << "There are too many students in this class\n";
	else
		std::cout << "This class isn't too large\n";

	return 0;
}

int accumulate(int x) {
	static int total = {};
	total += x;
	return total;
}

int question3() {
	std::cout << accumulate(4) << '\n'; // prints 4
	std::cout << accumulate(3) << '\n'; // prints 7
	std::cout << accumulate(2) << '\n'; // prints 9
	std::cout << accumulate(1) << '\n'; // prints 10
	return 0;
}

int main()
{
	question1();
	question2();
	question3();
}