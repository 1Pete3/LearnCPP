#include <iostream>
#include <cstdlib>

struct Date {
	int day{};
	int month{};
	int year{};
};

class Employee {
	int m_id{};
	int m_age{};
	double m_wage{};
};

class DateClass {
public:
	int day{};
	int month{};
	int year{};
};

void printDate(const Date& date) {
	std::cout << date.day << '/' << date.month << '/' << date.year << std::endl;
}


int main()
{
	Date date{ 4,10,21 };
	printDate(date);

	Date DateClass{4,10,21};
	printDate(DateClass);
	return EXIT_SUCCESS;
}