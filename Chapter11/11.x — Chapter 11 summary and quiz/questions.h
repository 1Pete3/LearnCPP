#ifndef QUESTIONS_H
#define QUESTIONS_H
#include <iostream>
#include <cstdlib>

namespace question1 {
	void print(int x);
	void print(double x);
}


namespace question2 {
	template<typename T>
	T add(T x, T y) {
		return x + y;
	}

	template <typename T>
	T mult(T x, int y) {
		return x * y;
	}

	template <typename X, typename Y>
	auto sub(X x, Y y) {
		return x - y;
	}
}

namespace question3 {
	template <typename T>
	int count(T) {
		static int c{ 0 };
		return ++c;
	}
}

namespace question4 {
	int foo(int n);
	template <typename T>
	int foo(T n) {
		return n;
	}
}
#endif