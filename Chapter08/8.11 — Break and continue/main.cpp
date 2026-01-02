#include <iostream>
#include <cstdlib>

void breakExample() {
	for (int i{ 1 }; i <= 10; ++i) {
		if (i == 4) {
			std::cout << "Breaking i = 4" << std::endl;
			break;
		}
		else {
			std::cout << "Not 4, not breaking" << std::endl;
		}
	}
}

void continueExample() {
	// This will print only odd nums
	for (int i{ 1 }; i <= 10; ++i) {
		// Will skip i if it's even
		if (i % 2 == 0) {
			continue;
		}
		else {
			std::cout << "i = " << i << std::endl;
		}
	}
}

int main()
{
	breakExample();
	continueExample();
	return EXIT_SUCCESS;
}