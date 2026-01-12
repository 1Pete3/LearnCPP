#include <iostream>
#include <cstdlib>

template <typename T>
T max(T x, T y) {
	return (x < y) ? y : x;
}

int main()
{
	return EXIT_SUCCESS;
}

