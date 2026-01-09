#include <iostream>
#include <cstdlib>

int add(int x, int y) {
	return  x + y;
}

double add(double x, double y) {
	return x + y;
}

int main()
{
	std::cout << add(3,5) << std::endl;
	std::cout << add(6.24576, 2.3) << std::endl;
	return EXIT_SUCCESS;
}