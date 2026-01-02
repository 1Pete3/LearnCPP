#include <iostream>
#include <cstdlib>

void cleanup() {
	std::cout << "Clean Up!" << std::endl;
}

int main()
{
	std::cout << "In main" << std::endl;
	atexit(cleanup);
	std::cout << "Still in main" << std::endl;
	exit(0);
	std::cout << "Not output :(" << std::endl;
	return EXIT_SUCCESS;
}

