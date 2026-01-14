#include <iostream>
#include <cstdlib>

template <int N> // Declare a non-type template parameter
void print() {
	std::cout << N << std::endl;
}

template <int N>
constexpr int factorial() {
	static_assert(N >= 0);
	int product{ 1 };
	for (int i{ 2 }; i <= N; ++i) {
		product *= i;
	}
	return product;

}

int main()
{
	std::cout << factorial<1>() << std::endl;
	std::cout << factorial<3>() << std::endl;
	std::cout << factorial<5>() << std::endl;
	print<5>();
	
	return EXIT_SUCCESS;
}
