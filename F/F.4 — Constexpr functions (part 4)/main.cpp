#include <iostream>
#include <cstdlib>

// goo() is now constexpr
constexpr int goo(int c) {
	return c;
}

// b is not a constant expression within foo()
constexpr int foo(int b) {
	return goo(b);  // if foo() is resolved at compile-time, then `goo(b)` can also be resolved at compile-time
}

int main()
{
	std::cout << foo(5);
	return EXIT_SUCCESS;
}

