#include <iostream>
#include <cstdlib>

int min(int x, int y) {
	return (x < y) ? x : y;
}

int main()
{
	std::cout << ((5 < 6) ? 5 : 6); // inline expansion instead of using min
	return EXIT_SUCCESS;
}
