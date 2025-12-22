#include <iostream>
#include <cstdlib>

// The compiler will evaluate gravity == 9.8 at compile time
int main() {
	constexpr double gravity{9.8};
	if constexpr(gravity == 9.8) {
		std::cout << "Gravity is normal" << std::endl;
	}
	else {
		std::cout << "We are not on Earth" << std::endl;
	}
	return EXIT_SUCCESS;
}