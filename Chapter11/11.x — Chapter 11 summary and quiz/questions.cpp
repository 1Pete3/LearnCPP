#include "questions.h"
#include <string>

namespace question1 {
	void print(int x) {
		std::cout << "int " << x << std::endl;
	}

	void print(double x) {
		std::cout << "double " << x << std::endl;
	}
}

namespace question4 {
	int foo(int n) {
		return n + 10;
	}
}

void printQuestion1() {
	short s{ 5 };
	std::cout << "Question #1 " << std::endl;
	question1::print(s);
}

void printQuestion2() {
	std::cout << "Question #2 " << std::endl;
	std::cout << "add(2,3)     = " << question2::add(2, 3) << std::endl;
	std::cout << "add(1.2,3.4) = " << question2::add(1.2, 3.4) << std::endl;
	std::cout << "mult(2,3)    = " << question2::mult(2, 3) << std::endl;
	std::cout << "mult(1.2,3)  = " << question2::mult(1.2, 3) << std::endl;
	std::cout << "sub(3, 2)    = " << question2::sub(3, 2) << std::endl;
	std::cout << "sub(3.5, 2)  = " << question2::sub(3.5, 2) << std::endl;
	std::cout << "sub(4, 1.5)  = " << question2::sub(4, 1.5) << std::endl;
}

void printQuestion3() {
	std::cout << "Question #3 " << std::endl;
	std::cout << "count(1)         : " << question3::count(1) << std::endl;
	std::cout << "count(1)         : " << question3::count(1) << std::endl;
	std::cout << "count(2.3)       : " << question3::count(2.3) << std::endl;
	std::cout << "count<double>(1) : " << question3::count<double>(2) << std::endl;
}

void printQuestion4() {
	std::cout << "Question #4 " << std::endl;
	std::cout << "foo(1)      : " << question4::foo(1) << std::endl;
	short s{ 2 };
	std::cout << "foo(s)      : " << question4::foo(s) << std::endl;
	std::cout << "foo<int>(4) : " << question4::foo<int>(4) << std::endl;
	std::cout << "foo<int>(s) : " << question4::foo<int>(s) << std::endl;
	std::cout << "foo<>(6)    : " << question4::foo<>(6) << std::endl;
}




