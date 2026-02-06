#include <cstdlib>
#include <iostream>

struct Date {
	int day{};
	int month{};
	int year{};

	void print() const {
		std::cout << year << '/' << month << '/' << day << std::endl;
	}
};

void doSomething(const Date& date) {
	date.print();
}

struct Something {
	void print() {
		std::cout << "Non-const" << std::endl;
	}

	void print() const {
		std::cout << "Const" << std::endl;
	}
};

int main() {
	Date today{ 5,2,2026 };
	today.print();


	Something s1{};
	s1.print();

	const Something s2{};
	s2.print();
	return EXIT_SUCCESS;
}